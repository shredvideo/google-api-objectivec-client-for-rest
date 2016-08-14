// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Service Control API (servicecontrol/v1)
// Description:
//   The Service Control API
// Documentation:
//   https://cloud.google.com/service-control/

#import "GTLRServiceControlQuery.h"

#import "GTLRServiceControlObjects.h"

@implementation GTLRServiceControlQuery

@dynamic fields;

@end

@implementation GTLRServiceControlQuery_ServicesCheck

@dynamic serviceName;

+ (instancetype)queryWithObject:(GTLRServiceControl_CheckRequest *)object
                    serviceName:(NSString *)serviceName {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"serviceName" ];
  NSString *pathURITemplate = @"v1/services/{serviceName}:check";
  GTLRServiceControlQuery_ServicesCheck *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.serviceName = serviceName;
  query.expectedObjectClass = [GTLRServiceControl_CheckResponse class];
  query.loggingName = @"servicecontrol.services.check";
  return query;
}

@end

@implementation GTLRServiceControlQuery_ServicesReport

@dynamic serviceName;

+ (instancetype)queryWithObject:(GTLRServiceControl_ReportRequest *)object
                    serviceName:(NSString *)serviceName {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"serviceName" ];
  NSString *pathURITemplate = @"v1/services/{serviceName}:report";
  GTLRServiceControlQuery_ServicesReport *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.serviceName = serviceName;
  query.expectedObjectClass = [GTLRServiceControl_ReportResponse class];
  query.loggingName = @"servicecontrol.services.report";
  return query;
}

@end
