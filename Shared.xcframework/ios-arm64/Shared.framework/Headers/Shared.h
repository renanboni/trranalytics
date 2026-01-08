#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedSellerV1, SharedSellerV1ConsignmentHome, SharedSellerV1ConsignorEstimatorCategorySelected, SharedSellerV1ConsignorEstimatorDetailsSubmitted, SharedSellerV1ConsignorEstimatorItemDetails, SharedSellerV1ConsignorEstimatorLanding, SharedSellerV1ConsignorEstimatorResults, SharedSellerV1EditItemDetailsSelected, SharedSellerV1FeedbackSubmitted, SharedSellerV1FormStarted, SharedSellerV1FormSubmitted, SharedSellerV1InquiryCreated, SharedSellerV1LeadFormViewed, SharedSellerV1NewSearchSelected, SharedSellerV1ServerError;

@protocol SharedAnalyticsEvent, SharedPlatform, SharedSeller;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("AnalyticsEvent")))
@protocol SharedAnalyticsEvent
@required
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@end


/**
 * Generated analytics events for family: Seller
 */
__attribute__((swift_name("Seller")))
@protocol SharedSeller <SharedAnalyticsEvent>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerV1")))
@interface SharedSellerV1 : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)v1 __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSellerV1 *shared __attribute__((swift_name("shared")));
@end


/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/consignment_home.json)
 * event="Consignment Home", schemaVersion=1
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerV1.ConsignmentHome")))
@interface SharedSellerV1ConsignmentHome : SharedBase <SharedSeller>
- (instancetype)initWithLoggedIn:(BOOL)loggedIn repeatConsignor:(BOOL)repeatConsignor __attribute__((swift_name("init(loggedIn:repeatConsignor:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerV1ConsignmentHome *)doCopyLoggedIn:(BOOL)loggedIn repeatConsignor:(BOOL)repeatConsignor __attribute__((swift_name("doCopy(loggedIn:repeatConsignor:)")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/consignment_home.json)
 * event="Consignment Home", schemaVersion=1
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/consignment_home.json)
 * event="Consignment Home", schemaVersion=1
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/consignment_home.json)
 * event="Consignment Home", schemaVersion=1
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) BOOL loggedIn __attribute__((swift_name("loggedIn")));
@property (readonly) BOOL repeatConsignor __attribute__((swift_name("repeatConsignor")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@end


/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/consignor_estimator_category_selected.json)
 * event="Consignor Estimator Category Selected", schemaVersion=1
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerV1.ConsignorEstimatorCategorySelected")))
@interface SharedSellerV1ConsignorEstimatorCategorySelected : SharedBase <SharedSeller>
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page selectedCategory:(NSString *)selectedCategory __attribute__((swift_name("init(category:page:selectedCategory:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerV1ConsignorEstimatorCategorySelected *)doCopyCategory:(NSString *)category page:(NSString *)page selectedCategory:(NSString *)selectedCategory __attribute__((swift_name("doCopy(category:page:selectedCategory:)")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/consignor_estimator_category_selected.json)
 * event="Consignor Estimator Category Selected", schemaVersion=1
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/consignor_estimator_category_selected.json)
 * event="Consignor Estimator Category Selected", schemaVersion=1
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/consignor_estimator_category_selected.json)
 * event="Consignor Estimator Category Selected", schemaVersion=1
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString *selectedCategory __attribute__((swift_name("selectedCategory")));
@end


/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/consignor_estimator_details_submitted.json)
 * event="Consignor Estimator Details Submitted", schemaVersion=1
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerV1.ConsignorEstimatorDetailsSubmitted")))
@interface SharedSellerV1ConsignorEstimatorDetailsSubmitted : SharedBase <SharedSeller>
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page selectedCategory:(NSString *)selectedCategory selectedCondition:(NSString *)selectedCondition selectedDesigner:(NSString *)selectedDesigner selectedItemType:(NSString *)selectedItemType selectedSubcategory:(NSString *)selectedSubcategory selectedOptionalColor:(NSString * _Nullable)selectedOptionalColor selectedOptionalMaterial:(NSString * _Nullable)selectedOptionalMaterial __attribute__((swift_name("init(category:page:selectedCategory:selectedCondition:selectedDesigner:selectedItemType:selectedSubcategory:selectedOptionalColor:selectedOptionalMaterial:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerV1ConsignorEstimatorDetailsSubmitted *)doCopyCategory:(NSString *)category page:(NSString *)page selectedCategory:(NSString *)selectedCategory selectedCondition:(NSString *)selectedCondition selectedDesigner:(NSString *)selectedDesigner selectedItemType:(NSString *)selectedItemType selectedSubcategory:(NSString *)selectedSubcategory selectedOptionalColor:(NSString * _Nullable)selectedOptionalColor selectedOptionalMaterial:(NSString * _Nullable)selectedOptionalMaterial __attribute__((swift_name("doCopy(category:page:selectedCategory:selectedCondition:selectedDesigner:selectedItemType:selectedSubcategory:selectedOptionalColor:selectedOptionalMaterial:)")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/consignor_estimator_details_submitted.json)
 * event="Consignor Estimator Details Submitted", schemaVersion=1
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/consignor_estimator_details_submitted.json)
 * event="Consignor Estimator Details Submitted", schemaVersion=1
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/consignor_estimator_details_submitted.json)
 * event="Consignor Estimator Details Submitted", schemaVersion=1
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString *selectedCategory __attribute__((swift_name("selectedCategory")));
@property (readonly) NSString *selectedCondition __attribute__((swift_name("selectedCondition")));
@property (readonly) NSString *selectedDesigner __attribute__((swift_name("selectedDesigner")));
@property (readonly) NSString *selectedItemType __attribute__((swift_name("selectedItemType")));
@property (readonly) NSString * _Nullable selectedOptionalColor __attribute__((swift_name("selectedOptionalColor")));
@property (readonly) NSString * _Nullable selectedOptionalMaterial __attribute__((swift_name("selectedOptionalMaterial")));
@property (readonly) NSString *selectedSubcategory __attribute__((swift_name("selectedSubcategory")));
@end


/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/consignor_estimator_item_details.json)
 * event="Consignor Estimator Item Details", schemaVersion=1
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerV1.ConsignorEstimatorItemDetails")))
@interface SharedSellerV1ConsignorEstimatorItemDetails : SharedBase <SharedSeller>
- (instancetype)initWithCategory:(NSString *)category __attribute__((swift_name("init(category:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerV1ConsignorEstimatorItemDetails *)doCopyCategory:(NSString *)category __attribute__((swift_name("doCopy(category:)")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/consignor_estimator_item_details.json)
 * event="Consignor Estimator Item Details", schemaVersion=1
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/consignor_estimator_item_details.json)
 * event="Consignor Estimator Item Details", schemaVersion=1
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/consignor_estimator_item_details.json)
 * event="Consignor Estimator Item Details", schemaVersion=1
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@end


/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/consignor_estimator_landing.json)
 * event="Consignor Estimator Landing", schemaVersion=1
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerV1.ConsignorEstimatorLanding")))
@interface SharedSellerV1ConsignorEstimatorLanding : SharedBase <SharedSeller>
- (instancetype)initWithCategory:(NSString *)category __attribute__((swift_name("init(category:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerV1ConsignorEstimatorLanding *)doCopyCategory:(NSString *)category __attribute__((swift_name("doCopy(category:)")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/consignor_estimator_landing.json)
 * event="Consignor Estimator Landing", schemaVersion=1
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/consignor_estimator_landing.json)
 * event="Consignor Estimator Landing", schemaVersion=1
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/consignor_estimator_landing.json)
 * event="Consignor Estimator Landing", schemaVersion=1
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@end


/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/consignor_estimator_results.json)
 * event="Consignor Estimator Results", schemaVersion=1
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerV1.ConsignorEstimatorResults")))
@interface SharedSellerV1ConsignorEstimatorResults : SharedBase <SharedSeller>
- (instancetype)initWithCategory:(NSString *)category estimateResultFrom:(NSString *)estimateResultFrom estimateResultTo:(NSString *)estimateResultTo selectedCategory:(NSString *)selectedCategory selectedCondition:(NSString *)selectedCondition selectedDesigner:(NSString *)selectedDesigner selectedItemType:(NSString *)selectedItemType selectedSubcategory:(NSString *)selectedSubcategory selectedOptionalColor:(NSString * _Nullable)selectedOptionalColor selectedOptionalMaterial:(NSString * _Nullable)selectedOptionalMaterial __attribute__((swift_name("init(category:estimateResultFrom:estimateResultTo:selectedCategory:selectedCondition:selectedDesigner:selectedItemType:selectedSubcategory:selectedOptionalColor:selectedOptionalMaterial:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerV1ConsignorEstimatorResults *)doCopyCategory:(NSString *)category estimateResultFrom:(NSString *)estimateResultFrom estimateResultTo:(NSString *)estimateResultTo selectedCategory:(NSString *)selectedCategory selectedCondition:(NSString *)selectedCondition selectedDesigner:(NSString *)selectedDesigner selectedItemType:(NSString *)selectedItemType selectedSubcategory:(NSString *)selectedSubcategory selectedOptionalColor:(NSString * _Nullable)selectedOptionalColor selectedOptionalMaterial:(NSString * _Nullable)selectedOptionalMaterial __attribute__((swift_name("doCopy(category:estimateResultFrom:estimateResultTo:selectedCategory:selectedCondition:selectedDesigner:selectedItemType:selectedSubcategory:selectedOptionalColor:selectedOptionalMaterial:)")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/consignor_estimator_results.json)
 * event="Consignor Estimator Results", schemaVersion=1
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/consignor_estimator_results.json)
 * event="Consignor Estimator Results", schemaVersion=1
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/consignor_estimator_results.json)
 * event="Consignor Estimator Results", schemaVersion=1
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *estimateResultFrom __attribute__((swift_name("estimateResultFrom")));
@property (readonly) NSString *estimateResultTo __attribute__((swift_name("estimateResultTo")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString *selectedCategory __attribute__((swift_name("selectedCategory")));
@property (readonly) NSString *selectedCondition __attribute__((swift_name("selectedCondition")));
@property (readonly) NSString *selectedDesigner __attribute__((swift_name("selectedDesigner")));
@property (readonly) NSString *selectedItemType __attribute__((swift_name("selectedItemType")));
@property (readonly) NSString * _Nullable selectedOptionalColor __attribute__((swift_name("selectedOptionalColor")));
@property (readonly) NSString * _Nullable selectedOptionalMaterial __attribute__((swift_name("selectedOptionalMaterial")));
@property (readonly) NSString *selectedSubcategory __attribute__((swift_name("selectedSubcategory")));
@end


/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/edit_item_details_selected.json)
 * event="Edit Item Details Selected", schemaVersion=1
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerV1.EditItemDetailsSelected")))
@interface SharedSellerV1EditItemDetailsSelected : SharedBase <SharedSeller>
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page __attribute__((swift_name("init(category:page:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerV1EditItemDetailsSelected *)doCopyCategory:(NSString *)category page:(NSString *)page __attribute__((swift_name("doCopy(category:page:)")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/edit_item_details_selected.json)
 * event="Edit Item Details Selected", schemaVersion=1
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/edit_item_details_selected.json)
 * event="Edit Item Details Selected", schemaVersion=1
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/edit_item_details_selected.json)
 * event="Edit Item Details Selected", schemaVersion=1
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@end


/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/feedback_submitted.json)
 * event="Feedback Submitted", schemaVersion=1
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerV1.FeedbackSubmitted")))
@interface SharedSellerV1FeedbackSubmitted : SharedBase <SharedSeller>
- (instancetype)initWithFeatureName:(NSString *)featureName location:(NSString *)location comment:(NSString * _Nullable)comment feedbackType:(NSString * _Nullable)feedbackType optionsSelected:(NSArray<NSString *> * _Nullable)optionsSelected __attribute__((swift_name("init(featureName:location:comment:feedbackType:optionsSelected:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerV1FeedbackSubmitted *)doCopyFeatureName:(NSString *)featureName location:(NSString *)location comment:(NSString * _Nullable)comment feedbackType:(NSString * _Nullable)feedbackType optionsSelected:(NSArray<NSString *> * _Nullable)optionsSelected __attribute__((swift_name("doCopy(featureName:location:comment:feedbackType:optionsSelected:)")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/feedback_submitted.json)
 * event="Feedback Submitted", schemaVersion=1
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/feedback_submitted.json)
 * event="Feedback Submitted", schemaVersion=1
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/feedback_submitted.json)
 * event="Feedback Submitted", schemaVersion=1
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable comment __attribute__((swift_name("comment")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *featureName __attribute__((swift_name("featureName")));
@property (readonly) NSString * _Nullable feedbackType __attribute__((swift_name("feedbackType")));
@property (readonly) NSString *location __attribute__((swift_name("location")));
@property (readonly) NSArray<NSString *> * _Nullable optionsSelected __attribute__((swift_name("optionsSelected")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@end


/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/form_started.json)
 * event="Form Started", schemaVersion=1
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerV1.FormStarted")))
@interface SharedSellerV1FormStarted : SharedBase <SharedSeller>
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page type:(NSString *)type __attribute__((swift_name("init(category:page:type:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerV1FormStarted *)doCopyCategory:(NSString *)category page:(NSString *)page type:(NSString *)type __attribute__((swift_name("doCopy(category:page:type:)")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/form_started.json)
 * event="Form Started", schemaVersion=1
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/form_started.json)
 * event="Form Started", schemaVersion=1
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/form_started.json)
 * event="Form Started", schemaVersion=1
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end


/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/form_submitted.json)
 * event="Form Submitted", schemaVersion=1
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerV1.FormSubmitted")))
@interface SharedSellerV1FormSubmitted : SharedBase <SharedSeller>
- (instancetype)initWithCategory:(NSString *)category email:(NSString *)email firstName:(NSString *)firstName lastName:(NSString *)lastName page:(NSString *)page phone:(NSString *)phone postalCode:(NSString *)postalCode type:(NSString *)type __attribute__((swift_name("init(category:email:firstName:lastName:page:phone:postalCode:type:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerV1FormSubmitted *)doCopyCategory:(NSString *)category email:(NSString *)email firstName:(NSString *)firstName lastName:(NSString *)lastName page:(NSString *)page phone:(NSString *)phone postalCode:(NSString *)postalCode type:(NSString *)type __attribute__((swift_name("doCopy(category:email:firstName:lastName:page:phone:postalCode:type:)")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/form_submitted.json)
 * event="Form Submitted", schemaVersion=1
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/form_submitted.json)
 * event="Form Submitted", schemaVersion=1
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/form_submitted.json)
 * event="Form Submitted", schemaVersion=1
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *firstName __attribute__((swift_name("firstName")));
@property (readonly) NSString *lastName __attribute__((swift_name("lastName")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) NSString *phone __attribute__((swift_name("phone")));
@property (readonly) NSString *postalCode __attribute__((swift_name("postalCode")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end


/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/inquiry_created.json)
 * event="Inquiry Created", schemaVersion=1
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerV1.InquiryCreated")))
@interface SharedSellerV1InquiryCreated : SharedBase <SharedSeller>
- (instancetype)initWithInquiryId:(NSString *)inquiryId repeatConsignor:(BOOL)repeatConsignor feature:(NSString * _Nullable)feature firstName:(NSString * _Nullable)firstName inquirySlug:(NSString * _Nullable)inquirySlug lastName:(NSString * _Nullable)lastName leadEmail:(NSString * _Nullable)leadEmail leadSource:(NSString * _Nullable)leadSource leadSubSource:(NSString * _Nullable)leadSubSource loggedIn:(SharedBoolean * _Nullable)loggedIn method:(NSString * _Nullable)method path:(NSString * _Nullable)path zipCode:(NSString * _Nullable)zipCode __attribute__((swift_name("init(inquiryId:repeatConsignor:feature:firstName:inquirySlug:lastName:leadEmail:leadSource:leadSubSource:loggedIn:method:path:zipCode:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerV1InquiryCreated *)doCopyInquiryId:(NSString *)inquiryId repeatConsignor:(BOOL)repeatConsignor feature:(NSString * _Nullable)feature firstName:(NSString * _Nullable)firstName inquirySlug:(NSString * _Nullable)inquirySlug lastName:(NSString * _Nullable)lastName leadEmail:(NSString * _Nullable)leadEmail leadSource:(NSString * _Nullable)leadSource leadSubSource:(NSString * _Nullable)leadSubSource loggedIn:(SharedBoolean * _Nullable)loggedIn method:(NSString * _Nullable)method path:(NSString * _Nullable)path zipCode:(NSString * _Nullable)zipCode __attribute__((swift_name("doCopy(inquiryId:repeatConsignor:feature:firstName:inquirySlug:lastName:leadEmail:leadSource:leadSubSource:loggedIn:method:path:zipCode:)")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/inquiry_created.json)
 * event="Inquiry Created", schemaVersion=1
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/inquiry_created.json)
 * event="Inquiry Created", schemaVersion=1
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/inquiry_created.json)
 * event="Inquiry Created", schemaVersion=1
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable feature __attribute__((swift_name("feature")));
@property (readonly) NSString * _Nullable firstName __attribute__((swift_name("firstName")));
@property (readonly) NSString *inquiryId __attribute__((swift_name("inquiryId")));
@property (readonly) NSString * _Nullable inquirySlug __attribute__((swift_name("inquirySlug")));
@property (readonly) NSString * _Nullable lastName __attribute__((swift_name("lastName")));
@property (readonly) NSString * _Nullable leadEmail __attribute__((swift_name("leadEmail")));
@property (readonly) NSString * _Nullable leadSource __attribute__((swift_name("leadSource")));
@property (readonly) NSString * _Nullable leadSubSource __attribute__((swift_name("leadSubSource")));
@property (readonly) SharedBoolean * _Nullable loggedIn __attribute__((swift_name("loggedIn")));
@property (readonly) NSString * _Nullable method __attribute__((swift_name("method")));
@property (readonly) NSString * _Nullable path __attribute__((swift_name("path")));
@property (readonly) BOOL repeatConsignor __attribute__((swift_name("repeatConsignor")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString * _Nullable zipCode __attribute__((swift_name("zipCode")));
@end


/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/lead_form_viewed.json)
 * event="Lead Form Viewed", schemaVersion=1
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerV1.LeadFormViewed")))
@interface SharedSellerV1LeadFormViewed : SharedBase <SharedSeller>
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page __attribute__((swift_name("init(category:page:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerV1LeadFormViewed *)doCopyCategory:(NSString *)category page:(NSString *)page __attribute__((swift_name("doCopy(category:page:)")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/lead_form_viewed.json)
 * event="Lead Form Viewed", schemaVersion=1
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/lead_form_viewed.json)
 * event="Lead Form Viewed", schemaVersion=1
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/lead_form_viewed.json)
 * event="Lead Form Viewed", schemaVersion=1
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@end


/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/new_search_selected.json)
 * event="New Search Selected", schemaVersion=1
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerV1.NewSearchSelected")))
@interface SharedSellerV1NewSearchSelected : SharedBase <SharedSeller>
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page __attribute__((swift_name("init(category:page:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerV1NewSearchSelected *)doCopyCategory:(NSString *)category page:(NSString *)page __attribute__((swift_name("doCopy(category:page:)")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/new_search_selected.json)
 * event="New Search Selected", schemaVersion=1
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/new_search_selected.json)
 * event="New Search Selected", schemaVersion=1
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/new_search_selected.json)
 * event="New Search Selected", schemaVersion=1
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@end


/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/server_error.json)
 * event="Server Error", schemaVersion=1
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerV1.ServerError")))
@interface SharedSellerV1ServerError : SharedBase <SharedSeller>
- (instancetype)initWithCategory:(NSString *)category error:(NSString *)error page:(NSString *)page type:(NSString *)type __attribute__((swift_name("init(category:error:page:type:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerV1ServerError *)doCopyCategory:(NSString *)category error:(NSString *)error page:(NSString *)page type:(NSString *)type __attribute__((swift_name("doCopy(category:error:page:type:)")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/server_error.json)
 * event="Server Error", schemaVersion=1
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/server_error.json)
 * event="Server Error", schemaVersion=1
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/server_error.json)
 * event="Server Error", schemaVersion=1
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *error __attribute__((swift_name("error")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("Platform")))
@protocol SharedPlatform
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface SharedIOSPlatform : SharedBase <SharedPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface SharedPlatform_iosKt : SharedBase
+ (id<SharedPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
