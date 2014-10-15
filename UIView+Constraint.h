//
//  UIView+Constraint.h
//
//  Created by FukuyamaShingo on 9/1/14.
//  Copyright (c) 2014 ShingoFukuyama. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Constraint)

/// Return an array of NSLayoutConstraint @[top, left, bottom, right]
- (NSArray *)addConstraintFill;
/// Return an array of NSLayoutConstraint @[top, left, bottom, right]
- (NSArray *)addConstraintFillWithInsets:(UIEdgeInsets)insets;
/// Return an array of NSLayoutConstraint @[top, bottom]
- (NSArray *)addConstraintFromTop:(CGFloat)top toBottom:(CGFloat)bottom;
/// Return an array of NSLayoutConstraint @[left, right]
- (NSArray *)addConstraintFromLeft:(CGFloat)left toRight:(CGFloat)right;

- (NSLayoutConstraint *)addConstraintFromTop:(CGFloat)distance;
- (NSLayoutConstraint *)addConstraintFromBottom:(CGFloat)distance;
- (NSLayoutConstraint *)addConstraintFromLeft:(CGFloat)distance;
- (NSLayoutConstraint *)addConstraintFromRight:(CGFloat)distance;

- (NSLayoutConstraint *)addConstraintWidth:(CGFloat)width;
- (NSLayoutConstraint *)addConstraintHeight:(CGFloat)height;
/// Return an array of NSLayoutConstraint @[width, height]
- (NSArray *)addConstraintWidth:(CGFloat)width height:(CGFloat)height;

- (NSLayoutConstraint *)addConstraintCenteringX;
- (NSLayoutConstraint *)addConstraintCenteringY;
/// Return an array of NSLayoutConstraint @[centerX, centerY]
- (NSArray *)addConstraintCenteringXY;

- (NSLayoutConstraint *)addConstraintCenteringXWithOffset:(CGFloat)offsetX;
- (NSLayoutConstraint *)addConstraintCenteringYWithOffset:(CGFloat)offsetY;
/// Return an array of NSLayoutConstraint @[centerX, centerY]
- (NSArray *)addConstraintCenteringXYWithOffset:(UIOffset)offset;

- (NSLayoutConstraint *)addConstraintFromViewTop:(UIView *)fromView distance:(CGFloat)distance;
- (NSLayoutConstraint *)addConstraintFromViewBottom:(UIView *)fromView distance:(CGFloat)distance;
- (NSLayoutConstraint *)addConstraintFromViewLeft:(UIView *)fromView distance:(CGFloat)distance;
- (NSLayoutConstraint *)addConstraintFromViewRight:(UIView *)fromView distance:(CGFloat)distance;

- (NSLayoutConstraint *)addConstraintAlignViewTop:(UIView *)baseView offset:(CGFloat)offset;
- (NSLayoutConstraint *)addConstraintAlignViewBottom:(UIView *)baseView offset:(CGFloat)offset;
- (NSLayoutConstraint *)addConstraintAlignViewLeft:(UIView *)baseView offset:(CGFloat)offset;
- (NSLayoutConstraint *)addConstraintAlignViewRight:(UIView *)baseView offset:(CGFloat)offset;

- (void)removeAllConstraints;



@end
