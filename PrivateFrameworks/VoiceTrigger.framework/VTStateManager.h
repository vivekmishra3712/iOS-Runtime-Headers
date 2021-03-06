/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface VTStateManager : NSObject {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _callback;

}

+ (id)_serviceClient;
+ (BOOL)enabledByAssertion;
+ (BOOL)onBattery;
+ (void)requestVoiceTriggerEnabled:(BOOL)arg1 forReason:(id)arg2;
+ (void)requestVoiceTriggerEnabledForAlert;
+ (void)suggestVoiceTriggerThresholdLevel:(int)arg1 forReason:(id)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStateTransitionCallback:(id)arg1;
- (void)notify:(BOOL)arg1;

@end
