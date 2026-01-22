#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedSellerConsignmentHome, SharedSellerConsignorEstimatorCategorySelected, SharedSellerConsignorEstimatorDetailsSubmitted, SharedSellerConsignorEstimatorItemDetails, SharedSellerConsignorEstimatorLanding, SharedSellerConsignorEstimatorResultGenerated, SharedSellerConsignorEstimatorResults, SharedSellerEditDetailsSelected, SharedSellerFeedbackSubmitted, SharedSellerFormStarted, SharedSellerFormSubmitted, SharedSellerInquiryCreated, SharedSellerLeadFormViewed, SharedSellerNewSearchSelected, SharedSellerServerError, SharedSellerViewSellingOptionsClicked;

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
@end


/**
 * Generated analytics events for family: Seller
 */
__attribute__((swift_name("Seller")))
@protocol SharedSeller <SharedAnalyticsEvent>
@required
@end


/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/consignment_home.json)
 * event="Consignment Home"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerConsignmentHome")))
@interface SharedSellerConsignmentHome : SharedBase <SharedSeller>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithLoggedIn:(BOOL)loggedIn repeatConsignor:(BOOL)repeatConsignor __attribute__((swift_name("init(loggedIn:repeatConsignor:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithLoggedIn:(BOOL)loggedIn repeatConsignor:(BOOL)repeatConsignor utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(loggedIn:repeatConsignor:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerConsignmentHome *)doCopyLoggedIn:(BOOL)loggedIn repeatConsignor:(BOOL)repeatConsignor utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(loggedIn:repeatConsignor:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/consignment_home.json)
 * event="Consignment Home"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/consignment_home.json)
 * event="Consignment Home"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/consignment_home.json)
 * event="Consignment Home"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) BOOL loggedIn __attribute__((swift_name("loggedIn")));
@property (readonly) BOOL repeatConsignor __attribute__((swift_name("repeatConsignor")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/consignor_estimator_category_selected.json)
 * event="Consignor Estimator Category Selected"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerConsignorEstimatorCategorySelected")))
@interface SharedSellerConsignorEstimatorCategorySelected : SharedBase <SharedSeller>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page selectedCategory:(NSString *)selectedCategory __attribute__((swift_name("init(category:page:selectedCategory:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page selectedCategory:(NSString *)selectedCategory utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:page:selectedCategory:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerConsignorEstimatorCategorySelected *)doCopyCategory:(NSString *)category page:(NSString *)page selectedCategory:(NSString *)selectedCategory utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:page:selectedCategory:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/consignor_estimator_category_selected.json)
 * event="Consignor Estimator Category Selected"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/consignor_estimator_category_selected.json)
 * event="Consignor Estimator Category Selected"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/consignor_estimator_category_selected.json)
 * event="Consignor Estimator Category Selected"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) NSString *selectedCategory __attribute__((swift_name("selectedCategory")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/consignor_estimator_details_submitted.json)
 * event="Consignor Estimator Details Submitted"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerConsignorEstimatorDetailsSubmitted")))
@interface SharedSellerConsignorEstimatorDetailsSubmitted : SharedBase <SharedSeller>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page selectedCategory:(NSString *)selectedCategory selectedCondition:(NSString *)selectedCondition selectedDesigner:(NSString *)selectedDesigner selectedItemType:(NSString *)selectedItemType selectedSubcategory:(NSString *)selectedSubcategory __attribute__((swift_name("init(category:page:selectedCategory:selectedCondition:selectedDesigner:selectedItemType:selectedSubcategory:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page selectedCategory:(NSString *)selectedCategory selectedCondition:(NSString *)selectedCondition selectedDesigner:(NSString *)selectedDesigner selectedItemType:(NSString *)selectedItemType selectedSubcategory:(NSString *)selectedSubcategory selectedOptionals:(NSDictionary<NSString *, id> * _Nullable)selectedOptionals utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:page:selectedCategory:selectedCondition:selectedDesigner:selectedItemType:selectedSubcategory:selectedOptionals:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerConsignorEstimatorDetailsSubmitted *)doCopyCategory:(NSString *)category page:(NSString *)page selectedCategory:(NSString *)selectedCategory selectedCondition:(NSString *)selectedCondition selectedDesigner:(NSString *)selectedDesigner selectedItemType:(NSString *)selectedItemType selectedSubcategory:(NSString *)selectedSubcategory selectedOptionals:(NSDictionary<NSString *, id> * _Nullable)selectedOptionals utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:page:selectedCategory:selectedCondition:selectedDesigner:selectedItemType:selectedSubcategory:selectedOptionals:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/consignor_estimator_details_submitted.json)
 * event="Consignor Estimator Details Submitted"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/consignor_estimator_details_submitted.json)
 * event="Consignor Estimator Details Submitted"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/consignor_estimator_details_submitted.json)
 * event="Consignor Estimator Details Submitted"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) NSString *selectedCategory __attribute__((swift_name("selectedCategory")));
@property (readonly) NSString *selectedCondition __attribute__((swift_name("selectedCondition")));
@property (readonly) NSString *selectedDesigner __attribute__((swift_name("selectedDesigner")));
@property (readonly) NSString *selectedItemType __attribute__((swift_name("selectedItemType")));
@property (readonly) NSDictionary<NSString *, id> * _Nullable selectedOptionals __attribute__((swift_name("selectedOptionals")));
@property (readonly) NSString *selectedSubcategory __attribute__((swift_name("selectedSubcategory")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/consignor_estimator_item_details.json)
 * event="Consignor Estimator Item Details"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerConsignorEstimatorItemDetails")))
@interface SharedSellerConsignorEstimatorItemDetails : SharedBase <SharedSeller>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category __attribute__((swift_name("init(category:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerConsignorEstimatorItemDetails *)doCopyCategory:(NSString *)category utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/consignor_estimator_item_details.json)
 * event="Consignor Estimator Item Details"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/consignor_estimator_item_details.json)
 * event="Consignor Estimator Item Details"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/consignor_estimator_item_details.json)
 * event="Consignor Estimator Item Details"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/consignor_estimator_landing.json)
 * event="Consignor Estimator Landing"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerConsignorEstimatorLanding")))
@interface SharedSellerConsignorEstimatorLanding : SharedBase <SharedSeller>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category __attribute__((swift_name("init(category:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerConsignorEstimatorLanding *)doCopyCategory:(NSString *)category utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/consignor_estimator_landing.json)
 * event="Consignor Estimator Landing"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/consignor_estimator_landing.json)
 * event="Consignor Estimator Landing"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/consignor_estimator_landing.json)
 * event="Consignor Estimator Landing"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/consignor_estimator_result_generated.json)
 * event="Consignor Estimator Result Generated"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerConsignorEstimatorResultGenerated")))
@interface SharedSellerConsignorEstimatorResultGenerated : SharedBase <SharedSeller>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category selectedCategory:(NSString *)selectedCategory selectedCondition:(NSString *)selectedCondition selectedDesigner:(NSString *)selectedDesigner selectedItemType:(NSString *)selectedItemType selectedOptionals:(NSDictionary<NSString *, id> *)selectedOptionals selectedSubcategory:(NSString *)selectedSubcategory __attribute__((swift_name("init(category:selectedCategory:selectedCondition:selectedDesigner:selectedItemType:selectedOptionals:selectedSubcategory:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category selectedCategory:(NSString *)selectedCategory selectedCondition:(NSString *)selectedCondition selectedDesigner:(NSString *)selectedDesigner selectedItemType:(NSString *)selectedItemType selectedOptionals:(NSDictionary<NSString *, id> *)selectedOptionals selectedSubcategory:(NSString *)selectedSubcategory utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:selectedCategory:selectedCondition:selectedDesigner:selectedItemType:selectedOptionals:selectedSubcategory:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerConsignorEstimatorResultGenerated *)doCopyCategory:(NSString *)category selectedCategory:(NSString *)selectedCategory selectedCondition:(NSString *)selectedCondition selectedDesigner:(NSString *)selectedDesigner selectedItemType:(NSString *)selectedItemType selectedOptionals:(NSDictionary<NSString *, id> *)selectedOptionals selectedSubcategory:(NSString *)selectedSubcategory utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:selectedCategory:selectedCondition:selectedDesigner:selectedItemType:selectedOptionals:selectedSubcategory:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/consignor_estimator_result_generated.json)
 * event="Consignor Estimator Result Generated"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/consignor_estimator_result_generated.json)
 * event="Consignor Estimator Result Generated"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/consignor_estimator_result_generated.json)
 * event="Consignor Estimator Result Generated"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *selectedCategory __attribute__((swift_name("selectedCategory")));
@property (readonly) NSString *selectedCondition __attribute__((swift_name("selectedCondition")));
@property (readonly) NSString *selectedDesigner __attribute__((swift_name("selectedDesigner")));
@property (readonly) NSString *selectedItemType __attribute__((swift_name("selectedItemType")));
@property (readonly) NSDictionary<NSString *, id> *selectedOptionals __attribute__((swift_name("selectedOptionals")));
@property (readonly) NSString *selectedSubcategory __attribute__((swift_name("selectedSubcategory")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/consignor_estimator_results.json)
 * event="Consignor Estimator Results"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerConsignorEstimatorResults")))
@interface SharedSellerConsignorEstimatorResults : SharedBase <SharedSeller>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category __attribute__((swift_name("init(category:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerConsignorEstimatorResults *)doCopyCategory:(NSString *)category utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/consignor_estimator_results.json)
 * event="Consignor Estimator Results"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/consignor_estimator_results.json)
 * event="Consignor Estimator Results"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/consignor_estimator_results.json)
 * event="Consignor Estimator Results"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/edit_details_selected.json)
 * event="Edit Details Selected"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerEditDetailsSelected")))
@interface SharedSellerEditDetailsSelected : SharedBase <SharedSeller>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page __attribute__((swift_name("init(category:page:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:page:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerEditDetailsSelected *)doCopyCategory:(NSString *)category page:(NSString *)page utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:page:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/edit_details_selected.json)
 * event="Edit Details Selected"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/edit_details_selected.json)
 * event="Edit Details Selected"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/edit_details_selected.json)
 * event="Edit Details Selected"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/feedback_submitted.json)
 * event="Feedback Submitted"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerFeedbackSubmitted")))
@interface SharedSellerFeedbackSubmitted : SharedBase <SharedSeller>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithFeatureName:(NSString *)featureName location:(NSString *)location __attribute__((swift_name("init(featureName:location:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithFeatureName:(NSString *)featureName location:(NSString *)location comment:(NSString * _Nullable)comment feedbackType:(NSString * _Nullable)feedbackType optionsSelected:(NSArray<NSString *> * _Nullable)optionsSelected utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(featureName:location:comment:feedbackType:optionsSelected:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerFeedbackSubmitted *)doCopyFeatureName:(NSString *)featureName location:(NSString *)location comment:(NSString * _Nullable)comment feedbackType:(NSString * _Nullable)feedbackType optionsSelected:(NSArray<NSString *> * _Nullable)optionsSelected utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(featureName:location:comment:feedbackType:optionsSelected:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/feedback_submitted.json)
 * event="Feedback Submitted"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/feedback_submitted.json)
 * event="Feedback Submitted"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/feedback_submitted.json)
 * event="Feedback Submitted"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable comment __attribute__((swift_name("comment")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *featureName __attribute__((swift_name("featureName")));
@property (readonly) NSString * _Nullable feedbackType __attribute__((swift_name("feedbackType")));
@property (readonly) NSString *location __attribute__((swift_name("location")));
@property (readonly) NSArray<NSString *> * _Nullable optionsSelected __attribute__((swift_name("optionsSelected")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/form_started.json)
 * event="Form Started"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerFormStarted")))
@interface SharedSellerFormStarted : SharedBase <SharedSeller>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page type:(NSString *)type __attribute__((swift_name("init(category:page:type:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page type:(NSString *)type utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:page:type:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerFormStarted *)doCopyCategory:(NSString *)category page:(NSString *)page type:(NSString *)type utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:page:type:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/form_started.json)
 * event="Form Started"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/form_started.json)
 * event="Form Started"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/form_started.json)
 * event="Form Started"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/form_submitted.json)
 * event="Form Submitted"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerFormSubmitted")))
@interface SharedSellerFormSubmitted : SharedBase <SharedSeller>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category email:(NSString *)email firstName:(NSString *)firstName lastName:(NSString *)lastName page:(NSString *)page phone:(NSString *)phone postalCode:(NSString *)postalCode type:(NSString *)type __attribute__((swift_name("init(category:email:firstName:lastName:page:phone:postalCode:type:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category email:(NSString *)email firstName:(NSString *)firstName lastName:(NSString *)lastName page:(NSString *)page phone:(NSString *)phone postalCode:(NSString *)postalCode type:(NSString *)type utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:email:firstName:lastName:page:phone:postalCode:type:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerFormSubmitted *)doCopyCategory:(NSString *)category email:(NSString *)email firstName:(NSString *)firstName lastName:(NSString *)lastName page:(NSString *)page phone:(NSString *)phone postalCode:(NSString *)postalCode type:(NSString *)type utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:email:firstName:lastName:page:phone:postalCode:type:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/form_submitted.json)
 * event="Form Submitted"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/form_submitted.json)
 * event="Form Submitted"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/form_submitted.json)
 * event="Form Submitted"
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
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/inquiry_created.json)
 * event="Inquiry Created"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerInquiryCreated")))
@interface SharedSellerInquiryCreated : SharedBase <SharedSeller>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithInquiryId:(NSString *)inquiryId repeatConsignor:(BOOL)repeatConsignor __attribute__((swift_name("init(inquiryId:repeatConsignor:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithInquiryId:(NSString *)inquiryId repeatConsignor:(BOOL)repeatConsignor feature:(NSString * _Nullable)feature firstName:(NSString * _Nullable)firstName inquirySlug:(NSString * _Nullable)inquirySlug lastName:(NSString * _Nullable)lastName leadEmail:(NSString * _Nullable)leadEmail leadSource:(NSString * _Nullable)leadSource leadSubSource:(NSString * _Nullable)leadSubSource loggedIn:(SharedBoolean * _Nullable)loggedIn method:(NSString * _Nullable)method path:(NSString * _Nullable)path utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource zipCode:(NSString * _Nullable)zipCode __attribute__((swift_name("init(inquiryId:repeatConsignor:feature:firstName:inquirySlug:lastName:leadEmail:leadSource:leadSubSource:loggedIn:method:path:utmCampaign:utmMedium:utmSource:zipCode:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerInquiryCreated *)doCopyInquiryId:(NSString *)inquiryId repeatConsignor:(BOOL)repeatConsignor feature:(NSString * _Nullable)feature firstName:(NSString * _Nullable)firstName inquirySlug:(NSString * _Nullable)inquirySlug lastName:(NSString * _Nullable)lastName leadEmail:(NSString * _Nullable)leadEmail leadSource:(NSString * _Nullable)leadSource leadSubSource:(NSString * _Nullable)leadSubSource loggedIn:(SharedBoolean * _Nullable)loggedIn method:(NSString * _Nullable)method path:(NSString * _Nullable)path utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource zipCode:(NSString * _Nullable)zipCode __attribute__((swift_name("doCopy(inquiryId:repeatConsignor:feature:firstName:inquirySlug:lastName:leadEmail:leadSource:leadSubSource:loggedIn:method:path:utmCampaign:utmMedium:utmSource:zipCode:)")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/inquiry_created.json)
 * event="Inquiry Created"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/inquiry_created.json)
 * event="Inquiry Created"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/inquiry_created.json)
 * event="Inquiry Created"
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
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@property (readonly) NSString * _Nullable zipCode __attribute__((swift_name("zipCode")));
@end


/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/lead_form_viewed.json)
 * event="Lead Form Viewed"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerLeadFormViewed")))
@interface SharedSellerLeadFormViewed : SharedBase <SharedSeller>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page __attribute__((swift_name("init(category:page:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:page:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerLeadFormViewed *)doCopyCategory:(NSString *)category page:(NSString *)page utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:page:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/lead_form_viewed.json)
 * event="Lead Form Viewed"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/lead_form_viewed.json)
 * event="Lead Form Viewed"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/lead_form_viewed.json)
 * event="Lead Form Viewed"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/new_search_selected.json)
 * event="New Search Selected"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerNewSearchSelected")))
@interface SharedSellerNewSearchSelected : SharedBase <SharedSeller>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page __attribute__((swift_name("init(category:page:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:page:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerNewSearchSelected *)doCopyCategory:(NSString *)category page:(NSString *)page utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:page:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/new_search_selected.json)
 * event="New Search Selected"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/new_search_selected.json)
 * event="New Search Selected"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/new_search_selected.json)
 * event="New Search Selected"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/server_error.json)
 * event="Server Error"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerServerError")))
@interface SharedSellerServerError : SharedBase <SharedSeller>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category error:(NSString *)error page:(NSString *)page type:(NSString *)type __attribute__((swift_name("init(category:error:page:type:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category error:(NSString *)error page:(NSString *)page type:(NSString *)type utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:error:page:type:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerServerError *)doCopyCategory:(NSString *)category error:(NSString *)error page:(NSString *)page type:(NSString *)type utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:error:page:type:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/server_error.json)
 * event="Server Error"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/server_error.json)
 * event="Server Error"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/server_error.json)
 * event="Server Error"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *error __attribute__((swift_name("error")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/view_selling_options_clicked.json)
 * event="View Selling Options Clicked"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerViewSellingOptionsClicked")))
@interface SharedSellerViewSellingOptionsClicked : SharedBase <SharedSeller>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page __attribute__((swift_name("init(category:page:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:page:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerViewSellingOptionsClicked *)doCopyCategory:(NSString *)category page:(NSString *)page utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:page:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/view_selling_options_clicked.json)
 * event="View Selling Options Clicked"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/view_selling_options_clicked.json)
 * event="View Selling Options Clicked"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (/Users/matheus.vasconcelosdesousa/trr-analytics/shared/schemas/seller/view_selling_options_clicked.json)
 * event="View Selling Options Clicked"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
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
