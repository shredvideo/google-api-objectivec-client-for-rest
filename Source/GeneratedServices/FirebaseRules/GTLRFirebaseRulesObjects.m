// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Firebase Rules API (firebaserules/v1)
// Description:
//   Creates and manages rules that determine when a Firebase Rules-enabled
//   service should permit a request.
// Documentation:
//   https://firebase.google.com/docs/storage/security

#import "GTLRFirebaseRulesObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRFirebaseRules_Issue.severity
NSString * const kGTLRFirebaseRules_Issue_Severity_Deprecation = @"DEPRECATION";
NSString * const kGTLRFirebaseRules_Issue_Severity_Error       = @"ERROR";
NSString * const kGTLRFirebaseRules_Issue_Severity_SeverityUnspecified = @"SEVERITY_UNSPECIFIED";
NSString * const kGTLRFirebaseRules_Issue_Severity_Warning     = @"WARNING";

// GTLRFirebaseRules_TestResult.state
NSString * const kGTLRFirebaseRules_TestResult_State_Failure   = @"FAILURE";
NSString * const kGTLRFirebaseRules_TestResult_State_StateUnspecified = @"STATE_UNSPECIFIED";
NSString * const kGTLRFirebaseRules_TestResult_State_Success   = @"SUCCESS";

// ----------------------------------------------------------------------------
//
//   GTLRFirebaseRules_Empty
//

@implementation GTLRFirebaseRules_Empty
@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseRules_File
//

@implementation GTLRFirebaseRules_File
@dynamic content, fingerprint, name;
@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseRules_FunctionCall
//

@implementation GTLRFirebaseRules_FunctionCall
@dynamic args, function;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"args" : [NSObject class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseRules_Issue
//

@implementation GTLRFirebaseRules_Issue
@dynamic descriptionProperty, severity, sourcePosition;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseRules_ListReleasesResponse
//

@implementation GTLRFirebaseRules_ListReleasesResponse
@dynamic nextPageToken, releases;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"releases" : [GTLRFirebaseRules_Release class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"releases";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseRules_ListRulesetsResponse
//

@implementation GTLRFirebaseRules_ListRulesetsResponse
@dynamic nextPageToken, rulesets;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"rulesets" : [GTLRFirebaseRules_Ruleset class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"rulesets";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseRules_Release
//

@implementation GTLRFirebaseRules_Release
@dynamic createTime, name, rulesetName, updateTime;
@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseRules_Ruleset
//

@implementation GTLRFirebaseRules_Ruleset
@dynamic createTime, name, source;
@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseRules_Source
//

@implementation GTLRFirebaseRules_Source
@dynamic files;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"files" : [GTLRFirebaseRules_File class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseRules_SourcePosition
//

@implementation GTLRFirebaseRules_SourcePosition
@dynamic column, fileName, line;
@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseRules_TestResult
//

@implementation GTLRFirebaseRules_TestResult
@dynamic debugMessages, errorPosition, functionCalls, state;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"debugMessages" : [NSString class],
    @"functionCalls" : [GTLRFirebaseRules_FunctionCall class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseRules_TestRulesetRequest
//

@implementation GTLRFirebaseRules_TestRulesetRequest
@dynamic source;
@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseRules_TestRulesetResponse
//

@implementation GTLRFirebaseRules_TestRulesetResponse
@dynamic issues, testResults;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"issues" : [GTLRFirebaseRules_Issue class],
    @"testResults" : [GTLRFirebaseRules_TestResult class]
  };
  return map;
}

@end
