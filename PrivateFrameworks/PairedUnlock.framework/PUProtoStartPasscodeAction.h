/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PairedUnlock.framework/PairedUnlock
 */

@interface PUProtoStartPasscodeAction : PBCodable <NSCopying> {
    unsigned int _actionID;
    struct { 
        unsigned int passcodeType : 1; 
    } _has;
    unsigned int _passcodeType;
}

@property unsigned int actionID;
@property BOOL hasPasscodeType;
@property unsigned int passcodeType;

- (unsigned int)actionID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasPasscodeType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)passcodeType;
- (BOOL)readFrom:(id)arg1;
- (void)setActionID:(unsigned int)arg1;
- (void)setHasPasscodeType:(BOOL)arg1;
- (void)setPasscodeType:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end