
# UIView+Constraint

## Examples

### Centering

```objc
    UIView *v1 = [[UIView alloc] initWithFrame:CGRectZero];
    v1.backgroundColor = [UIColor blueColor];
    [self.view addSubview:v1];
    
    [v1 addConstraintWidth:100.0 height:100.0];
    [v1 addConstraintCenteringXY];
```

![ss1](https://raw.githubusercontent.com/ShingoFukuyama/images/master/UIView+Constraint/ss1.png =240x)

### Locate to bottom like toolbar

```objc
    [v1 addConstraintHeight:44.0];
    [v1 addConstraintFromBottom:0];
    [v1 addConstraintFromLeft:0 toRight:0];
```

![ss2](https://raw.githubusercontent.com/ShingoFukuyama/images/master/UIView+Constraint/ss2.png =240x)

### Offset from center

```objc
    [v1 addConstraintWidth:100 height:100];
    [v1 addConstraintCenteringXYWithOffset:UIOffsetMake(-50.0, -50.0)];
```

![ss3](https://raw.githubusercontent.com/ShingoFukuyama/images/master/UIView+Constraint/ss3.png =240x)

### From another view

```objc
    UIView *v1 = [[UIView alloc] initWithFrame:CGRectZero];
    v1.backgroundColor = [UIColor blueColor];
    [self.view addSubview:v1];
    
    UIView *v2 = [[UIView alloc] initWithFrame:CGRectZero];
    v2.backgroundColor = [UIColor greenColor];
    [self.view addSubview:v2];
    
    [v2 addConstraintWidth:100 height:100];
    [v2 addConstraintFromTop:0];
    [v2 addConstraintFromRight:0];
    
    [v1 addConstraintWidth:100 height:100];
    [v1 addConstraintFromViewBottom:v2 distance:50.0];
    [v1 addConstraintFromViewLeft:v2 distance:50.0];
```

![ss4](https://raw.githubusercontent.com/ShingoFukuyama/images/master/UIView+Constraint/ss4.png =240x)

### Fill

```objc
    UIView *v1 = [[UIView alloc] initWithFrame:CGRectZero];
    v1.backgroundColor = [UIColor blueColor];
    [self.view addSubview:v1];
    
    [v1 addConstraintFill];
```

![ss5](https://raw.githubusercontent.com/ShingoFukuyama/images/master/UIView+Constraint/ss5.png =240x)

### Fill with inset

```objc
    UIView *v1 = [[UIView alloc] initWithFrame:CGRectZero];
    v1.backgroundColor = [UIColor blueColor];
    [self.view addSubview:v1];
    
    [v1 addConstraintFillWithInsets:UIEdgeInsetsMake(30.0, 10.0, 100.0, 5.0)];
```

![ss6](https://raw.githubusercontent.com/ShingoFukuyama/images/master/UIView+Constraint/ss6.png =240x)

### Constraint with animation

```objc
    UIView *v1 = [[UIView alloc] initWithFrame:CGRectZero];
    v1.backgroundColor = [UIColor blueColor];
    [self.view addSubview:v1];
    
    NSArray *constraints = [v1 addConstraintFill];
    // Return an array of NSLayoutConstraint @[top, left, bottom, right]
    
    [self.view layoutIfNeeded];
    [UIView animateWithDuration:2.2 delay:0.0 options:UIViewAnimationOptionCurveEaseIn animations:^{
        ((NSLayoutConstraint *)constraints[0]).constant = 500.0;
        [self.view layoutIfNeeded];
    } completion:^(BOOL finished) {
        
    }];
```

![ss7](https://raw.githubusercontent.com/ShingoFukuyama/images/master/UIView+Constraint/ss7.gif =240x)

