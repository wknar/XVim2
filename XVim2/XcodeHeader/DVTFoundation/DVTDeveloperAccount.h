//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/DVTServicesSessionProvider-Protocol.h>

@class DVTDeveloperAccountCredentials, DVTDeveloperAccountSession, DVTDispatchLock, NSDictionary, NSString;

@interface DVTDeveloperAccount : NSObject <DVTServicesSessionProvider>
{
    DVTDispatchLock *_lock;
    BOOL _enabled;
    DVTDeveloperAccountSession *_session;
    DVTDeveloperAccountCredentials *_accountCredentials;
    NSString *_credentialsErrorDescription;
    long long _accountType;
    NSString *_userDescription;
}

+ (BOOL)isInvalidCredentialsError:(id)arg1;
+ (id)keyPathsForValuesAffectingUserDescriptionOrBestGuess;
+ (id)keyPathsForValuesAffectingHasPassword;
+ (id)keyPathsForValuesAffectingPassword;
+ (id)keyPathsForValuesAffectingSession;
+ (id)_accountWithPropertyListRepresentation:(id)arg1 keychain:(id)arg2 error:(id *)arg3;
+ (id)accountWithIdentity:(struct __SecIdentity *)arg1;
+ (id)accountWithCredentials:(id)arg1;
@property(copy, nonatomic) NSString *userDescription; // @synthesize userDescription=_userDescription;
@property BOOL enabled; // @synthesize enabled=_enabled;
@property long long accountType; // @synthesize accountType=_accountType;
@property(retain) NSString *credentialsErrorDescription; // @synthesize credentialsErrorDescription=_credentialsErrorDescription;
@property(copy) DVTDeveloperAccountCredentials *accountCredentials; // @synthesize accountCredentials=_accountCredentials;
- (void).cxx_destruct;
- (void)checkForValidCredentials:(CDUnknownBlockType)arg1;
- (void)validateCredentialsWithCallback:(CDUnknownBlockType)arg1;
@property(readonly) NSDictionary *propertyListRepresentation;
@property(readonly) NSString *userDescriptionOrBestGuess;
@property(readonly) BOOL hasPassword;
@property(copy) NSString *password;
@property(readonly) NSString *certSerialNumber;
@property(readonly) NSString *certCommonName;
@property(readonly) struct __SecIdentity *identity;
@property(readonly) BOOL isCertBased;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, copy) NSString *username;
- (void)revokeSession:(id)arg1;
- (id)sessionIfAvailable;
@property(readonly) DVTDeveloperAccountSession *session; // @synthesize session=_session;
- (void)executeWithSession:(CDUnknownBlockType)arg1;
- (id)_sessionByLoggingInIfNeededWithinLock:(id *)arg1;
- (id)sessionByLoggingInIfNeeded:(id *)arg1;
- (id)_sessionByLoggingIn:(id *)arg1;
- (id)servicesSessionWithError:(id *)arg1;
- (id)init;
- (id)description;

@end

