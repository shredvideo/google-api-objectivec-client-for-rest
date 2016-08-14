// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Ad Exchange Buyer API (adexchangebuyer/v1.4)
// Description:
//   Accesses your bidding-account information, submits creatives for
//   validation, finds available direct deals, and retrieves performance
//   reports.
// Documentation:
//   https://developers.google.com/ad-exchange/buyer-rest

#import "GTLRAdExchangeBuyerQuery.h"

#import "GTLRAdExchangeBuyerObjects.h"

// ----------------------------------------------------------------------------
// Constants

// dealsStatusFilter
NSString * const kGTLRAdExchangeBuyerDealsStatusFilterApproved = @"approved";
NSString * const kGTLRAdExchangeBuyerDealsStatusFilterConditionallyApproved = @"conditionally_approved";
NSString * const kGTLRAdExchangeBuyerDealsStatusFilterDisapproved = @"disapproved";
NSString * const kGTLRAdExchangeBuyerDealsStatusFilterNotChecked = @"not_checked";

// openAuctionStatusFilter
NSString * const kGTLRAdExchangeBuyerOpenAuctionStatusFilterApproved = @"approved";
NSString * const kGTLRAdExchangeBuyerOpenAuctionStatusFilterConditionallyApproved = @"conditionally_approved";
NSString * const kGTLRAdExchangeBuyerOpenAuctionStatusFilterDisapproved = @"disapproved";
NSString * const kGTLRAdExchangeBuyerOpenAuctionStatusFilterNotChecked = @"not_checked";

// updateAction
NSString * const kGTLRAdExchangeBuyerUpdateActionAccept        = @"accept";
NSString * const kGTLRAdExchangeBuyerUpdateActionCancel        = @"cancel";
NSString * const kGTLRAdExchangeBuyerUpdateActionPropose       = @"propose";
NSString * const kGTLRAdExchangeBuyerUpdateActionUnknownAction = @"unknownAction";
NSString * const kGTLRAdExchangeBuyerUpdateActionUpdateFinalized = @"updateFinalized";

// ----------------------------------------------------------------------------
// Query Classes
//

@implementation GTLRAdExchangeBuyerQuery

@dynamic fields;

@end

@implementation GTLRAdExchangeBuyerQuery_AccountsGet

@dynamic identifier;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  return @{ @"identifier" : @"id" };
}

+ (instancetype)queryWithIdentifier:(NSInteger)identifier {
  NSArray *pathParams = @[ @"id" ];
  NSString *pathURITemplate = @"accounts/{id}";
  GTLRAdExchangeBuyerQuery_AccountsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLRAdExchangeBuyer_Account class];
  query.loggingName = @"adexchangebuyer.accounts.get";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_AccountsList

+ (instancetype)query {
  NSString *pathURITemplate = @"accounts";
  GTLRAdExchangeBuyerQuery_AccountsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.expectedObjectClass = [GTLRAdExchangeBuyer_AccountsList class];
  query.loggingName = @"adexchangebuyer.accounts.list";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_AccountsPatch

@dynamic identifier;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  return @{ @"identifier" : @"id" };
}

+ (instancetype)queryWithObject:(GTLRAdExchangeBuyer_Account *)object
                     identifier:(NSInteger)identifier {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"id" ];
  NSString *pathURITemplate = @"accounts/{id}";
  GTLRAdExchangeBuyerQuery_AccountsPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.identifier = identifier;
  query.expectedObjectClass = [GTLRAdExchangeBuyer_Account class];
  query.loggingName = @"adexchangebuyer.accounts.patch";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_AccountsUpdate

@dynamic identifier;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  return @{ @"identifier" : @"id" };
}

+ (instancetype)queryWithObject:(GTLRAdExchangeBuyer_Account *)object
                     identifier:(NSInteger)identifier {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"id" ];
  NSString *pathURITemplate = @"accounts/{id}";
  GTLRAdExchangeBuyerQuery_AccountsUpdate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PUT"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.identifier = identifier;
  query.expectedObjectClass = [GTLRAdExchangeBuyer_Account class];
  query.loggingName = @"adexchangebuyer.accounts.update";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_BillingInfoGet

@dynamic accountId;

+ (instancetype)queryWithAccountId:(NSInteger)accountId {
  NSArray *pathParams = @[ @"accountId" ];
  NSString *pathURITemplate = @"billinginfo/{accountId}";
  GTLRAdExchangeBuyerQuery_BillingInfoGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.accountId = accountId;
  query.expectedObjectClass = [GTLRAdExchangeBuyer_BillingInfo class];
  query.loggingName = @"adexchangebuyer.billingInfo.get";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_BillingInfoList

+ (instancetype)query {
  NSString *pathURITemplate = @"billinginfo";
  GTLRAdExchangeBuyerQuery_BillingInfoList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.expectedObjectClass = [GTLRAdExchangeBuyer_BillingInfoList class];
  query.loggingName = @"adexchangebuyer.billingInfo.list";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_BudgetGet

@dynamic accountId, billingId;

+ (instancetype)queryWithAccountId:(long long)accountId
                         billingId:(long long)billingId {
  NSArray *pathParams = @[
    @"accountId", @"billingId"
  ];
  NSString *pathURITemplate = @"billinginfo/{accountId}/{billingId}";
  GTLRAdExchangeBuyerQuery_BudgetGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.accountId = accountId;
  query.billingId = billingId;
  query.expectedObjectClass = [GTLRAdExchangeBuyer_Budget class];
  query.loggingName = @"adexchangebuyer.budget.get";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_BudgetPatch

@dynamic accountId, billingId;

+ (instancetype)queryWithObject:(GTLRAdExchangeBuyer_Budget *)object
                      accountId:(long long)accountId
                      billingId:(long long)billingId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[
    @"accountId", @"billingId"
  ];
  NSString *pathURITemplate = @"billinginfo/{accountId}/{billingId}";
  GTLRAdExchangeBuyerQuery_BudgetPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.accountId = accountId;
  query.billingId = billingId;
  query.expectedObjectClass = [GTLRAdExchangeBuyer_Budget class];
  query.loggingName = @"adexchangebuyer.budget.patch";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_BudgetUpdate

@dynamic accountId, billingId;

+ (instancetype)queryWithObject:(GTLRAdExchangeBuyer_Budget *)object
                      accountId:(long long)accountId
                      billingId:(long long)billingId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[
    @"accountId", @"billingId"
  ];
  NSString *pathURITemplate = @"billinginfo/{accountId}/{billingId}";
  GTLRAdExchangeBuyerQuery_BudgetUpdate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PUT"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.accountId = accountId;
  query.billingId = billingId;
  query.expectedObjectClass = [GTLRAdExchangeBuyer_Budget class];
  query.loggingName = @"adexchangebuyer.budget.update";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_CreativesAddDeal

@dynamic accountId, buyerCreativeId, dealId;

+ (instancetype)queryWithAccountId:(NSInteger)accountId
                   buyerCreativeId:(NSString *)buyerCreativeId
                            dealId:(long long)dealId {
  NSArray *pathParams = @[
    @"accountId", @"buyerCreativeId", @"dealId"
  ];
  NSString *pathURITemplate = @"creatives/{accountId}/{buyerCreativeId}/addDeal/{dealId}";
  GTLRAdExchangeBuyerQuery_CreativesAddDeal *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.accountId = accountId;
  query.buyerCreativeId = buyerCreativeId;
  query.dealId = dealId;
  query.loggingName = @"adexchangebuyer.creatives.addDeal";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_CreativesGet

@dynamic accountId, buyerCreativeId;

+ (instancetype)queryWithAccountId:(NSInteger)accountId
                   buyerCreativeId:(NSString *)buyerCreativeId {
  NSArray *pathParams = @[
    @"accountId", @"buyerCreativeId"
  ];
  NSString *pathURITemplate = @"creatives/{accountId}/{buyerCreativeId}";
  GTLRAdExchangeBuyerQuery_CreativesGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.accountId = accountId;
  query.buyerCreativeId = buyerCreativeId;
  query.expectedObjectClass = [GTLRAdExchangeBuyer_Creative class];
  query.loggingName = @"adexchangebuyer.creatives.get";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_CreativesInsert

+ (instancetype)queryWithObject:(GTLRAdExchangeBuyer_Creative *)object {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSString *pathURITemplate = @"creatives";
  GTLRAdExchangeBuyerQuery_CreativesInsert *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:nil];
  query.bodyObject = object;
  query.expectedObjectClass = [GTLRAdExchangeBuyer_Creative class];
  query.loggingName = @"adexchangebuyer.creatives.insert";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_CreativesList

@dynamic accountId, buyerCreativeId, dealsStatusFilter, maxResults,
         openAuctionStatusFilter, pageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"accountId" : [NSNumber class],
    @"buyerCreativeId" : [NSString class]
  };
  return map;
}

+ (instancetype)query {
  NSString *pathURITemplate = @"creatives";
  GTLRAdExchangeBuyerQuery_CreativesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.expectedObjectClass = [GTLRAdExchangeBuyer_CreativesList class];
  query.loggingName = @"adexchangebuyer.creatives.list";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_CreativesRemoveDeal

@dynamic accountId, buyerCreativeId, dealId;

+ (instancetype)queryWithAccountId:(NSInteger)accountId
                   buyerCreativeId:(NSString *)buyerCreativeId
                            dealId:(long long)dealId {
  NSArray *pathParams = @[
    @"accountId", @"buyerCreativeId", @"dealId"
  ];
  NSString *pathURITemplate = @"creatives/{accountId}/{buyerCreativeId}/removeDeal/{dealId}";
  GTLRAdExchangeBuyerQuery_CreativesRemoveDeal *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.accountId = accountId;
  query.buyerCreativeId = buyerCreativeId;
  query.dealId = dealId;
  query.loggingName = @"adexchangebuyer.creatives.removeDeal";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_MarketplacedealsDelete

@dynamic proposalId;

+ (instancetype)queryWithObject:(GTLRAdExchangeBuyer_DeleteOrderDealsRequest *)object
                     proposalId:(NSString *)proposalId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"proposalId" ];
  NSString *pathURITemplate = @"proposals/{proposalId}/deals/delete";
  GTLRAdExchangeBuyerQuery_MarketplacedealsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.proposalId = proposalId;
  query.expectedObjectClass = [GTLRAdExchangeBuyer_DeleteOrderDealsResponse class];
  query.loggingName = @"adexchangebuyer.marketplacedeals.delete";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_MarketplacedealsInsert

@dynamic proposalId;

+ (instancetype)queryWithObject:(GTLRAdExchangeBuyer_AddOrderDealsRequest *)object
                     proposalId:(NSString *)proposalId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"proposalId" ];
  NSString *pathURITemplate = @"proposals/{proposalId}/deals/insert";
  GTLRAdExchangeBuyerQuery_MarketplacedealsInsert *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.proposalId = proposalId;
  query.expectedObjectClass = [GTLRAdExchangeBuyer_AddOrderDealsResponse class];
  query.loggingName = @"adexchangebuyer.marketplacedeals.insert";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_MarketplacedealsList

@dynamic pqlQuery, proposalId;

+ (instancetype)queryWithProposalId:(NSString *)proposalId {
  NSArray *pathParams = @[ @"proposalId" ];
  NSString *pathURITemplate = @"proposals/{proposalId}/deals";
  GTLRAdExchangeBuyerQuery_MarketplacedealsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.proposalId = proposalId;
  query.expectedObjectClass = [GTLRAdExchangeBuyer_GetOrderDealsResponse class];
  query.loggingName = @"adexchangebuyer.marketplacedeals.list";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_MarketplacedealsUpdate

@dynamic proposalId;

+ (instancetype)queryWithObject:(GTLRAdExchangeBuyer_EditAllOrderDealsRequest *)object
                     proposalId:(NSString *)proposalId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"proposalId" ];
  NSString *pathURITemplate = @"proposals/{proposalId}/deals/update";
  GTLRAdExchangeBuyerQuery_MarketplacedealsUpdate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.proposalId = proposalId;
  query.expectedObjectClass = [GTLRAdExchangeBuyer_EditAllOrderDealsResponse class];
  query.loggingName = @"adexchangebuyer.marketplacedeals.update";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_MarketplacenotesInsert

@dynamic proposalId;

+ (instancetype)queryWithObject:(GTLRAdExchangeBuyer_AddOrderNotesRequest *)object
                     proposalId:(NSString *)proposalId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"proposalId" ];
  NSString *pathURITemplate = @"proposals/{proposalId}/notes/insert";
  GTLRAdExchangeBuyerQuery_MarketplacenotesInsert *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.proposalId = proposalId;
  query.expectedObjectClass = [GTLRAdExchangeBuyer_AddOrderNotesResponse class];
  query.loggingName = @"adexchangebuyer.marketplacenotes.insert";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_MarketplacenotesList

@dynamic pqlQuery, proposalId;

+ (instancetype)queryWithProposalId:(NSString *)proposalId {
  NSArray *pathParams = @[ @"proposalId" ];
  NSString *pathURITemplate = @"proposals/{proposalId}/notes";
  GTLRAdExchangeBuyerQuery_MarketplacenotesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.proposalId = proposalId;
  query.expectedObjectClass = [GTLRAdExchangeBuyer_GetOrderNotesResponse class];
  query.loggingName = @"adexchangebuyer.marketplacenotes.list";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_MarketplaceprivateauctionUpdateproposal

@dynamic privateAuctionId;

+ (instancetype)queryWithObject:(GTLRAdExchangeBuyer_UpdatePrivateAuctionProposalRequest *)object
               privateAuctionId:(NSString *)privateAuctionId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"privateAuctionId" ];
  NSString *pathURITemplate = @"privateauction/{privateAuctionId}/updateproposal";
  GTLRAdExchangeBuyerQuery_MarketplaceprivateauctionUpdateproposal *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.privateAuctionId = privateAuctionId;
  query.loggingName = @"adexchangebuyer.marketplaceprivateauction.updateproposal";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_PerformanceReportList

@dynamic accountId, endDateTime, maxResults, pageToken, startDateTime;

+ (instancetype)queryWithAccountId:(long long)accountId
                       endDateTime:(NSString *)endDateTime
                     startDateTime:(NSString *)startDateTime {
  NSString *pathURITemplate = @"performancereport";
  GTLRAdExchangeBuyerQuery_PerformanceReportList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.accountId = accountId;
  query.endDateTime = endDateTime;
  query.startDateTime = startDateTime;
  query.expectedObjectClass = [GTLRAdExchangeBuyer_PerformanceReportList class];
  query.loggingName = @"adexchangebuyer.performanceReport.list";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_PretargetingConfigDelete

@dynamic accountId, configId;

+ (instancetype)queryWithAccountId:(long long)accountId
                          configId:(long long)configId {
  NSArray *pathParams = @[
    @"accountId", @"configId"
  ];
  NSString *pathURITemplate = @"pretargetingconfigs/{accountId}/{configId}";
  GTLRAdExchangeBuyerQuery_PretargetingConfigDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.accountId = accountId;
  query.configId = configId;
  query.loggingName = @"adexchangebuyer.pretargetingConfig.delete";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_PretargetingConfigGet

@dynamic accountId, configId;

+ (instancetype)queryWithAccountId:(long long)accountId
                          configId:(long long)configId {
  NSArray *pathParams = @[
    @"accountId", @"configId"
  ];
  NSString *pathURITemplate = @"pretargetingconfigs/{accountId}/{configId}";
  GTLRAdExchangeBuyerQuery_PretargetingConfigGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.accountId = accountId;
  query.configId = configId;
  query.expectedObjectClass = [GTLRAdExchangeBuyer_PretargetingConfig class];
  query.loggingName = @"adexchangebuyer.pretargetingConfig.get";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_PretargetingConfigInsert

@dynamic accountId;

+ (instancetype)queryWithObject:(GTLRAdExchangeBuyer_PretargetingConfig *)object
                      accountId:(long long)accountId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"accountId" ];
  NSString *pathURITemplate = @"pretargetingconfigs/{accountId}";
  GTLRAdExchangeBuyerQuery_PretargetingConfigInsert *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.accountId = accountId;
  query.expectedObjectClass = [GTLRAdExchangeBuyer_PretargetingConfig class];
  query.loggingName = @"adexchangebuyer.pretargetingConfig.insert";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_PretargetingConfigList

@dynamic accountId;

+ (instancetype)queryWithAccountId:(long long)accountId {
  NSArray *pathParams = @[ @"accountId" ];
  NSString *pathURITemplate = @"pretargetingconfigs/{accountId}";
  GTLRAdExchangeBuyerQuery_PretargetingConfigList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.accountId = accountId;
  query.expectedObjectClass = [GTLRAdExchangeBuyer_PretargetingConfigList class];
  query.loggingName = @"adexchangebuyer.pretargetingConfig.list";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_PretargetingConfigPatch

@dynamic accountId, configId;

+ (instancetype)queryWithObject:(GTLRAdExchangeBuyer_PretargetingConfig *)object
                      accountId:(long long)accountId
                       configId:(long long)configId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[
    @"accountId", @"configId"
  ];
  NSString *pathURITemplate = @"pretargetingconfigs/{accountId}/{configId}";
  GTLRAdExchangeBuyerQuery_PretargetingConfigPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.accountId = accountId;
  query.configId = configId;
  query.expectedObjectClass = [GTLRAdExchangeBuyer_PretargetingConfig class];
  query.loggingName = @"adexchangebuyer.pretargetingConfig.patch";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_PretargetingConfigUpdate

@dynamic accountId, configId;

+ (instancetype)queryWithObject:(GTLRAdExchangeBuyer_PretargetingConfig *)object
                      accountId:(long long)accountId
                       configId:(long long)configId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[
    @"accountId", @"configId"
  ];
  NSString *pathURITemplate = @"pretargetingconfigs/{accountId}/{configId}";
  GTLRAdExchangeBuyerQuery_PretargetingConfigUpdate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PUT"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.accountId = accountId;
  query.configId = configId;
  query.expectedObjectClass = [GTLRAdExchangeBuyer_PretargetingConfig class];
  query.loggingName = @"adexchangebuyer.pretargetingConfig.update";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_ProductsGet

@dynamic productId;

+ (instancetype)queryWithProductId:(NSString *)productId {
  NSArray *pathParams = @[ @"productId" ];
  NSString *pathURITemplate = @"products/{productId}";
  GTLRAdExchangeBuyerQuery_ProductsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.productId = productId;
  query.expectedObjectClass = [GTLRAdExchangeBuyer_Product class];
  query.loggingName = @"adexchangebuyer.products.get";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_ProductsSearch

@dynamic pqlQuery;

+ (instancetype)query {
  NSString *pathURITemplate = @"products/search";
  GTLRAdExchangeBuyerQuery_ProductsSearch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.expectedObjectClass = [GTLRAdExchangeBuyer_GetOffersResponse class];
  query.loggingName = @"adexchangebuyer.products.search";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_ProposalsGet

@dynamic proposalId;

+ (instancetype)queryWithProposalId:(NSString *)proposalId {
  NSArray *pathParams = @[ @"proposalId" ];
  NSString *pathURITemplate = @"proposals/{proposalId}";
  GTLRAdExchangeBuyerQuery_ProposalsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.proposalId = proposalId;
  query.expectedObjectClass = [GTLRAdExchangeBuyer_Proposal class];
  query.loggingName = @"adexchangebuyer.proposals.get";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_ProposalsInsert

+ (instancetype)queryWithObject:(GTLRAdExchangeBuyer_CreateOrdersRequest *)object {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSString *pathURITemplate = @"proposals/insert";
  GTLRAdExchangeBuyerQuery_ProposalsInsert *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:nil];
  query.bodyObject = object;
  query.expectedObjectClass = [GTLRAdExchangeBuyer_CreateOrdersResponse class];
  query.loggingName = @"adexchangebuyer.proposals.insert";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_ProposalsPatch

@dynamic proposalId, revisionNumber, updateAction;

+ (instancetype)queryWithObject:(GTLRAdExchangeBuyer_Proposal *)object
                     proposalId:(NSString *)proposalId
                 revisionNumber:(long long)revisionNumber
                   updateAction:(NSString *)updateAction {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[
    @"proposalId", @"revisionNumber", @"updateAction"
  ];
  NSString *pathURITemplate = @"proposals/{proposalId}/{revisionNumber}/{updateAction}";
  GTLRAdExchangeBuyerQuery_ProposalsPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.proposalId = proposalId;
  query.revisionNumber = revisionNumber;
  query.updateAction = updateAction;
  query.expectedObjectClass = [GTLRAdExchangeBuyer_Proposal class];
  query.loggingName = @"adexchangebuyer.proposals.patch";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_ProposalsSearch

@dynamic pqlQuery;

+ (instancetype)query {
  NSString *pathURITemplate = @"proposals/search";
  GTLRAdExchangeBuyerQuery_ProposalsSearch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.expectedObjectClass = [GTLRAdExchangeBuyer_GetOrdersResponse class];
  query.loggingName = @"adexchangebuyer.proposals.search";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_ProposalsSetupcomplete

@dynamic proposalId;

+ (instancetype)queryWithProposalId:(NSString *)proposalId {
  NSArray *pathParams = @[ @"proposalId" ];
  NSString *pathURITemplate = @"proposals/{proposalId}/setupcomplete";
  GTLRAdExchangeBuyerQuery_ProposalsSetupcomplete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.proposalId = proposalId;
  query.loggingName = @"adexchangebuyer.proposals.setupcomplete";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_ProposalsUpdate

@dynamic proposalId, revisionNumber, updateAction;

+ (instancetype)queryWithObject:(GTLRAdExchangeBuyer_Proposal *)object
                     proposalId:(NSString *)proposalId
                 revisionNumber:(long long)revisionNumber
                   updateAction:(NSString *)updateAction {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[
    @"proposalId", @"revisionNumber", @"updateAction"
  ];
  NSString *pathURITemplate = @"proposals/{proposalId}/{revisionNumber}/{updateAction}";
  GTLRAdExchangeBuyerQuery_ProposalsUpdate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PUT"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.proposalId = proposalId;
  query.revisionNumber = revisionNumber;
  query.updateAction = updateAction;
  query.expectedObjectClass = [GTLRAdExchangeBuyer_Proposal class];
  query.loggingName = @"adexchangebuyer.proposals.update";
  return query;
}

@end

@implementation GTLRAdExchangeBuyerQuery_PubprofilesList

@dynamic accountId;

+ (instancetype)queryWithAccountId:(NSInteger)accountId {
  NSArray *pathParams = @[ @"accountId" ];
  NSString *pathURITemplate = @"publisher/{accountId}/profiles";
  GTLRAdExchangeBuyerQuery_PubprofilesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.accountId = accountId;
  query.expectedObjectClass = [GTLRAdExchangeBuyer_GetPublisherProfilesByAccountIdResponse class];
  query.loggingName = @"adexchangebuyer.pubprofiles.list";
  return query;
}

@end
