/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPCloudAssetDownloadSessionIdentifier, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface MPCloudAssetDownloadController : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_downloadSessions;
    BOOL _downloadSessionsPaused;
    NSObject<OS_dispatch_queue> *_downloadsQueue;
    MPCloudAssetDownloadSessionIdentifier *_prioritizedDownloadSessionIdentifier;
}

+ (id)sharedAssetDownloadController;

- (void).cxx_destruct;
- (id)_assetForExistingDownloadSession:(id)arg1 context:(id)arg2 downloadSessionID:(id)arg3 wantingHighQuality:(BOOL)arg4 returningShouldAttemptFurtherLoad:(out BOOL*)arg5;
- (id)_cachedAssetDestinationDirectory;
- (BOOL)_canPlayCachedAssetAtPath:(id)arg1;
- (void)_cancelDownloadSessionIfInappropriateForCurrentNetwork:(id)arg1;
- (void)_cancelDownloadSessionWithIdentifier:(id)arg1;
- (BOOL)_downloadExistsWithSessionIdentifier:(id)arg1;
- (void)_downloadFailedNotification:(id)arg1;
- (void)_downloadFileSizeAvailableNotification:(id)arg1;
- (id)_downloadKeyCookieWithValue:(id)arg1 URL:(id)arg2;
- (void)_downloadSucceededNotification:(id)arg1;
- (id)_lowBitrateCachedAssetDestinationDirectory;
- (void)_matchCellularDataRestrictedDidChangeNotification:(id)arg1;
- (void)_networkTypeChangedNotification:(id)arg1;
- (id)_newAVAssetForContext:(id)arg1;
- (id)_newAVAssetForPurchaseResponseDictionary:(id)arg1 context:(id)arg2 preferredAssetFlavor:(id)arg3;
- (id)_newAssetForExistingDownloadSession:(id)arg1 context:(id)arg2;
- (void)_prioritizeDownloadSession:(id)arg1;
- (void)_removeNotificationObserversForDownloadSession:(id)arg1;
- (void)_resumedPausedDownloadSessionsForCompletedSessionWithIdentifier:(id)arg1;
- (void)_stopDownloadsBasedOnCurrentNetworkIfNeeded;
- (id)_urlConnectionRequestForContext:(id)arg1;
- (id)assetForContext:(id)arg1;
- (void)cancelSessionForContext:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)pauseAllDownloadSessions;
- (void)prioritizeDownloadSessionForContext:(id)arg1;
- (void)resumeAllDownloadSessions;

@end
