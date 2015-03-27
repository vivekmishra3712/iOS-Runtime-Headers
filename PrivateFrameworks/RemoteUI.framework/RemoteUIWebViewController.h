/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <RemoteUIWebViewControllerDelegate>, NSString, UIToolbar, UIWebView, _UIBackdropView;

@interface RemoteUIWebViewController : UIViewController <UIWebViewDelegate> {
    <RemoteUIWebViewControllerDelegate> *_delegate;
    id _loadCompletion;
    BOOL _scalesPageToFit;
    _UIBackdropView *_statusBarBackdrop;
    UIToolbar *_toolbar;
    UIWebView *_webView;
}

@property(copy,readonly) NSString * debugDescription;
@property <RemoteUIWebViewControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property BOOL scalesPageToFit;
@property(readonly) Class superclass;
@property(readonly) UIToolbar * toolbar;
@property(readonly) UIWebView * webView;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (void)donePressed:(id)arg1;
- (void)loadURL:(id)arg1 completion:(id)arg2;
- (void)loadURL:(id)arg1;
- (BOOL)scalesPageToFit;
- (void)setDelegate:(id)arg1;
- (void)setScalesPageToFit:(BOOL)arg1;
- (id)toolbar;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (id)webView;
- (void)webViewDidFinishLoad:(id)arg1;

@end