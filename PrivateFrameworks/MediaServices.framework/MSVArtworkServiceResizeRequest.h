/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@class NSMutableArray, NSURL;

@interface MSVArtworkServiceResizeRequest : MSVArtworkServiceRequest {
    BOOL _overwriteExistingDestinations;
    NSMutableArray *_resizeDestinations;
    NSURL *_sourceURL;
}

@property BOOL overwriteExistingDestinations;
@property(retain) NSMutableArray * resizeDestinations;
@property(copy) NSURL * sourceURL;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addDestinationWithSize:(struct CGSize { float x1; float x2; })arg1 compressionQuality:(float)arg2 url:(id)arg3;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateDestinationsUsingBlock:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceURL:(id)arg1;
- (Class)operationClass;
- (BOOL)overwriteExistingDestinations;
- (id)resizeDestinations;
- (void)setOverwriteExistingDestinations:(BOOL)arg1;
- (void)setResizeDestinations:(id)arg1;
- (void)setSourceURL:(id)arg1;
- (id)sourceURL;

@end
