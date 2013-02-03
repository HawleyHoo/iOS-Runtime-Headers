/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSSet;

@interface CoreDAVPropPatchTask : CoreDAVTask {
    NSSet *_propPatchRemoveElements;
    NSSet *_propPatchSetElements;
}

@property <CoreDAVPropPatchTaskDelegate> *delegate;
@property(retain) NSSet *propPatchRemoveElements;
@property(retain) NSSet *propPatchSetElements;

- (void)dealloc;
- (id)description;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithPropertiesToSet:(id)arg1 andRemove:(id)arg2 atRelativeURL:(id)arg3;
- (id)initWithRelativeURI:(id)arg1;
- (BOOL)processData:(id)arg1 withParser:(id)arg2;
- (id)propPatchRemoveElements;
- (id)propPatchSetElements;
- (id)requestBody;
- (void)setPropPatchRemoveElements:(id)arg1;
- (void)setPropPatchSetElements:(id)arg1;

@end