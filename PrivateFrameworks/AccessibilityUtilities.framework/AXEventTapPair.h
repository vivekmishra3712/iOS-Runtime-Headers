/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface AXEventTapPair : NSObject {
    struct __IOHIDEventSystemClient { } *_systemClient;
    int _type;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id handler;

    NSString *identifier;
    int priority;
}

@property(copy) id handler;
@property(copy) NSString * identifier;
@property int priority;
@property(retain) struct __IOHIDEventSystemClient { }* systemClient;
@property int type;

- (void)dealloc;
- (id)description;
- (id)handler;
- (id)identifier;
- (int)priority;
- (void)setHandler:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPriority:(int)arg1;
- (void)setSystemClient:(struct __IOHIDEventSystemClient { }*)arg1;
- (void)setType:(int)arg1;
- (struct __IOHIDEventSystemClient { }*)systemClient;
- (int)type;

@end
