/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSString;

@interface _PUSliderPlayheadBaseView : UIView <PUPhotoEditLayoutStaticAdaptable> {
    int _layoutOrientation;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) int layoutOrientation;
@property(readonly) Class superclass;

+ (Class)layerClass;

- (void)_updateBaseShape;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)layoutOrientation;
- (void)setupWithLayoutOrientation:(int)arg1;

@end
