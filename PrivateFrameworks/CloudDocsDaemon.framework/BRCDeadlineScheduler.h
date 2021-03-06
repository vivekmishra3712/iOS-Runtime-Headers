/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class BRCMinHeap, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface BRCDeadlineScheduler : NSObject <BRCLifeCycle> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _computeNextAdmissibleDateForScheduling;

    NSObject<OS_dispatch_source> *_delay;
    BOOL _isCancelled;
    BOOL _isResumed;
    long long _lastSchedule;
    long long _leeway;
    BRCMinHeap *_minHeap;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
}

@property long long coalescingLeeway;
@property(copy) id computeNextAdmissibleDateForScheduling;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property BOOL isCancelled;
@property(readonly) NSObject<OS_dispatch_queue> * queue;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addToken:(id)arg1 deadline:(long long)arg2;
- (void)_close;
- (BOOL)_isSleepingRequiredForDeadline:(long long)arg1 now:(long long)arg2;
- (void)_schedule;
- (void)cancel;
- (void)close;
- (long long)coalescingLeeway;
- (id)computeNextAdmissibleDateForScheduling;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (BOOL)isCancelled;
- (id)queue;
- (void)resume;
- (void)setCoalescingLeeway:(long long)arg1;
- (void)setComputeNextAdmissibleDateForScheduling:(id)arg1;
- (void)setIsCancelled:(BOOL)arg1;
- (void)signal;
- (void)suspend;

@end
