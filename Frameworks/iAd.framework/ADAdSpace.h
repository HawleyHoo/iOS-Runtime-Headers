/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADAdSpace : NSObject <ADCreativeControllerDelegate, ADPrivacyViewControllerInternalDelegate, ADWebViewActionViewControllerDelegate> {
    BOOL  _actionViewControllerReadyForPresentation;
    BOOL  _actionViewControllerWantsDismissal;
    NSString * _advertisingSection;
    NSString * _authenticationUserName;
    NSSet * _context;
    ADCreativeController * _creativeController;
    ADAdActionPublicAttributes * _currentActionPublicAttributes;
    ADAdImpressionPublicAttributes * _currentAdImpressionPublicAttributes;
    BOOL  _didInstallCreativeView;
    BOOL  _fastVisibilityContextIsFeed;
    BOOL  _firedAdStatusEvent;
    NSString * _identifier;
    BOOL  _isModalInterstitial;
    double  _lastSlowCheck;
    ADPrivacyViewController * _privacyViewController;
    <ADAdRecipient> * _recipient;
    ADRemoteActionViewController * _remoteActionViewController;
    _UIAsyncInvocation * _remoteViewControllerRequestCancelationInvocation;
    BOOL  _requiresFastVisibiltyTestOnly;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _selectedAdFrame;
    NSURL * _serverURL;
    BOOL  _serviceAdSpaceRequestInProgress;
    BOOL  _shouldMonitorVisibility;
    BOOL  _shouldPresentActionViewControllerWhenReady;
    BOOL  _shouldTearDownCreativeControllerAfterDismissingRemoteActionViewController;
    int  _visibility;
    BOOL  _visibilityCheckScheduled;
    ADWebViewActionViewController * _webViewActionViewController;
}

@property (nonatomic) BOOL actionViewControllerReadyForPresentation;
@property (nonatomic) BOOL actionViewControllerWantsDismissal;
@property (nonatomic, copy) NSString *advertisingSection;
@property (nonatomic, copy) NSString *authenticationUserName;
@property (nonatomic, readonly) ADAdSpaceConfiguration *configuration;
@property (nonatomic, readonly) NSString *connectionAssertionIdentifier;
@property (nonatomic, copy) NSSet *context;
@property (nonatomic, retain) ADCreativeController *creativeController;
@property (nonatomic, retain) ADAdActionPublicAttributes *currentActionPublicAttributes;
@property (nonatomic, retain) ADAdImpressionPublicAttributes *currentAdImpressionPublicAttributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didInstallCreativeView;
@property (nonatomic) BOOL fastVisibilityContextIsFeed;
@property (nonatomic) BOOL firedAdStatusEvent;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) BOOL isModalInterstitial;
@property (nonatomic) double lastSlowCheck;
@property (nonatomic, retain) ADPrivacyViewController *privacyViewController;
@property (nonatomic, readonly) <ADAdRecipient> *recipient;
@property (nonatomic, retain) ADRemoteActionViewController *remoteActionViewController;
@property (nonatomic, retain) _UIAsyncInvocation *remoteViewControllerRequestCancelationInvocation;
@property (nonatomic) BOOL requiresFastVisibiltyTestOnly;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } selectedAdFrame;
@property (nonatomic, copy) NSURL *serverURL;
@property (nonatomic) BOOL serviceAdSpaceRequestInProgress;
@property (nonatomic) BOOL shouldMonitorVisibility;
@property (nonatomic) BOOL shouldPresentActionViewControllerWhenReady;
@property (nonatomic) BOOL shouldTearDownCreativeControllerAfterDismissingRemoteActionViewController;
@property (readonly) Class superclass;
@property (nonatomic) int visibility;
@property (nonatomic) BOOL visibilityCheckScheduled;
@property (nonatomic, retain) ADWebViewActionViewController *webViewActionViewController;

- (void)_clientApplicationDidBecomeActive;
- (void)_clientApplicationDidEnterBackground;
- (void)_closeConnectionIfNecessary;
- (void)_considerPresentingActionViewController;
- (void)_considerPresentingWebViewActionViewControllerWithURL:(id)arg1;
- (bool)_contextForFeldsparClientIsFeed:(id)arg1;
- (void)_handleMRAIDActionPresentation;
- (void)_notifiyCreativeControllerOfActionViewControllerPresentation;
- (void)_presentPrivacyViewController;
- (void)_remote_actionViewControllerReadyForPresentation;
- (void)_remote_close;
- (void)_remote_creativeDidFailWithError:(id)arg1;
- (void)_remote_dismissViewController;
- (void)_remote_dismissViewControllerWithCompletionHandler:(id /* block */)arg1;
- (void)_remote_openURL:(id)arg1;
- (void)_remote_pauseBannerMedia;
- (void)_remote_requestViewControllerWithClassName:(id)arg1 forAdSpaceControllerWithIdentifier:(id)arg2;
- (void)_remote_resumeBannerMedia;
- (void)_remote_updateActionViewControllerOrientation:(unsigned int)arg1;
- (void)_requestAdFromAdSheet;
- (void)_tearDownCreativeController;
- (void)_tearDownWebActionViewController;
- (BOOL)actionViewControllerReadyForPresentation;
- (BOOL)actionViewControllerWantsDismissal;
- (void)adPrivacyViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)adPrivacyViewControllerDidAppear:(id)arg1;
- (void)adPrivacyViewControllerDidDismiss:(id)arg1;
- (void)adPrivacyViewControllerDidLinkOut:(id)arg1;
- (void)adPrivacyViewControllerDidLoad:(id)arg1;
- (void)adPrivacyViewControllerDidRenderTransparency:(id)arg1;
- (id)advertisingSection;
- (id)authenticationUserName;
- (void)cancelBannerViewAction;
- (void)close;
- (id)configuration;
- (id)connectionAssertionIdentifier;
- (id)context;
- (id)creativeController;
- (void)creativeControllerViewDidRequestCloseWithTapLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)creativeControllerViewDidRequestExpandURL:(id)arg1 withMaximumSize:(struct CGSize { float x1; float x2; })arg2 withTapLocation:(struct CGPoint { float x1; float x2; })arg3;
- (void)creativeControllerViewDidRequestOpenURL:(id)arg1 withTapLocation:(struct CGPoint { float x1; float x2; })arg2;
- (id)currentActionPublicAttributes;
- (id)currentAdImpressionPublicAttributes;
- (void)dealloc;
- (id)description;
- (void)determineActionForTapAtLocation:(struct CGPoint { float x1; float x2; })arg1 inFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withMRAIDAction:(id)arg3 completeHandler:(id /* block */)arg4;
- (BOOL)didInstallCreativeView;
- (void)executeBannerViewActionFrom:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withTapLocation:(struct CGPoint { float x1; float x2; })arg2;
- (BOOL)fastVisibilityContextIsFeed;
- (BOOL)firedAdStatusEvent;
- (id)identifier;
- (void)impressionPublicAttributesDidLoad:(id)arg1;
- (id)initForRecipient:(id)arg1;
- (void)installCreativeView;
- (BOOL)isModalInterstitial;
- (double)lastSlowCheck;
- (id)privacyViewController;
- (id)recipient;
- (void)refuseBannerViewAction;
- (id)remoteActionViewController;
- (id)remoteViewControllerRequestCancelationInvocation;
- (void)reportNativeClickEvent;
- (BOOL)requiresFastVisibiltyTestOnly;
- (void)safariViewControllerDidFinish:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectedAdFrame;
- (id)serverURL;
- (BOOL)serviceAdSpaceRequestInProgress;
- (void)setActionViewControllerReadyForPresentation:(BOOL)arg1;
- (void)setActionViewControllerWantsDismissal:(BOOL)arg1;
- (void)setAdvertisingSection:(id)arg1;
- (void)setAuthenticationUserName:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCreativeController:(id)arg1;
- (void)setCurrentActionPublicAttributes:(id)arg1;
- (void)setCurrentAdImpressionPublicAttributes:(id)arg1;
- (void)setDidInstallCreativeView:(BOOL)arg1;
- (void)setFastVisibilityContextIsFeed:(BOOL)arg1;
- (void)setFiredAdStatusEvent:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsModalInterstitial:(BOOL)arg1;
- (void)setLastSlowCheck:(double)arg1;
- (void)setPrivacyViewController:(id)arg1;
- (void)setRemoteActionViewController:(id)arg1;
- (void)setRemoteViewControllerRequestCancelationInvocation:(id)arg1;
- (void)setRequiresFastVisibiltyTestOnly:(BOOL)arg1;
- (void)setSelectedAdFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setServerURL:(id)arg1;
- (void)setServiceAdSpaceRequestInProgress:(BOOL)arg1;
- (void)setShouldMonitorVisibility:(BOOL)arg1;
- (void)setShouldPresentActionViewControllerWhenReady:(BOOL)arg1;
- (void)setShouldTearDownCreativeControllerAfterDismissingRemoteActionViewController:(BOOL)arg1;
- (void)setVisibility:(int)arg1;
- (void)setVisibilityCheckScheduled:(BOOL)arg1;
- (void)setWebViewActionViewController:(id)arg1;
- (BOOL)shouldMonitorVisibility;
- (BOOL)shouldPresentActionViewControllerWhenReady;
- (BOOL)shouldTearDownCreativeControllerAfterDismissingRemoteActionViewController;
- (void)showAdTransparency;
- (void)startVisibilityMonitoring;
- (void)stopVisibilityMonitoring;
- (void)uninstallCreativeView;
- (void)updateCreativeControllerVisibility;
- (void)updateVisibility;
- (int)visibility;
- (BOOL)visibilityCheckScheduled;
- (id)webViewActionViewController;
- (void)webViewActionViewControllerHomeButtonWasTapped:(id)arg1;

@end
