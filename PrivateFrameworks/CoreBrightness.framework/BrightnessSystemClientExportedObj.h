/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class BrightnessSystemClientInternal, NSObject<OS_dispatch_queue>, NSString;

@interface BrightnessSystemClientExportedObj : NSObject <BacklightSystemDelegateXpcProtocol> {
    BrightnessSystemClientInternal *_target;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id clientBlock;

    NSObject<OS_dispatch_queue> *queue;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property BrightnessSystemClientInternal * target;

- (void)dealloc;
- (void)notifyChangedProperty:(id)arg1 value:(id)arg2;
- (void)registerNotificationBlock:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)unregisterNotificationBlock;

@end
