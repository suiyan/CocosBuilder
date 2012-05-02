/*
 * CocosBuilder: http://www.cocosbuilder.com
 *
 * Copyright (c) 2012 Zynga Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#import <Foundation/Foundation.h>
#import "cocos2d.h"

enum
{
    kCCBPositionTypeRelativeBottomLeft,
    kCCBPositionTypeRelativeTopLeft,
    kCCBPositionTypeRelativeTopRight,
    kCCBPositionTypeRelativeBottomRight,
    kCCBPositionTypePercent
};

enum
{
    kCCBSizeTypeAbsolute,
    kCCBSizeTypePercent,
    kCCBSizeTypeRelativeContainer,
    kCCBSizeTypeHorizontalPercent,
    kCCBSzieTypeVerticalPercent
};

enum
{
    kCCBScaleTypeAbsolute,
    kCCBScaleTypeMultiplyResolution
};

@interface PositionPropertySetter : NSObject

+ (CGSize) getParentSize:(CCNode*) node;

+ (void) setPosition:(NSPoint)pos type:(int)type forNode:(CCNode*) node prop:(NSString*)prop;
+ (void) setPosition:(NSPoint)pos forNode:(CCNode *)node prop:(NSString *)prop;
+ (void) setPositionType:(int)type forNode:(CCNode*)node prop:(NSString*)prop;
+ (CGPoint) positionForNode:(CCNode*)node prop:(NSString*)prop;
+ (int) positionTypeForNode:(CCNode*)node prop:(NSString*)prop;

+ (void) setSize:(NSSize)size type:(int)type forNode:(CCNode*)node prop:(NSString*)prop;
+ (void) setSize:(NSSize)size forNode:(CCNode *)node prop:(NSString *)prop;
+ (NSSize) sizeForNode:(CCNode*)node prop:(NSString*)prop;
+ (int) sizeTypeForNode:(CCNode*)node prop:(NSString*)prop;
+ (void) refreshSizeForNode:(CCNode*)node prop:(NSString*)prop;

+ (void) setScaledX:(float)scaleX Y:(float)scaleY type:(int)type forNode:(CCNode*)node prop:(NSString*)prop;
+ (float) scaleXForNode:(CCNode*)node prop:(NSString*)prop;
+ (float) scaleYForNode:(CCNode*)node prop:(NSString*)prop;
+ (int) scaledFloatTypeForNode:(CCNode*)node prop:(NSString*)prop;

+ (void) refreshPositionsForChildren:(CCNode*)node;
+ (void) refreshAllPositions;

@end
