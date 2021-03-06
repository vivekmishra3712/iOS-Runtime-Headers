/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSTimer;

@interface IMNetworkAvailability : NSObject {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    void *_context;
    unsigned int _flags;
    NSString *_guid;
    unsigned int _options;
    double _startTime;
    double _timeout;
    NSTimer *_timer;
    double _wifiTimeout;
}

@property void* context;

- (void)_cancel;
- (void)_setTimer;
- (void)_timerHit:(id)arg1;
- (void)cancel;
- (void*)context;
- (void)dealloc;
- (id)initWithFlags:(unsigned int)arg1 options:(unsigned int)arg2 timeout:(double)arg3 wifiTimeout:(double)arg4 completionBlock:(id)arg5;
- (id)initWithFlags:(unsigned int)arg1 timeout:(double)arg2 wifiTimeout:(double)arg3 completionBlock:(id)arg4;
- (void)setContext:(void*)arg1;
- (void)start;

@end
