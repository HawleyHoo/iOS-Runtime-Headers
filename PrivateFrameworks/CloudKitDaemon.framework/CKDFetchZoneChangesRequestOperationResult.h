/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchZoneChangesRequestOperationResult : NSObject {
    NSData * _resultClientChangeTokenData;
    NSData * _resultServerChangeTokenData;
    int  _status;
}

@property (nonatomic, retain) NSData *resultClientChangeTokenData;
@property (nonatomic, retain) NSData *resultServerChangeTokenData;
@property (nonatomic) int status;

- (void).cxx_destruct;
- (id)init;
- (id)resultClientChangeTokenData;
- (id)resultServerChangeTokenData;
- (void)setResultClientChangeTokenData:(id)arg1;
- (void)setResultServerChangeTokenData:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;

@end