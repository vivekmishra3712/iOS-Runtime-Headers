/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@class NSString;

@interface NNMKSyncedAccount : NSObject {
    NSString *_accountId;
    NSString *_displayName;
    unsigned int _resendInterval;
    BOOL _resendRequested;
    BOOL _shouldArchive;
}

@property(retain) NSString * accountId;
@property(retain) NSString * displayName;
@property unsigned int resendInterval;
@property BOOL resendRequested;
@property BOOL shouldArchive;

- (void).cxx_destruct;
- (id)accountId;
- (id)displayName;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (unsigned int)resendInterval;
- (BOOL)resendRequested;
- (void)setAccountId:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setResendInterval:(unsigned int)arg1;
- (void)setResendRequested:(BOOL)arg1;
- (void)setShouldArchive:(BOOL)arg1;
- (BOOL)shouldArchive;

@end
