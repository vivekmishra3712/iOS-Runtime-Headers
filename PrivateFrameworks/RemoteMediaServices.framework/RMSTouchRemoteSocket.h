/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@class <RMSTouchRemoteSocketDelegate>, NSOutputStream, NSString;

@interface RMSTouchRemoteSocket : NSObject <NSStreamDelegate> {
    <RMSTouchRemoteSocketDelegate> *_delegate;
    unsigned int _encryptionKey;
    NSString *_host;
    NSOutputStream *_outputStream;
    unsigned int _port;
}

@property(copy,readonly) NSString * debugDescription;
@property <RMSTouchRemoteSocketDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)_encryptData:(id)arg1;
- (void)connect;
- (void)dealloc;
- (id)delegate;
- (void)disconnect;
- (id)initWithHost:(id)arg1 port:(int)arg2 encryptionKey:(int)arg3;
- (BOOL)sendTouchCode:(int)arg1 timeInMilliseconds:(unsigned long)arg2 location:(struct CGPoint { float x1; float x2; })arg3;
- (void)setDelegate:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned int)arg2;

@end
