// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Firebase Rules API (firebaserules/v1)
// Description:
//   Creates and manages rules that determine when a Firebase Rules-enabled
//   service should permit a request.
// Documentation:
//   https://firebase.google.com/docs/storage/security

#import "GTLRFirebaseRulesAPI.h"

// ----------------------------------------------------------------------------
// Authorization scopes

NSString * const kGTLRAuthScopeFirebaseRulesAPICloudPlatform   = @"https://www.googleapis.com/auth/cloud-platform";
NSString * const kGTLRAuthScopeFirebaseRulesAPIFirebase        = @"https://www.googleapis.com/auth/firebase";
NSString * const kGTLRAuthScopeFirebaseRulesAPIFirebaseReadonly = @"https://www.googleapis.com/auth/firebase.readonly";

// ----------------------------------------------------------------------------
//   GTLRFirebaseRulesAPIService
//

@implementation GTLRFirebaseRulesAPIService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://firebaserules.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint", @"pp" ];
  }
  return self;
}

@end
