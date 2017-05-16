// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   BigQuery API (bigquery/v2)
// Description:
//   A data platform for customers to create, manage, share and query data.
// Documentation:
//   https://cloud.google.com/bigquery/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRBigquery_Dataset;
@class GTLRBigquery_Job;
@class GTLRBigquery_QueryRequest;
@class GTLRBigquery_Table;
@class GTLRBigquery_TableDataInsertAllRequest;

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the query classes' properties below.

// ----------------------------------------------------------------------------
// projection

/**
 *  Includes all job data
 *
 *  Value: "full"
 */
GTLR_EXTERN NSString * const kGTLRBigqueryProjectionFull;
/**
 *  Does not include the job configuration
 *
 *  Value: "minimal"
 */
GTLR_EXTERN NSString * const kGTLRBigqueryProjectionMinimal;

// ----------------------------------------------------------------------------
// stateFilter

/**
 *  Finished jobs
 *
 *  Value: "done"
 */
GTLR_EXTERN NSString * const kGTLRBigqueryStateFilterDone;
/**
 *  Pending jobs
 *
 *  Value: "pending"
 */
GTLR_EXTERN NSString * const kGTLRBigqueryStateFilterPending;
/**
 *  Running jobs
 *
 *  Value: "running"
 */
GTLR_EXTERN NSString * const kGTLRBigqueryStateFilterRunning;

// ----------------------------------------------------------------------------
// Query Classes
//

/**
 *  Parent class for other Bigquery query classes.
 */
@interface GTLRBigqueryQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Deletes the dataset specified by the datasetId value. Before you can delete
 *  a dataset, you must delete all its tables, either manually or by specifying
 *  deleteContents. Immediately after deletion, you can create another dataset
 *  with the same name.
 *
 *  Method: bigquery.datasets.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigquery
 *    @c kGTLRAuthScopeBigqueryCloudPlatform
 */
@interface GTLRBigqueryQuery_DatasetsDelete : GTLRBigqueryQuery
// Previous library name was
//   +[GTLQueryBigquery queryForDatasetsDeleteWithprojectId:datasetId:]

/** Dataset ID of dataset being deleted */
@property(nonatomic, copy, nullable) NSString *datasetId;

/**
 *  If True, delete all the tables in the dataset. If False and the dataset
 *  contains tables, the request will fail. Default is False
 */
@property(nonatomic, assign) BOOL deleteContents;

/** Project ID of the dataset being deleted */
@property(nonatomic, copy, nullable) NSString *projectId;

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Deletes the dataset specified by the datasetId value. Before you can delete
 *  a dataset, you must delete all its tables, either manually or by specifying
 *  deleteContents. Immediately after deletion, you can create another dataset
 *  with the same name.
 *
 *  @param projectId Project ID of the dataset being deleted
 *  @param datasetId Dataset ID of dataset being deleted
 *
 *  @returns GTLRBigqueryQuery_DatasetsDelete
 */
+ (instancetype)queryWithProjectId:(NSString *)projectId
                         datasetId:(NSString *)datasetId;

@end

/**
 *  Returns the dataset specified by datasetID.
 *
 *  Method: bigquery.datasets.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigquery
 *    @c kGTLRAuthScopeBigqueryCloudPlatform
 *    @c kGTLRAuthScopeBigqueryCloudPlatformReadOnly
 */
@interface GTLRBigqueryQuery_DatasetsGet : GTLRBigqueryQuery
// Previous library name was
//   +[GTLQueryBigquery queryForDatasetsGetWithprojectId:datasetId:]

/** Dataset ID of the requested dataset */
@property(nonatomic, copy, nullable) NSString *datasetId;

/** Project ID of the requested dataset */
@property(nonatomic, copy, nullable) NSString *projectId;

/**
 *  Fetches a @c GTLRBigquery_Dataset.
 *
 *  Returns the dataset specified by datasetID.
 *
 *  @param projectId Project ID of the requested dataset
 *  @param datasetId Dataset ID of the requested dataset
 *
 *  @returns GTLRBigqueryQuery_DatasetsGet
 */
+ (instancetype)queryWithProjectId:(NSString *)projectId
                         datasetId:(NSString *)datasetId;

@end

/**
 *  Creates a new empty dataset.
 *
 *  Method: bigquery.datasets.insert
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigquery
 *    @c kGTLRAuthScopeBigqueryCloudPlatform
 */
@interface GTLRBigqueryQuery_DatasetsInsert : GTLRBigqueryQuery
// Previous library name was
//   +[GTLQueryBigquery queryForDatasetsInsertWithObject:projectId:]

/** Project ID of the new dataset */
@property(nonatomic, copy, nullable) NSString *projectId;

/**
 *  Fetches a @c GTLRBigquery_Dataset.
 *
 *  Creates a new empty dataset.
 *
 *  @param object The @c GTLRBigquery_Dataset to include in the query.
 *  @param projectId Project ID of the new dataset
 *
 *  @returns GTLRBigqueryQuery_DatasetsInsert
 */
+ (instancetype)queryWithObject:(GTLRBigquery_Dataset *)object
                      projectId:(NSString *)projectId;

@end

/**
 *  Lists all datasets in the specified project to which you have been granted
 *  the READER dataset role.
 *
 *  Method: bigquery.datasets.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigquery
 *    @c kGTLRAuthScopeBigqueryCloudPlatform
 *    @c kGTLRAuthScopeBigqueryCloudPlatformReadOnly
 */
@interface GTLRBigqueryQuery_DatasetsList : GTLRBigqueryQuery
// Previous library name was
//   +[GTLQueryBigquery queryForDatasetsListWithprojectId:]

/** Whether to list all datasets, including hidden ones */
@property(nonatomic, assign) BOOL all;

/**
 *  An expression for filtering the results of the request by label. The syntax
 *  is "labels.<name>[:<value>]". Multiple filters can be ANDed together by
 *  connecting with a space. Example: "labels.department:receiving
 *  labels.active". See Filtering datasets using labels for details.
 */
@property(nonatomic, copy, nullable) NSString *filter;

/** The maximum number of results to return */
@property(nonatomic, assign) NSUInteger maxResults;

/**
 *  Page token, returned by a previous call, to request the next page of results
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** Project ID of the datasets to be listed */
@property(nonatomic, copy, nullable) NSString *projectId;

/**
 *  Fetches a @c GTLRBigquery_DatasetList.
 *
 *  Lists all datasets in the specified project to which you have been granted
 *  the READER dataset role.
 *
 *  @param projectId Project ID of the datasets to be listed
 *
 *  @returns GTLRBigqueryQuery_DatasetsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithProjectId:(NSString *)projectId;

@end

/**
 *  Updates information in an existing dataset. The update method replaces the
 *  entire dataset resource, whereas the patch method only replaces fields that
 *  are provided in the submitted dataset resource. This method supports patch
 *  semantics.
 *
 *  Method: bigquery.datasets.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigquery
 *    @c kGTLRAuthScopeBigqueryCloudPlatform
 */
@interface GTLRBigqueryQuery_DatasetsPatch : GTLRBigqueryQuery
// Previous library name was
//   +[GTLQueryBigquery queryForDatasetsPatchWithObject:projectId:datasetId:]

/** Dataset ID of the dataset being updated */
@property(nonatomic, copy, nullable) NSString *datasetId;

/** Project ID of the dataset being updated */
@property(nonatomic, copy, nullable) NSString *projectId;

/**
 *  Fetches a @c GTLRBigquery_Dataset.
 *
 *  Updates information in an existing dataset. The update method replaces the
 *  entire dataset resource, whereas the patch method only replaces fields that
 *  are provided in the submitted dataset resource. This method supports patch
 *  semantics.
 *
 *  @param object The @c GTLRBigquery_Dataset to include in the query.
 *  @param projectId Project ID of the dataset being updated
 *  @param datasetId Dataset ID of the dataset being updated
 *
 *  @returns GTLRBigqueryQuery_DatasetsPatch
 */
+ (instancetype)queryWithObject:(GTLRBigquery_Dataset *)object
                      projectId:(NSString *)projectId
                      datasetId:(NSString *)datasetId;

@end

/**
 *  Updates information in an existing dataset. The update method replaces the
 *  entire dataset resource, whereas the patch method only replaces fields that
 *  are provided in the submitted dataset resource.
 *
 *  Method: bigquery.datasets.update
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigquery
 *    @c kGTLRAuthScopeBigqueryCloudPlatform
 */
@interface GTLRBigqueryQuery_DatasetsUpdate : GTLRBigqueryQuery
// Previous library name was
//   +[GTLQueryBigquery queryForDatasetsUpdateWithObject:projectId:datasetId:]

/** Dataset ID of the dataset being updated */
@property(nonatomic, copy, nullable) NSString *datasetId;

/** Project ID of the dataset being updated */
@property(nonatomic, copy, nullable) NSString *projectId;

/**
 *  Fetches a @c GTLRBigquery_Dataset.
 *
 *  Updates information in an existing dataset. The update method replaces the
 *  entire dataset resource, whereas the patch method only replaces fields that
 *  are provided in the submitted dataset resource.
 *
 *  @param object The @c GTLRBigquery_Dataset to include in the query.
 *  @param projectId Project ID of the dataset being updated
 *  @param datasetId Dataset ID of the dataset being updated
 *
 *  @returns GTLRBigqueryQuery_DatasetsUpdate
 */
+ (instancetype)queryWithObject:(GTLRBigquery_Dataset *)object
                      projectId:(NSString *)projectId
                      datasetId:(NSString *)datasetId;

@end

/**
 *  Requests that a job be cancelled. This call will return immediately, and the
 *  client will need to poll for the job status to see if the cancel completed
 *  successfully. Cancelled jobs may still incur costs.
 *
 *  Method: bigquery.jobs.cancel
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigquery
 *    @c kGTLRAuthScopeBigqueryCloudPlatform
 */
@interface GTLRBigqueryQuery_JobsCancel : GTLRBigqueryQuery
// Previous library name was
//   +[GTLQueryBigquery queryForJobsCancelWithprojectId:jobId:]

/** [Required] Job ID of the job to cancel */
@property(nonatomic, copy, nullable) NSString *jobId;

/** [Required] Project ID of the job to cancel */
@property(nonatomic, copy, nullable) NSString *projectId;

/**
 *  Fetches a @c GTLRBigquery_JobCancelResponse.
 *
 *  Requests that a job be cancelled. This call will return immediately, and the
 *  client will need to poll for the job status to see if the cancel completed
 *  successfully. Cancelled jobs may still incur costs.
 *
 *  @param projectId [Required] Project ID of the job to cancel
 *  @param jobId [Required] Job ID of the job to cancel
 *
 *  @returns GTLRBigqueryQuery_JobsCancel
 */
+ (instancetype)queryWithProjectId:(NSString *)projectId
                             jobId:(NSString *)jobId;

@end

/**
 *  Returns information about a specific job. Job information is available for a
 *  six month period after creation. Requires that you're the person who ran the
 *  job, or have the Is Owner project role.
 *
 *  Method: bigquery.jobs.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigquery
 *    @c kGTLRAuthScopeBigqueryCloudPlatform
 *    @c kGTLRAuthScopeBigqueryCloudPlatformReadOnly
 */
@interface GTLRBigqueryQuery_JobsGet : GTLRBigqueryQuery
// Previous library name was
//   +[GTLQueryBigquery queryForJobsGetWithprojectId:jobId:]

/** [Required] Job ID of the requested job */
@property(nonatomic, copy, nullable) NSString *jobId;

/** [Required] Project ID of the requested job */
@property(nonatomic, copy, nullable) NSString *projectId;

/**
 *  Fetches a @c GTLRBigquery_Job.
 *
 *  Returns information about a specific job. Job information is available for a
 *  six month period after creation. Requires that you're the person who ran the
 *  job, or have the Is Owner project role.
 *
 *  @param projectId [Required] Project ID of the requested job
 *  @param jobId [Required] Job ID of the requested job
 *
 *  @returns GTLRBigqueryQuery_JobsGet
 */
+ (instancetype)queryWithProjectId:(NSString *)projectId
                             jobId:(NSString *)jobId;

@end

/**
 *  Retrieves the results of a query job.
 *
 *  Method: bigquery.jobs.getQueryResults
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigquery
 *    @c kGTLRAuthScopeBigqueryCloudPlatform
 *    @c kGTLRAuthScopeBigqueryCloudPlatformReadOnly
 */
@interface GTLRBigqueryQuery_JobsGetQueryResults : GTLRBigqueryQuery
// Previous library name was
//   +[GTLQueryBigquery queryForJobsGetQueryResultsWithprojectId:jobId:]

/** [Required] Job ID of the query job */
@property(nonatomic, copy, nullable) NSString *jobId;

/** Maximum number of results to read */
@property(nonatomic, assign) NSUInteger maxResults;

/**
 *  Page token, returned by a previous call, to request the next page of results
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** [Required] Project ID of the query job */
@property(nonatomic, copy, nullable) NSString *projectId;

/** Zero-based index of the starting row */
@property(nonatomic, assign) unsigned long long startIndex;

/**
 *  How long to wait for the query to complete, in milliseconds, before
 *  returning. Default is 10 seconds. If the timeout passes before the job
 *  completes, the 'jobComplete' field in the response will be false
 */
@property(nonatomic, assign) NSUInteger timeoutMs;

/**
 *  Fetches a @c GTLRBigquery_GetQueryResultsResponse.
 *
 *  Retrieves the results of a query job.
 *
 *  @param projectId [Required] Project ID of the query job
 *  @param jobId [Required] Job ID of the query job
 *
 *  @returns GTLRBigqueryQuery_JobsGetQueryResults
 */
+ (instancetype)queryWithProjectId:(NSString *)projectId
                             jobId:(NSString *)jobId;

@end

/**
 *  Starts a new asynchronous job. Requires the Can View project role.
 *
 *  Method: bigquery.jobs.insert
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigquery
 *    @c kGTLRAuthScopeBigqueryCloudPlatform
 *    @c kGTLRAuthScopeBigqueryDevstorageFullControl
 *    @c kGTLRAuthScopeBigqueryDevstorageReadOnly
 *    @c kGTLRAuthScopeBigqueryDevstorageReadWrite
 */
@interface GTLRBigqueryQuery_JobsInsert : GTLRBigqueryQuery
// Previous library name was
//   +[GTLQueryBigquery queryForJobsInsertWithObject:projectId:]

/** Project ID of the project that will be billed for the job */
@property(nonatomic, copy, nullable) NSString *projectId;

/**
 *  Fetches a @c GTLRBigquery_Job.
 *
 *  Starts a new asynchronous job. Requires the Can View project role.
 *
 *  @param object The @c GTLRBigquery_Job to include in the query.
 *  @param projectId Project ID of the project that will be billed for the job
 *  @param uploadParameters The media to include in this query. Accepted MIME
 *    type: * / *
 *
 *  @returns GTLRBigqueryQuery_JobsInsert
 */
+ (instancetype)queryWithObject:(GTLRBigquery_Job *)object
                      projectId:(NSString *)projectId
               uploadParameters:(nullable GTLRUploadParameters *)uploadParameters;

@end

/**
 *  Lists all jobs that you started in the specified project. Job information is
 *  available for a six month period after creation. The job list is sorted in
 *  reverse chronological order, by job creation time. Requires the Can View
 *  project role, or the Is Owner project role if you set the allUsers property.
 *
 *  Method: bigquery.jobs.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigquery
 *    @c kGTLRAuthScopeBigqueryCloudPlatform
 *    @c kGTLRAuthScopeBigqueryCloudPlatformReadOnly
 */
@interface GTLRBigqueryQuery_JobsList : GTLRBigqueryQuery
// Previous library name was
//   +[GTLQueryBigquery queryForJobsListWithprojectId:]

/**
 *  Whether to display jobs owned by all users in the project. Default false
 */
@property(nonatomic, assign) BOOL allUsers;

/** Maximum number of results to return */
@property(nonatomic, assign) NSUInteger maxResults;

/**
 *  Page token, returned by a previous call, to request the next page of results
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** Project ID of the jobs to list */
@property(nonatomic, copy, nullable) NSString *projectId;

/**
 *  Restrict information returned to a set of selected fields
 *
 *  Likely values:
 *    @arg @c kGTLRBigqueryProjectionFull Includes all job data (Value: "full")
 *    @arg @c kGTLRBigqueryProjectionMinimal Does not include the job
 *        configuration (Value: "minimal")
 */
@property(nonatomic, copy, nullable) NSString *projection;

/**
 *  Filter for job state
 *
 *  Likely values:
 *    @arg @c kGTLRBigqueryStateFilterDone Finished jobs (Value: "done")
 *    @arg @c kGTLRBigqueryStateFilterPending Pending jobs (Value: "pending")
 *    @arg @c kGTLRBigqueryStateFilterRunning Running jobs (Value: "running")
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *stateFilter;

/**
 *  Fetches a @c GTLRBigquery_JobList.
 *
 *  Lists all jobs that you started in the specified project. Job information is
 *  available for a six month period after creation. The job list is sorted in
 *  reverse chronological order, by job creation time. Requires the Can View
 *  project role, or the Is Owner project role if you set the allUsers property.
 *
 *  @param projectId Project ID of the jobs to list
 *
 *  @returns GTLRBigqueryQuery_JobsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithProjectId:(NSString *)projectId;

@end

/**
 *  Runs a BigQuery SQL query synchronously and returns query results if the
 *  query completes within a specified timeout.
 *
 *  Method: bigquery.jobs.query
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigquery
 *    @c kGTLRAuthScopeBigqueryCloudPlatform
 *    @c kGTLRAuthScopeBigqueryCloudPlatformReadOnly
 */
@interface GTLRBigqueryQuery_JobsQuery : GTLRBigqueryQuery
// Previous library name was
//   +[GTLQueryBigquery queryForJobsQueryWithObject:projectId:]

/** Project ID of the project billed for the query */
@property(nonatomic, copy, nullable) NSString *projectId;

/**
 *  Fetches a @c GTLRBigquery_QueryResponse.
 *
 *  Runs a BigQuery SQL query synchronously and returns query results if the
 *  query completes within a specified timeout.
 *
 *  @param object The @c GTLRBigquery_QueryRequest to include in the query.
 *  @param projectId Project ID of the project billed for the query
 *
 *  @returns GTLRBigqueryQuery_JobsQuery
 */
+ (instancetype)queryWithObject:(GTLRBigquery_QueryRequest *)object
                      projectId:(NSString *)projectId;

@end

/**
 *  Lists all projects to which you have been granted any project role.
 *
 *  Method: bigquery.projects.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigquery
 *    @c kGTLRAuthScopeBigqueryCloudPlatform
 *    @c kGTLRAuthScopeBigqueryCloudPlatformReadOnly
 */
@interface GTLRBigqueryQuery_ProjectsList : GTLRBigqueryQuery
// Previous library name was
//   +[GTLQueryBigquery queryForProjectsList]

/** Maximum number of results to return */
@property(nonatomic, assign) NSUInteger maxResults;

/**
 *  Page token, returned by a previous call, to request the next page of results
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRBigquery_ProjectList.
 *
 *  Lists all projects to which you have been granted any project role.
 *
 *  @returns GTLRBigqueryQuery_ProjectsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)query;

@end

/**
 *  Streams data into BigQuery one record at a time without needing to run a
 *  load job. Requires the WRITER dataset role.
 *
 *  Method: bigquery.tabledata.insertAll
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigquery
 *    @c kGTLRAuthScopeBigqueryCloudPlatform
 *    @c kGTLRAuthScopeBigqueryInsertdata
 */
@interface GTLRBigqueryQuery_TabledataInsertAll : GTLRBigqueryQuery
// Previous library name was
//   +[GTLQueryBigquery queryForTabledataInsertAllWithObject:projectId:datasetId:tableId:]

/** Dataset ID of the destination table. */
@property(nonatomic, copy, nullable) NSString *datasetId;

/** Project ID of the destination table. */
@property(nonatomic, copy, nullable) NSString *projectId;

/** Table ID of the destination table. */
@property(nonatomic, copy, nullable) NSString *tableId;

/**
 *  Fetches a @c GTLRBigquery_TableDataInsertAllResponse.
 *
 *  Streams data into BigQuery one record at a time without needing to run a
 *  load job. Requires the WRITER dataset role.
 *
 *  @param object The @c GTLRBigquery_TableDataInsertAllRequest to include in
 *    the query.
 *  @param projectId Project ID of the destination table.
 *  @param datasetId Dataset ID of the destination table.
 *  @param tableId Table ID of the destination table.
 *
 *  @returns GTLRBigqueryQuery_TabledataInsertAll
 */
+ (instancetype)queryWithObject:(GTLRBigquery_TableDataInsertAllRequest *)object
                      projectId:(NSString *)projectId
                      datasetId:(NSString *)datasetId
                        tableId:(NSString *)tableId;

@end

/**
 *  Retrieves table data from a specified set of rows. Requires the READER
 *  dataset role.
 *
 *  Method: bigquery.tabledata.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigquery
 *    @c kGTLRAuthScopeBigqueryCloudPlatform
 *    @c kGTLRAuthScopeBigqueryCloudPlatformReadOnly
 */
@interface GTLRBigqueryQuery_TabledataList : GTLRBigqueryQuery
// Previous library name was
//   +[GTLQueryBigquery queryForTabledataListWithprojectId:datasetId:tableId:]

/** Dataset ID of the table to read */
@property(nonatomic, copy, nullable) NSString *datasetId;

/** Maximum number of results to return */
@property(nonatomic, assign) NSUInteger maxResults;

/** Page token, returned by a previous call, identifying the result set */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** Project ID of the table to read */
@property(nonatomic, copy, nullable) NSString *projectId;

/**
 *  List of fields to return (comma-separated). If unspecified, all fields are
 *  returned
 */
@property(nonatomic, copy, nullable) NSString *selectedFields;

/** Zero-based index of the starting row to read */
@property(nonatomic, assign) unsigned long long startIndex;

/** Table ID of the table to read */
@property(nonatomic, copy, nullable) NSString *tableId;

/**
 *  Fetches a @c GTLRBigquery_TableDataList.
 *
 *  Retrieves table data from a specified set of rows. Requires the READER
 *  dataset role.
 *
 *  @param projectId Project ID of the table to read
 *  @param datasetId Dataset ID of the table to read
 *  @param tableId Table ID of the table to read
 *
 *  @returns GTLRBigqueryQuery_TabledataList
 */
+ (instancetype)queryWithProjectId:(NSString *)projectId
                         datasetId:(NSString *)datasetId
                           tableId:(NSString *)tableId;

@end

/**
 *  Deletes the table specified by tableId from the dataset. If the table
 *  contains data, all the data will be deleted.
 *
 *  Method: bigquery.tables.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigquery
 *    @c kGTLRAuthScopeBigqueryCloudPlatform
 */
@interface GTLRBigqueryQuery_TablesDelete : GTLRBigqueryQuery
// Previous library name was
//   +[GTLQueryBigquery queryForTablesDeleteWithprojectId:datasetId:tableId:]

/** Dataset ID of the table to delete */
@property(nonatomic, copy, nullable) NSString *datasetId;

/** Project ID of the table to delete */
@property(nonatomic, copy, nullable) NSString *projectId;

/** Table ID of the table to delete */
@property(nonatomic, copy, nullable) NSString *tableId;

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Deletes the table specified by tableId from the dataset. If the table
 *  contains data, all the data will be deleted.
 *
 *  @param projectId Project ID of the table to delete
 *  @param datasetId Dataset ID of the table to delete
 *  @param tableId Table ID of the table to delete
 *
 *  @returns GTLRBigqueryQuery_TablesDelete
 */
+ (instancetype)queryWithProjectId:(NSString *)projectId
                         datasetId:(NSString *)datasetId
                           tableId:(NSString *)tableId;

@end

/**
 *  Gets the specified table resource by table ID. This method does not return
 *  the data in the table, it only returns the table resource, which describes
 *  the structure of this table.
 *
 *  Method: bigquery.tables.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigquery
 *    @c kGTLRAuthScopeBigqueryCloudPlatform
 *    @c kGTLRAuthScopeBigqueryCloudPlatformReadOnly
 */
@interface GTLRBigqueryQuery_TablesGet : GTLRBigqueryQuery
// Previous library name was
//   +[GTLQueryBigquery queryForTablesGetWithprojectId:datasetId:tableId:]

/** Dataset ID of the requested table */
@property(nonatomic, copy, nullable) NSString *datasetId;

/** Project ID of the requested table */
@property(nonatomic, copy, nullable) NSString *projectId;

/**
 *  List of fields to return (comma-separated). If unspecified, all fields are
 *  returned
 */
@property(nonatomic, copy, nullable) NSString *selectedFields;

/** Table ID of the requested table */
@property(nonatomic, copy, nullable) NSString *tableId;

/**
 *  Fetches a @c GTLRBigquery_Table.
 *
 *  Gets the specified table resource by table ID. This method does not return
 *  the data in the table, it only returns the table resource, which describes
 *  the structure of this table.
 *
 *  @param projectId Project ID of the requested table
 *  @param datasetId Dataset ID of the requested table
 *  @param tableId Table ID of the requested table
 *
 *  @returns GTLRBigqueryQuery_TablesGet
 */
+ (instancetype)queryWithProjectId:(NSString *)projectId
                         datasetId:(NSString *)datasetId
                           tableId:(NSString *)tableId;

@end

/**
 *  Creates a new, empty table in the dataset.
 *
 *  Method: bigquery.tables.insert
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigquery
 *    @c kGTLRAuthScopeBigqueryCloudPlatform
 */
@interface GTLRBigqueryQuery_TablesInsert : GTLRBigqueryQuery
// Previous library name was
//   +[GTLQueryBigquery queryForTablesInsertWithObject:projectId:datasetId:]

/** Dataset ID of the new table */
@property(nonatomic, copy, nullable) NSString *datasetId;

/** Project ID of the new table */
@property(nonatomic, copy, nullable) NSString *projectId;

/**
 *  Fetches a @c GTLRBigquery_Table.
 *
 *  Creates a new, empty table in the dataset.
 *
 *  @param object The @c GTLRBigquery_Table to include in the query.
 *  @param projectId Project ID of the new table
 *  @param datasetId Dataset ID of the new table
 *
 *  @returns GTLRBigqueryQuery_TablesInsert
 */
+ (instancetype)queryWithObject:(GTLRBigquery_Table *)object
                      projectId:(NSString *)projectId
                      datasetId:(NSString *)datasetId;

@end

/**
 *  Lists all tables in the specified dataset. Requires the READER dataset role.
 *
 *  Method: bigquery.tables.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigquery
 *    @c kGTLRAuthScopeBigqueryCloudPlatform
 *    @c kGTLRAuthScopeBigqueryCloudPlatformReadOnly
 */
@interface GTLRBigqueryQuery_TablesList : GTLRBigqueryQuery
// Previous library name was
//   +[GTLQueryBigquery queryForTablesListWithprojectId:datasetId:]

/** Dataset ID of the tables to list */
@property(nonatomic, copy, nullable) NSString *datasetId;

/** Maximum number of results to return */
@property(nonatomic, assign) NSUInteger maxResults;

/**
 *  Page token, returned by a previous call, to request the next page of results
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** Project ID of the tables to list */
@property(nonatomic, copy, nullable) NSString *projectId;

/**
 *  Fetches a @c GTLRBigquery_TableList.
 *
 *  Lists all tables in the specified dataset. Requires the READER dataset role.
 *
 *  @param projectId Project ID of the tables to list
 *  @param datasetId Dataset ID of the tables to list
 *
 *  @returns GTLRBigqueryQuery_TablesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithProjectId:(NSString *)projectId
                         datasetId:(NSString *)datasetId;

@end

/**
 *  Updates information in an existing table. The update method replaces the
 *  entire table resource, whereas the patch method only replaces fields that
 *  are provided in the submitted table resource. This method supports patch
 *  semantics.
 *
 *  Method: bigquery.tables.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigquery
 *    @c kGTLRAuthScopeBigqueryCloudPlatform
 */
@interface GTLRBigqueryQuery_TablesPatch : GTLRBigqueryQuery
// Previous library name was
//   +[GTLQueryBigquery queryForTablesPatchWithObject:projectId:datasetId:tableId:]

/** Dataset ID of the table to update */
@property(nonatomic, copy, nullable) NSString *datasetId;

/** Project ID of the table to update */
@property(nonatomic, copy, nullable) NSString *projectId;

/** Table ID of the table to update */
@property(nonatomic, copy, nullable) NSString *tableId;

/**
 *  Fetches a @c GTLRBigquery_Table.
 *
 *  Updates information in an existing table. The update method replaces the
 *  entire table resource, whereas the patch method only replaces fields that
 *  are provided in the submitted table resource. This method supports patch
 *  semantics.
 *
 *  @param object The @c GTLRBigquery_Table to include in the query.
 *  @param projectId Project ID of the table to update
 *  @param datasetId Dataset ID of the table to update
 *  @param tableId Table ID of the table to update
 *
 *  @returns GTLRBigqueryQuery_TablesPatch
 */
+ (instancetype)queryWithObject:(GTLRBigquery_Table *)object
                      projectId:(NSString *)projectId
                      datasetId:(NSString *)datasetId
                        tableId:(NSString *)tableId;

@end

/**
 *  Updates information in an existing table. The update method replaces the
 *  entire table resource, whereas the patch method only replaces fields that
 *  are provided in the submitted table resource.
 *
 *  Method: bigquery.tables.update
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigquery
 *    @c kGTLRAuthScopeBigqueryCloudPlatform
 */
@interface GTLRBigqueryQuery_TablesUpdate : GTLRBigqueryQuery
// Previous library name was
//   +[GTLQueryBigquery queryForTablesUpdateWithObject:projectId:datasetId:tableId:]

/** Dataset ID of the table to update */
@property(nonatomic, copy, nullable) NSString *datasetId;

/** Project ID of the table to update */
@property(nonatomic, copy, nullable) NSString *projectId;

/** Table ID of the table to update */
@property(nonatomic, copy, nullable) NSString *tableId;

/**
 *  Fetches a @c GTLRBigquery_Table.
 *
 *  Updates information in an existing table. The update method replaces the
 *  entire table resource, whereas the patch method only replaces fields that
 *  are provided in the submitted table resource.
 *
 *  @param object The @c GTLRBigquery_Table to include in the query.
 *  @param projectId Project ID of the table to update
 *  @param datasetId Dataset ID of the table to update
 *  @param tableId Table ID of the table to update
 *
 *  @returns GTLRBigqueryQuery_TablesUpdate
 */
+ (instancetype)queryWithObject:(GTLRBigquery_Table *)object
                      projectId:(NSString *)projectId
                      datasetId:(NSString *)datasetId
                        tableId:(NSString *)tableId;

@end

NS_ASSUME_NONNULL_END
