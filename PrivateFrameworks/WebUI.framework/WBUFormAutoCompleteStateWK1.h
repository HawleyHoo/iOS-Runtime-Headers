/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUFormAutoCompleteStateWK1 : WBUFormAutoCompleteState {
    DOMHTMLInputElement * _textField;
    WebFrame * _webFrame;
}

@property (nonatomic, readonly) WebFrame *webFrame;

- (void).cxx_destruct;
- (void)annotateForm:(int)arg1 withValues:(id)arg2;
- (void)autoFillGeneratedPassword:(id)arg1 inForm:(int)arg2;
- (void)autoFillValues:(id)arg1 setAutoFilled:(BOOL)arg2 andFocusFieldAfterFilling:(BOOL)arg3 fieldToFocus:(id)arg4;
- (void)dealloc;
- (void)fetchFormMetadataWithCompletion:(id /* block */)arg1;
- (void)fillGeneratedPassword:(id)arg1 inField:(id)arg2;
- (id)frame;
- (void)getTextFieldMetadata:(id*)arg1 formMetadata:(id*)arg2;
- (id)initWithTextField:(id)arg1 webFrame:(id)arg2;
- (void)invalidate;
- (void)setAutoFillButtonTitle:(id)arg1;
- (void)setFormControls:(id)arg1 areAutoFilled:(BOOL)arg2 clearField:(id)arg3;
- (void)setShowingKeyboardInputView:(BOOL)arg1;
- (id)textFieldValue;
- (id)webFrame;
- (id)webView;

@end
