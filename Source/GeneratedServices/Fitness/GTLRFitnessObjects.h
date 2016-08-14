// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Fitness (fitness/v1)
// Description:
//   Stores and accesses user data in the fitness store from apps on any
//   platform.
// Documentation:
//   https://developers.google.com/fit/rest/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRFitness_AggregateBucket;
@class GTLRFitness_AggregateBy;
@class GTLRFitness_Application;
@class GTLRFitness_BucketByActivity;
@class GTLRFitness_BucketBySession;
@class GTLRFitness_BucketByTime;
@class GTLRFitness_BucketByTimePeriod;
@class GTLRFitness_DataPoint;
@class GTLRFitness_Dataset;
@class GTLRFitness_DataSource;
@class GTLRFitness_DataType;
@class GTLRFitness_DataTypeField;
@class GTLRFitness_Device;
@class GTLRFitness_MapValue;
@class GTLRFitness_Session;
@class GTLRFitness_Value;
@class GTLRFitness_ValueMapValEntry;

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRFitness_AggregateBucket.type

/** Value: "activitySegment" */
GTLR_EXTERN NSString * const kGTLRFitness_AggregateBucket_Type_ActivitySegment;
/** Value: "activityType" */
GTLR_EXTERN NSString * const kGTLRFitness_AggregateBucket_Type_ActivityType;
/** Value: "session" */
GTLR_EXTERN NSString * const kGTLRFitness_AggregateBucket_Type_Session;
/** Value: "time" */
GTLR_EXTERN NSString * const kGTLRFitness_AggregateBucket_Type_Time;
/** Value: "unknown" */
GTLR_EXTERN NSString * const kGTLRFitness_AggregateBucket_Type_Unknown;

// ----------------------------------------------------------------------------
// GTLRFitness_AggregateRequest.filteredDataQualityStandard

/** Value: "dataQualityBloodGlucoseIso151972003" */
GTLR_EXTERN NSString * const kGTLRFitness_AggregateRequest_FilteredDataQualityStandard_DataQualityBloodGlucoseIso151972003;
/** Value: "dataQualityBloodGlucoseIso151972013" */
GTLR_EXTERN NSString * const kGTLRFitness_AggregateRequest_FilteredDataQualityStandard_DataQualityBloodGlucoseIso151972013;
/** Value: "dataQualityBloodPressureAami" */
GTLR_EXTERN NSString * const kGTLRFitness_AggregateRequest_FilteredDataQualityStandard_DataQualityBloodPressureAami;
/** Value: "dataQualityBloodPressureBhsAA" */
GTLR_EXTERN NSString * const kGTLRFitness_AggregateRequest_FilteredDataQualityStandard_DataQualityBloodPressureBhsAA;
/** Value: "dataQualityBloodPressureBhsAB" */
GTLR_EXTERN NSString * const kGTLRFitness_AggregateRequest_FilteredDataQualityStandard_DataQualityBloodPressureBhsAB;
/** Value: "dataQualityBloodPressureBhsBA" */
GTLR_EXTERN NSString * const kGTLRFitness_AggregateRequest_FilteredDataQualityStandard_DataQualityBloodPressureBhsBA;
/** Value: "dataQualityBloodPressureBhsBB" */
GTLR_EXTERN NSString * const kGTLRFitness_AggregateRequest_FilteredDataQualityStandard_DataQualityBloodPressureBhsBB;
/** Value: "dataQualityBloodPressureEsh2002" */
GTLR_EXTERN NSString * const kGTLRFitness_AggregateRequest_FilteredDataQualityStandard_DataQualityBloodPressureEsh2002;
/** Value: "dataQualityBloodPressureEsh2010" */
GTLR_EXTERN NSString * const kGTLRFitness_AggregateRequest_FilteredDataQualityStandard_DataQualityBloodPressureEsh2010;
/** Value: "dataQualityUnknown" */
GTLR_EXTERN NSString * const kGTLRFitness_AggregateRequest_FilteredDataQualityStandard_DataQualityUnknown;

// ----------------------------------------------------------------------------
// GTLRFitness_BucketByTimePeriod.type

/** Value: "day" */
GTLR_EXTERN NSString * const kGTLRFitness_BucketByTimePeriod_Type_Day;
/** Value: "month" */
GTLR_EXTERN NSString * const kGTLRFitness_BucketByTimePeriod_Type_Month;
/** Value: "week" */
GTLR_EXTERN NSString * const kGTLRFitness_BucketByTimePeriod_Type_Week;

// ----------------------------------------------------------------------------
// GTLRFitness_DataSource.dataQualityStandard

/** Value: "dataQualityBloodGlucoseIso151972003" */
GTLR_EXTERN NSString * const kGTLRFitness_DataSource_DataQualityStandard_DataQualityBloodGlucoseIso151972003;
/** Value: "dataQualityBloodGlucoseIso151972013" */
GTLR_EXTERN NSString * const kGTLRFitness_DataSource_DataQualityStandard_DataQualityBloodGlucoseIso151972013;
/** Value: "dataQualityBloodPressureAami" */
GTLR_EXTERN NSString * const kGTLRFitness_DataSource_DataQualityStandard_DataQualityBloodPressureAami;
/** Value: "dataQualityBloodPressureBhsAA" */
GTLR_EXTERN NSString * const kGTLRFitness_DataSource_DataQualityStandard_DataQualityBloodPressureBhsAA;
/** Value: "dataQualityBloodPressureBhsAB" */
GTLR_EXTERN NSString * const kGTLRFitness_DataSource_DataQualityStandard_DataQualityBloodPressureBhsAB;
/** Value: "dataQualityBloodPressureBhsBA" */
GTLR_EXTERN NSString * const kGTLRFitness_DataSource_DataQualityStandard_DataQualityBloodPressureBhsBA;
/** Value: "dataQualityBloodPressureBhsBB" */
GTLR_EXTERN NSString * const kGTLRFitness_DataSource_DataQualityStandard_DataQualityBloodPressureBhsBB;
/** Value: "dataQualityBloodPressureEsh2002" */
GTLR_EXTERN NSString * const kGTLRFitness_DataSource_DataQualityStandard_DataQualityBloodPressureEsh2002;
/** Value: "dataQualityBloodPressureEsh2010" */
GTLR_EXTERN NSString * const kGTLRFitness_DataSource_DataQualityStandard_DataQualityBloodPressureEsh2010;
/** Value: "dataQualityUnknown" */
GTLR_EXTERN NSString * const kGTLRFitness_DataSource_DataQualityStandard_DataQualityUnknown;

// ----------------------------------------------------------------------------
// GTLRFitness_DataSource.type

/** Value: "derived" */
GTLR_EXTERN NSString * const kGTLRFitness_DataSource_Type_Derived;
/** Value: "raw" */
GTLR_EXTERN NSString * const kGTLRFitness_DataSource_Type_Raw;

// ----------------------------------------------------------------------------
// GTLRFitness_DataTypeField.format

/** Value: "blob" */
GTLR_EXTERN NSString * const kGTLRFitness_DataTypeField_Format_Blob;
/** Value: "floatList" */
GTLR_EXTERN NSString * const kGTLRFitness_DataTypeField_Format_FloatList;
/** Value: "floatPoint" */
GTLR_EXTERN NSString * const kGTLRFitness_DataTypeField_Format_FloatPoint;
/** Value: "integer" */
GTLR_EXTERN NSString * const kGTLRFitness_DataTypeField_Format_Integer;
/** Value: "integerList" */
GTLR_EXTERN NSString * const kGTLRFitness_DataTypeField_Format_IntegerList;
/** Value: "map" */
GTLR_EXTERN NSString * const kGTLRFitness_DataTypeField_Format_Map;
/** Value: "string" */
GTLR_EXTERN NSString * const kGTLRFitness_DataTypeField_Format_String;

// ----------------------------------------------------------------------------
// GTLRFitness_Device.type

/** Value: "chestStrap" */
GTLR_EXTERN NSString * const kGTLRFitness_Device_Type_ChestStrap;
/** Value: "headMounted" */
GTLR_EXTERN NSString * const kGTLRFitness_Device_Type_HeadMounted;
/** Value: "phone" */
GTLR_EXTERN NSString * const kGTLRFitness_Device_Type_Phone;
/** Value: "scale" */
GTLR_EXTERN NSString * const kGTLRFitness_Device_Type_Scale;
/** Value: "tablet" */
GTLR_EXTERN NSString * const kGTLRFitness_Device_Type_Tablet;
/** Value: "unknown" */
GTLR_EXTERN NSString * const kGTLRFitness_Device_Type_Unknown;
/** Value: "watch" */
GTLR_EXTERN NSString * const kGTLRFitness_Device_Type_Watch;

/**
 *  GTLRFitness_AggregateBucket
 */
@interface GTLRFitness_AggregateBucket : GTLRObject

/**
 *  Available for Bucket.Type.ACTIVITY_TYPE, Bucket.Type.ACTIVITY_SEGMENT
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *activity;

/** There will be one dataset per AggregateBy in the request. */
@property(nonatomic, strong, nullable) NSArray<GTLRFitness_Dataset *> *dataset;

/**
 *  The end time for the aggregated data, in milliseconds since epoch,
 *  inclusive.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *endTimeMillis;

/** Available for Bucket.Type.SESSION */
@property(nonatomic, strong, nullable) GTLRFitness_Session *session;

/**
 *  The start time for the aggregated data, in milliseconds since epoch,
 *  inclusive.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *startTimeMillis;

/**
 *  The type of a bucket signifies how the data aggregation is performed in the
 *  bucket.
 *
 *  Likely values:
 *    @arg @c kGTLRFitness_AggregateBucket_Type_ActivitySegment Value
 *        "activitySegment"
 *    @arg @c kGTLRFitness_AggregateBucket_Type_ActivityType Value
 *        "activityType"
 *    @arg @c kGTLRFitness_AggregateBucket_Type_Session Value "session"
 *    @arg @c kGTLRFitness_AggregateBucket_Type_Time Value "time"
 *    @arg @c kGTLRFitness_AggregateBucket_Type_Unknown Value "unknown"
 */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  The specification of which data to aggregate.
 */
@interface GTLRFitness_AggregateBy : GTLRObject

/**
 *  A data source ID to aggregate. Mutually exclusive of dataTypeName. Only data
 *  from the specified data source ID will be included in the aggregation. The
 *  dataset in the response will have the same data source ID.
 */
@property(nonatomic, copy, nullable) NSString *dataSourceId;

/**
 *  The data type to aggregate. All data sources providing this data type will
 *  contribute data to the aggregation. The response will contain a single
 *  dataset for this data type name. The dataset will have a data source ID of
 *  derived:com.google.:com.google.android.gms:aggregated
 */
@property(nonatomic, copy, nullable) NSString *dataTypeName;

@end


/**
 *  GTLRFitness_AggregateRequest
 */
@interface GTLRFitness_AggregateRequest : GTLRObject

/**
 *  The specification of data to be aggregated. At least one aggregateBy spec
 *  must be provided. All data that is specified will be aggregated using the
 *  same bucketing criteria. There will be one dataset in the response for every
 *  aggregateBy spec.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRFitness_AggregateBy *> *aggregateBy;

/**
 *  Specifies that data be aggregated each activity segment recored for a user.
 *  Similar to bucketByActivitySegment, but bucketing is done for each activity
 *  segment rather than all segments of the same type. Mutually exclusive of
 *  other bucketing specifications.
 */
@property(nonatomic, strong, nullable) GTLRFitness_BucketByActivity *bucketByActivitySegment;

/**
 *  Specifies that data be aggregated by the type of activity being performed
 *  when the data was recorded. All data that was recorded during a certain
 *  activity type (for the given time range) will be aggregated into the same
 *  bucket. Data that was recorded while the user was not active will not be
 *  included in the response. Mutually exclusive of other bucketing
 *  specifications.
 */
@property(nonatomic, strong, nullable) GTLRFitness_BucketByActivity *bucketByActivityType;

/**
 *  Specifies that data be aggregated by user sessions. Data that does not fall
 *  within the time range of a session will not be included in the response.
 *  Mutually exclusive of other bucketing specifications.
 */
@property(nonatomic, strong, nullable) GTLRFitness_BucketBySession *bucketBySession;

/**
 *  Specifies that data be aggregated by a single time interval. Mutually
 *  exclusive of other bucketing specifications.
 */
@property(nonatomic, strong, nullable) GTLRFitness_BucketByTime *bucketByTime;

/**
 *  The end of a window of time. Data that intersects with this time window will
 *  be aggregated. The time is in milliseconds since epoch, inclusive.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *endTimeMillis;

/**
 *  A list of acceptable data quality standards. Only data points which conform
 *  to at least one of the specified data quality standards will be returned. If
 *  the list is empty, all data points are returned.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *filteredDataQualityStandard;

/**
 *  The start of a window of time. Data that intersects with this time window
 *  will be aggregated. The time is in milliseconds since epoch, inclusive.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *startTimeMillis;

@end


/**
 *  GTLRFitness_AggregateResponse
 */
@interface GTLRFitness_AggregateResponse : GTLRObject

/** A list of buckets containing the aggregated data. */
@property(nonatomic, strong, nullable) NSArray<GTLRFitness_AggregateBucket *> *bucket;

@end


/**
 *  GTLRFitness_Application
 */
@interface GTLRFitness_Application : GTLRObject

/** An optional URI that can be used to link back to the application. */
@property(nonatomic, copy, nullable) NSString *detailsUrl;

/**
 *  The name of this application. This is required for REST clients, but we do
 *  not enforce uniqueness of this name. It is provided as a matter of
 *  convenience for other developers who would like to identify which REST
 *  created an Application or Data Source.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Package name for this application. This is used as a unique identifier when
 *  created by Android applications, but cannot be specified by REST clients.
 *  REST clients will have their developer project number reflected into the
 *  Data Source data stream IDs, instead of the packageName.
 */
@property(nonatomic, copy, nullable) NSString *packageName;

/**
 *  Version of the application. You should update this field whenever the
 *  application changes in a way that affects the computation of the data.
 */
@property(nonatomic, copy, nullable) NSString *version;

@end


/**
 *  GTLRFitness_BucketByActivity
 */
@interface GTLRFitness_BucketByActivity : GTLRObject

/**
 *  The default activity stream will be used if a specific activityDataSourceId
 *  is not specified.
 */
@property(nonatomic, copy, nullable) NSString *activityDataSourceId;

/**
 *  Specifies that only activity segments of duration longer than
 *  minDurationMillis are considered and used as a container for aggregated
 *  data.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *minDurationMillis;

@end


/**
 *  GTLRFitness_BucketBySession
 */
@interface GTLRFitness_BucketBySession : GTLRObject

/**
 *  Specifies that only sessions of duration longer than minDurationMillis are
 *  considered and used as a container for aggregated data.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *minDurationMillis;

@end


/**
 *  GTLRFitness_BucketByTime
 */
@interface GTLRFitness_BucketByTime : GTLRObject

/**
 *  Specifies that result buckets aggregate data by exactly durationMillis time
 *  frames. Time frames that contain no data will be included in the response
 *  with an empty dataset.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *durationMillis;

@property(nonatomic, strong, nullable) GTLRFitness_BucketByTimePeriod *period;

@end


/**
 *  GTLRFitness_BucketByTimePeriod
 */
@interface GTLRFitness_BucketByTimePeriod : GTLRObject

/** org.joda.timezone.DateTimeZone */
@property(nonatomic, copy, nullable) NSString *timeZoneId;

/**
 *  type
 *
 *  Likely values:
 *    @arg @c kGTLRFitness_BucketByTimePeriod_Type_Day Value "day"
 *    @arg @c kGTLRFitness_BucketByTimePeriod_Type_Month Value "month"
 *    @arg @c kGTLRFitness_BucketByTimePeriod_Type_Week Value "week"
 */
@property(nonatomic, copy, nullable) NSString *type;

/**
 *  value
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *value;

@end


/**
 *  Represents a single data point, generated by a particular data source. A
 *  data point holds a value for each field, an end timestamp and an optional
 *  start time. The exact semantics of each of these attributes are specified in
 *  the documentation for the particular data type.
 *  A data point can represent an instantaneous measurement, reading or input
 *  observation, as well as averages or aggregates over a time interval. Check
 *  the data type documentation to determine which is the case for a particular
 *  data type.
 *  Data points always contain one value for each field of the data type.
 */
@interface GTLRFitness_DataPoint : GTLRObject

/**
 *  Used for version checking during transformation; that is, a datapoint can
 *  only replace another datapoint that has an older computation time stamp.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *computationTimeMillis;

/** The data type defining the format of the values in this data point. */
@property(nonatomic, copy, nullable) NSString *dataTypeName;

/**
 *  The end time of the interval represented by this data point, in nanoseconds
 *  since epoch.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *endTimeNanos;

/**
 *  Indicates the last time this data point was modified. Useful only in
 *  contexts where we are listing the data changes, rather than representing the
 *  current state of the data.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *modifiedTimeMillis;

/**
 *  If the data point is contained in a dataset for a derived data source, this
 *  field will be populated with the data source stream ID that created the data
 *  point originally.
 */
@property(nonatomic, copy, nullable) NSString *originDataSourceId;

/**
 *  The raw timestamp from the original SensorEvent.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *rawTimestampNanos;

/**
 *  The start time of the interval represented by this data point, in
 *  nanoseconds since epoch.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *startTimeNanos;

/**
 *  Values of each data type field for the data point. It is expected that each
 *  value corresponding to a data type field will occur in the same order that
 *  the field is listed with in the data type specified in a data source.
 *  Only one of integer and floating point fields will be populated, depending
 *  on the format enum value within data source's type field.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRFitness_Value *> *value;

@end


/**
 *  A dataset represents a projection container for data points. They do not
 *  carry any info of their own. Datasets represent a set of data points from a
 *  particular data source. A data point can be found in more than one dataset.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "point" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRFitness_Dataset : GTLRCollectionObject

/**
 *  The data stream ID of the data source that created the points in this
 *  dataset.
 */
@property(nonatomic, copy, nullable) NSString *dataSourceId;

/**
 *  The largest end time of all data points in this possibly partial
 *  representation of the dataset. Time is in nanoseconds from epoch. This
 *  should also match the first part of the dataset identifier.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *maxEndTimeNs;

/**
 *  The smallest start time of all data points in this possibly partial
 *  representation of the dataset. Time is in nanoseconds from epoch. This
 *  should also match the first part of the dataset identifier.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *minStartTimeNs;

/**
 *  This token will be set when a dataset is received in response to a GET
 *  request and the dataset is too large to be included in a single response.
 *  Provide this value in a subsequent GET request to return the next page of
 *  data points within this dataset.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  A partial list of data points contained in the dataset, ordered by largest
 *  endTimeNanos first. This list is considered complete when retrieving a small
 *  dataset and partial when patching a dataset or retrieving a dataset that is
 *  too large to include in a single response.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRFitness_DataPoint *> *point;

@end


/**
 *  Definition of a unique source of sensor data. Data sources can expose raw
 *  data coming from hardware sensors on local or companion devices. They can
 *  also expose derived data, created by transforming or merging other data
 *  sources. Multiple data sources can exist for the same data type. Every data
 *  point inserted into or read from this service has an associated data source.
 *  The data source contains enough information to uniquely identify its data,
 *  including the hardware device and the application that collected and/or
 *  transformed the data. It also holds useful metadata, such as the hardware
 *  and application versions, and the device type.
 *  Each data source produces a unique stream of data, with a unique identifier.
 *  Not all changes to data source affect the stream identifier, so that data
 *  collected by updated versions of the same application/device can still be
 *  considered to belong to the same data stream.
 */
@interface GTLRFitness_DataSource : GTLRObject

/**
 *  Information about an application which feeds sensor data into the platform.
 */
@property(nonatomic, strong, nullable) GTLRFitness_Application *application;

@property(nonatomic, strong, nullable) NSArray<NSString *> *dataQualityStandard;

/**
 *  A unique identifier for the data stream produced by this data source. The
 *  identifier includes:
 *  - The physical device's manufacturer, model, and serial number (UID).
 *  - The application's package name or name. Package name is used when the data
 *  source was created by an Android application. The developer project number
 *  is used when the data source was created by a REST client.
 *  - The data source's type.
 *  - The data source's stream name. Note that not all attributes of the data
 *  source are used as part of the stream identifier. In particular, the version
 *  of the hardware/the application isn't used. This allows us to preserve the
 *  same stream through version updates. This also means that two DataSource
 *  objects may represent the same data stream even if they're not equal.
 *  The exact format of the data stream ID created by an Android application is:
 *  type:dataType.name:application.packageName:device.manufacturer:device.model:device.uid:dataStreamName
 *  The exact format of the data stream ID created by a REST client is:
 *  type:dataType.name:developer project
 *  number:device.manufacturer:device.model:device.uid:dataStreamName
 *  When any of the optional fields that comprise of the data stream ID are
 *  blank, they will be omitted from the data stream ID. The minnimum viable
 *  data stream ID would be: type:dataType.name:developer project number
 *  Finally, the developer project number is obfuscated when read by any REST or
 *  Android client that did not create the data source. Only the data source
 *  creator will see the developer project number in clear and normal form.
 */
@property(nonatomic, copy, nullable) NSString *dataStreamId;

/**
 *  The stream name uniquely identifies this particular data source among other
 *  data sources of the same type from the same underlying producer. Setting the
 *  stream name is optional, but should be done whenever an application exposes
 *  two streams for the same data type, or when a device has two equivalent
 *  sensors.
 */
@property(nonatomic, copy, nullable) NSString *dataStreamName;

/**
 *  The data type defines the schema for a stream of data being collected by,
 *  inserted into, or queried from the Fitness API.
 */
@property(nonatomic, strong, nullable) GTLRFitness_DataType *dataType;

/**
 *  Representation of an integrated device (such as a phone or a wearable) that
 *  can hold sensors.
 */
@property(nonatomic, strong, nullable) GTLRFitness_Device *device;

/** An end-user visible name for this data source. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  A constant describing the type of this data source. Indicates whether this
 *  data source produces raw or derived data.
 *
 *  Likely values:
 *    @arg @c kGTLRFitness_DataSource_Type_Derived Value "derived"
 *    @arg @c kGTLRFitness_DataSource_Type_Raw Value "raw"
 */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  GTLRFitness_DataType
 */
@interface GTLRFitness_DataType : GTLRObject

/** A field represents one dimension of a data type. */
@property(nonatomic, strong, nullable) NSArray<GTLRFitness_DataTypeField *> *field;

/**
 *  Each data type has a unique, namespaced, name. All data types in the
 *  com.google namespace are shared as part of the platform.
 */
@property(nonatomic, copy, nullable) NSString *name;

@end


/**
 *  In case of multi-dimensional data (such as an accelerometer with x, y, and z
 *  axes) each field represents one dimension. Each data type field has a unique
 *  name which identifies it. The field also defines the format of the data
 *  (int, float, etc.).
 *  This message is only instantiated in code and not used for wire comms or
 *  stored in any way.
 */
@interface GTLRFitness_DataTypeField : GTLRObject

/**
 *  The different supported formats for each field in a data type.
 *
 *  Likely values:
 *    @arg @c kGTLRFitness_DataTypeField_Format_Blob Value "blob"
 *    @arg @c kGTLRFitness_DataTypeField_Format_FloatList Value "floatList"
 *    @arg @c kGTLRFitness_DataTypeField_Format_FloatPoint Value "floatPoint"
 *    @arg @c kGTLRFitness_DataTypeField_Format_Integer Value "integer"
 *    @arg @c kGTLRFitness_DataTypeField_Format_IntegerList Value "integerList"
 *    @arg @c kGTLRFitness_DataTypeField_Format_Map Value "map"
 *    @arg @c kGTLRFitness_DataTypeField_Format_String Value "string"
 */
@property(nonatomic, copy, nullable) NSString *format;

/**
 *  Defines the name and format of data. Unlike data type names, field names are
 *  not namespaced, and only need to be unique within the data type.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  optional
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *optional;

@end


/**
 *  Representation of an integrated device (such as a phone or a wearable) that
 *  can hold sensors. Each sensor is exposed as a data source.
 *  The main purpose of the device information contained in this class is to
 *  identify the hardware of a particular data source. This can be useful in
 *  different ways, including:
 *  - Distinguishing two similar sensors on different devices (the step counter
 *  on two nexus 5 phones, for instance)
 *  - Display the source of data to the user (by using the device make / model)
 *  - Treat data differently depending on sensor type (accelerometers on a watch
 *  may give different patterns than those on a phone)
 *  - Build different analysis models for each device/version.
 */
@interface GTLRFitness_Device : GTLRObject

/** Manufacturer of the product/hardware. */
@property(nonatomic, copy, nullable) NSString *manufacturer;

/** End-user visible model name for the device. */
@property(nonatomic, copy, nullable) NSString *model;

/**
 *  A constant representing the type of the device.
 *
 *  Likely values:
 *    @arg @c kGTLRFitness_Device_Type_ChestStrap Value "chestStrap"
 *    @arg @c kGTLRFitness_Device_Type_HeadMounted Value "headMounted"
 *    @arg @c kGTLRFitness_Device_Type_Phone Value "phone"
 *    @arg @c kGTLRFitness_Device_Type_Scale Value "scale"
 *    @arg @c kGTLRFitness_Device_Type_Tablet Value "tablet"
 *    @arg @c kGTLRFitness_Device_Type_Unknown Value "unknown"
 *    @arg @c kGTLRFitness_Device_Type_Watch Value "watch"
 */
@property(nonatomic, copy, nullable) NSString *type;

/**
 *  The serial number or other unique ID for the hardware. This field is
 *  obfuscated when read by any REST or Android client that did not create the
 *  data source. Only the data source creator will see the uid field in clear
 *  and normal form.
 */
@property(nonatomic, copy, nullable) NSString *uid;

/** Version string for the device hardware/software. */
@property(nonatomic, copy, nullable) NSString *version;

@end


/**
 *  GTLRFitness_ListDataSourcesResponse
 */
@interface GTLRFitness_ListDataSourcesResponse : GTLRObject

/** A previously created data source. */
@property(nonatomic, strong, nullable) NSArray<GTLRFitness_DataSource *> *dataSource;

@end


/**
 *  GTLRFitness_ListSessionsResponse
 */
@interface GTLRFitness_ListSessionsResponse : GTLRObject

/**
 *  If includeDeleted is set to true in the request, this list will contain
 *  sessions deleted with original end times that are within the startTime and
 *  endTime frame.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRFitness_Session *> *deletedSession;

/**
 *  The continuation token, which is used to page through large result sets.
 *  Provide this value in a subsequent request to return the next page of
 *  results.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  Sessions with an end time that is between startTime and endTime of the
 *  request.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRFitness_Session *> *session;

@end


/**
 *  Holder object for the value of an entry in a map field of a data point.
 *  A map value supports a subset of the formats that the regular Value
 *  supports.
 */
@interface GTLRFitness_MapValue : GTLRObject

/**
 *  Floating point value.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *fpVal;

@end


/**
 *  Sessions contain metadata, such as a user-friendly name and time interval
 *  information.
 */
@interface GTLRFitness_Session : GTLRObject

/**
 *  Session active time. While start_time_millis and end_time_millis define the
 *  full session time, the active time can be shorter and specified by
 *  active_time_millis. If the inactive time during the session is known, it
 *  should also be inserted via a com.google.activity.segment data point with a
 *  STILL activity value
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *activeTimeMillis;

/**
 *  The type of activity this session represents.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *activityType;

/** The application that created the session. */
@property(nonatomic, strong, nullable) GTLRFitness_Application *application;

/**
 *  A description for this session.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/**
 *  An end time, in milliseconds since epoch, inclusive.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *endTimeMillis;

/**
 *  A client-generated identifier that is unique across all sessions owned by
 *  this particular user.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  A timestamp that indicates when the session was last modified.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *modifiedTimeMillis;

/** A human readable name of the session. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  A start time, in milliseconds since epoch, inclusive.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *startTimeMillis;

@end


/**
 *  Holder object for the value of a single field in a data point.
 *  A field value has a particular format and is only ever set to one of an
 *  integer or a floating point value.
 */
@interface GTLRFitness_Value : GTLRObject

/**
 *  Floating point value. When this is set, other values must not be set.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *fpVal;

/**
 *  Integer value. When this is set, other values must not be set.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *intVal;

/**
 *  Map value. The valid key space and units for the corresponding value of each
 *  entry should be documented as part of the data type definition. Keys should
 *  be kept small whenever possible. Data streams with large keys and high data
 *  frequency may be down sampled.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRFitness_ValueMapValEntry *> *mapVal;

/**
 *  String value. When this is set, other values must not be set. Strings should
 *  be kept small whenever possible. Data streams with large string values and
 *  high data frequency may be down sampled.
 */
@property(nonatomic, copy, nullable) NSString *stringVal;

@end


/**
 *  GTLRFitness_ValueMapValEntry
 */
@interface GTLRFitness_ValueMapValEntry : GTLRObject

@property(nonatomic, copy, nullable) NSString *key;
@property(nonatomic, strong, nullable) GTLRFitness_MapValue *value;

@end

NS_ASSUME_NONNULL_END
