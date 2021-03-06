/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSObject<OS_dispatch_queue>, NSString, TSPPasteboard;

@interface TSPPasteboardReadChannel : NSObject <TSUStreamReadChannel> {
    TSPPasteboard *_pasteboard;
    NSString *_pasteboardType;
    NSObject<OS_dispatch_queue> *_readQueue;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (id)initWithPasteboard:(id)arg1 pasteboardType:(id)arg2;
- (void)readWithHandler:(id)arg1;

@end
