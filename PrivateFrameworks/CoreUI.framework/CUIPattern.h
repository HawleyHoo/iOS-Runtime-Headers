/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPattern : NSObject {
    float  _alpha;
    struct CGPattern { } * _pattern;
    struct CGImage { } * _patternImage;
}

@property (nonatomic) float alpha;

- (struct CGPattern { }*)_newPattern;
- (float)alpha;
- (void)dealloc;
- (id)description;
- (id)initWithImageRef:(struct CGImage { }*)arg1;
- (struct CGPattern { }*)pattern;
- (struct CGImage { }*)patternImageRef;
- (void)setAlpha:(float)arg1;
- (void)setPatternInContext:(struct CGContext { }*)arg1;

@end
