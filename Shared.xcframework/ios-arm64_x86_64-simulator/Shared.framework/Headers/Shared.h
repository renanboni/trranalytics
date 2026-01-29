#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedSellerConsignmentFunnelConsignmentOptionsViewedV1, SharedSellerConsignmentHomeV1, SharedSellerConsignorEstimatorCategorySelectedV1, SharedSellerConsignorEstimatorDetailsSubmittedV1, SharedSellerConsignorEstimatorItemDetailSelectedV1, SharedSellerConsignorEstimatorItemDetailsV1, SharedSellerConsignorEstimatorItemSavedV1, SharedSellerConsignorEstimatorLandingV1, SharedSellerConsignorEstimatorResultGeneratedV1, SharedSellerConsignorEstimatorResultsV1, SharedSellerEditDetailsSelectedV1, SharedSellerFeedbackDismissedV1, SharedSellerFeedbackSubmittedV1, SharedSellerFormStartedV1, SharedSellerFormSubmittedV1, SharedSellerInquiryCreatedV1, SharedSellerInquiryUpdatedV1, SharedSellerLeadFormViewedV1, SharedSellerNavPackingListItemRemovedV1, SharedSellerNewSearchSelectedV1, SharedSellerPopoverPackingListNewEstimateClickedV1, SharedSellerPopoverPackingListSellNowClickedV1, SharedSellerServerErrorV1, SharedSellerViewSellingOptionsClickedV1, SharedSeller_ConsignmentHomeV1, SharedSeller_ConsignorEstimatorCategorySelectedV1, SharedSeller_ConsignorEstimatorDetailsSubmittedV1, SharedSeller_ConsignorEstimatorItemDetailsV1, SharedSeller_ConsignorEstimatorItemSavedV1, SharedSeller_ConsignorEstimatorLandingV1, SharedSeller_ConsignorEstimatorResultGeneratedV1, SharedSeller_ConsignorEstimatorResultsV1, SharedSeller_EditDetailsSelectedV1, SharedSeller_FeedbackSubmittedV1, SharedSeller_FormStartedV1, SharedSeller_FormSubmittedV1, SharedSeller_InquiryCreatedV1, SharedSeller_LeadFormViewedV1, SharedSeller_NewSearchSelectedV1, SharedSeller_ServerErrorV1, SharedSeller_ServerErrorV2, SharedSeller_ViewSellingOptionsClickedV1;

@protocol SharedAnalyticsEvent, SharedPlatform, SharedSeller, SharedSellerConsignorEstimator, SharedSeller_;

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


/**
 * Generated from JSON Schema (seller/consignment_funnel_consignment_options_viewed/v1.json)
 * event="Consignment Funnel Consignment Options Viewed"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerConsignmentFunnelConsignmentOptionsViewedV1")))
@interface SharedSellerConsignmentFunnelConsignmentOptionsViewedV1 : SharedBase <SharedSeller>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category flow:(NSString *)flow funnelPage:(NSString *)funnelPage inquiryId:(NSString *)inquiryId inquirySlug:(NSString *)inquirySlug leadType:(NSString *)leadType methods:(NSArray<NSString *> *)methods page:(NSString *)page __attribute__((swift_name("init(category:flow:funnelPage:inquiryId:inquirySlug:leadType:methods:page:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category flow:(NSString *)flow funnelPage:(NSString *)funnelPage inquiryId:(NSString *)inquiryId inquirySlug:(NSString *)inquirySlug leadType:(NSString *)leadType methods:(NSArray<NSString *> *)methods page:(NSString *)page utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:flow:funnelPage:inquiryId:inquirySlug:leadType:methods:page:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerConsignmentFunnelConsignmentOptionsViewedV1 *)doCopyCategory:(NSString *)category flow:(NSString *)flow funnelPage:(NSString *)funnelPage inquiryId:(NSString *)inquiryId inquirySlug:(NSString *)inquirySlug leadType:(NSString *)leadType methods:(NSArray<NSString *> *)methods page:(NSString *)page utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:flow:funnelPage:inquiryId:inquirySlug:leadType:methods:page:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (seller/consignment_funnel_consignment_options_viewed/v1.json)
 * event="Consignment Funnel Consignment Options Viewed"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (seller/consignment_funnel_consignment_options_viewed/v1.json)
 * event="Consignment Funnel Consignment Options Viewed"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (seller/consignment_funnel_consignment_options_viewed/v1.json)
 * event="Consignment Funnel Consignment Options Viewed"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *flow __attribute__((swift_name("flow")));
@property (readonly) NSString *funnelPage __attribute__((swift_name("funnelPage")));
@property (readonly) NSString *inquiryId __attribute__((swift_name("inquiryId")));
@property (readonly) NSString *inquirySlug __attribute__((swift_name("inquirySlug")));
@property (readonly) NSString *leadType __attribute__((swift_name("leadType")));
@property (readonly) NSArray<NSString *> *methods __attribute__((swift_name("methods")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (seller/consignment_home/v1.json)
 * event="Consignment Home"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerConsignmentHomeV1")))
@interface SharedSellerConsignmentHomeV1 : SharedBase <SharedSeller>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithLoggedIn:(BOOL)loggedIn repeatConsignor:(BOOL)repeatConsignor __attribute__((swift_name("init(loggedIn:repeatConsignor:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithLoggedIn:(BOOL)loggedIn repeatConsignor:(BOOL)repeatConsignor utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(loggedIn:repeatConsignor:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerConsignmentHomeV1 *)doCopyLoggedIn:(BOOL)loggedIn repeatConsignor:(BOOL)repeatConsignor utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(loggedIn:repeatConsignor:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (seller/consignment_home/v1.json)
 * event="Consignment Home"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (seller/consignment_home/v1.json)
 * event="Consignment Home"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (seller/consignment_home/v1.json)
 * event="Consignment Home"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) BOOL loggedIn __attribute__((swift_name("loggedIn")));
@property (readonly) BOOL repeatConsignor __attribute__((swift_name("repeatConsignor")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end

__attribute__((swift_name("SellerConsignorEstimator")))
@protocol SharedSellerConsignorEstimator <SharedSeller>
@required
@end


/**
 * Generated from JSON Schema (seller/consignor_estimator/category_selected/v1.json)
 * event="Consignor Estimator Category Selected"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerConsignorEstimatorCategorySelectedV1")))
@interface SharedSellerConsignorEstimatorCategorySelectedV1 : SharedBase <SharedSellerConsignorEstimator>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category flow:(NSString *)flow page:(NSString *)page selectedCategory:(NSString *)selectedCategory __attribute__((swift_name("init(category:flow:page:selectedCategory:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category flow:(NSString *)flow page:(NSString *)page selectedCategory:(NSString *)selectedCategory utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:flow:page:selectedCategory:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerConsignorEstimatorCategorySelectedV1 *)doCopyCategory:(NSString *)category flow:(NSString *)flow page:(NSString *)page selectedCategory:(NSString *)selectedCategory utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:flow:page:selectedCategory:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (seller/consignor_estimator/category_selected/v1.json)
 * event="Consignor Estimator Category Selected"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (seller/consignor_estimator/category_selected/v1.json)
 * event="Consignor Estimator Category Selected"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (seller/consignor_estimator/category_selected/v1.json)
 * event="Consignor Estimator Category Selected"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *flow __attribute__((swift_name("flow")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString *selectedCategory __attribute__((swift_name("selectedCategory")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (seller/consignor_estimator/details_submitted/v1.json)
 * event="Consignor Estimator Details Submitted"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerConsignorEstimatorDetailsSubmittedV1")))
@interface SharedSellerConsignorEstimatorDetailsSubmittedV1 : SharedBase <SharedSellerConsignorEstimator>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category flow:(NSString *)flow page:(NSString *)page selectedCategory:(NSString *)selectedCategory selectedCondition:(NSString *)selectedCondition selectedDesigner:(NSString *)selectedDesigner selectedItemType:(NSString *)selectedItemType selectedSubcategory:(NSString *)selectedSubcategory __attribute__((swift_name("init(category:flow:page:selectedCategory:selectedCondition:selectedDesigner:selectedItemType:selectedSubcategory:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category flow:(NSString *)flow page:(NSString *)page selectedCategory:(NSString *)selectedCategory selectedCondition:(NSString *)selectedCondition selectedDesigner:(NSString *)selectedDesigner selectedItemType:(NSString *)selectedItemType selectedSubcategory:(NSString *)selectedSubcategory selectedOptionals:(NSDictionary<NSString *, id> * _Nullable)selectedOptionals utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:flow:page:selectedCategory:selectedCondition:selectedDesigner:selectedItemType:selectedSubcategory:selectedOptionals:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerConsignorEstimatorDetailsSubmittedV1 *)doCopyCategory:(NSString *)category flow:(NSString *)flow page:(NSString *)page selectedCategory:(NSString *)selectedCategory selectedCondition:(NSString *)selectedCondition selectedDesigner:(NSString *)selectedDesigner selectedItemType:(NSString *)selectedItemType selectedSubcategory:(NSString *)selectedSubcategory selectedOptionals:(NSDictionary<NSString *, id> * _Nullable)selectedOptionals utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:flow:page:selectedCategory:selectedCondition:selectedDesigner:selectedItemType:selectedSubcategory:selectedOptionals:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (seller/consignor_estimator/details_submitted/v1.json)
 * event="Consignor Estimator Details Submitted"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (seller/consignor_estimator/details_submitted/v1.json)
 * event="Consignor Estimator Details Submitted"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (seller/consignor_estimator/details_submitted/v1.json)
 * event="Consignor Estimator Details Submitted"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *flow __attribute__((swift_name("flow")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
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
 * Generated from JSON Schema (seller/consignor_estimator/item_detail_selected/v1.json)
 * event="Consignor Estimator Item Detail Selected"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerConsignorEstimatorItemDetailSelectedV1")))
@interface SharedSellerConsignorEstimatorItemDetailSelectedV1 : SharedBase <SharedSellerConsignorEstimator>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category flow:(NSString *)flow page:(NSString *)page __attribute__((swift_name("init(category:flow:page:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category flow:(NSString *)flow page:(NSString *)page selectedCondition:(NSString * _Nullable)selectedCondition selectedDesigner:(NSString * _Nullable)selectedDesigner selectedItemType:(NSString * _Nullable)selectedItemType selectedOptionals:(NSDictionary<NSString *, id> * _Nullable)selectedOptionals selectedSubcategory:(NSString * _Nullable)selectedSubcategory utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:flow:page:selectedCondition:selectedDesigner:selectedItemType:selectedOptionals:selectedSubcategory:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerConsignorEstimatorItemDetailSelectedV1 *)doCopyCategory:(NSString *)category flow:(NSString *)flow page:(NSString *)page selectedCondition:(NSString * _Nullable)selectedCondition selectedDesigner:(NSString * _Nullable)selectedDesigner selectedItemType:(NSString * _Nullable)selectedItemType selectedOptionals:(NSDictionary<NSString *, id> * _Nullable)selectedOptionals selectedSubcategory:(NSString * _Nullable)selectedSubcategory utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:flow:page:selectedCondition:selectedDesigner:selectedItemType:selectedOptionals:selectedSubcategory:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (seller/consignor_estimator/item_detail_selected/v1.json)
 * event="Consignor Estimator Item Detail Selected"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (seller/consignor_estimator/item_detail_selected/v1.json)
 * event="Consignor Estimator Item Detail Selected"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (seller/consignor_estimator/item_detail_selected/v1.json)
 * event="Consignor Estimator Item Detail Selected"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *flow __attribute__((swift_name("flow")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString * _Nullable selectedCondition __attribute__((swift_name("selectedCondition")));
@property (readonly) NSString * _Nullable selectedDesigner __attribute__((swift_name("selectedDesigner")));
@property (readonly) NSString * _Nullable selectedItemType __attribute__((swift_name("selectedItemType")));
@property (readonly) NSDictionary<NSString *, id> * _Nullable selectedOptionals __attribute__((swift_name("selectedOptionals")));
@property (readonly) NSString * _Nullable selectedSubcategory __attribute__((swift_name("selectedSubcategory")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (seller/consignor_estimator/item_details/v1.json)
 * event="Consignor Estimator Item Details"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerConsignorEstimatorItemDetailsV1")))
@interface SharedSellerConsignorEstimatorItemDetailsV1 : SharedBase <SharedSellerConsignorEstimator>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category name:(NSString *)name __attribute__((swift_name("init(category:name:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category name:(NSString *)name utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:name:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerConsignorEstimatorItemDetailsV1 *)doCopyCategory:(NSString *)category name:(NSString *)name utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:name:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (seller/consignor_estimator/item_details/v1.json)
 * event="Consignor Estimator Item Details"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (seller/consignor_estimator/item_details/v1.json)
 * event="Consignor Estimator Item Details"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (seller/consignor_estimator/item_details/v1.json)
 * event="Consignor Estimator Item Details"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (seller/consignor_estimator/item_saved/v1.json)
 * event="Consignor Estimator Item Saved"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerConsignorEstimatorItemSavedV1")))
@interface SharedSellerConsignorEstimatorItemSavedV1 : SharedBase <SharedSellerConsignorEstimator>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category estimateResultMax:(NSString *)estimateResultMax estimateResultMin:(NSString *)estimateResultMin flow:(NSString *)flow page:(NSString *)page selectedCategory:(NSString *)selectedCategory selectedCondition:(NSString *)selectedCondition selectedDesigner:(NSString *)selectedDesigner selectedItemType:(NSString *)selectedItemType selectedSubcategory:(NSString *)selectedSubcategory __attribute__((swift_name("init(category:estimateResultMax:estimateResultMin:flow:page:selectedCategory:selectedCondition:selectedDesigner:selectedItemType:selectedSubcategory:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category estimateResultMax:(NSString *)estimateResultMax estimateResultMin:(NSString *)estimateResultMin flow:(NSString *)flow page:(NSString *)page selectedCategory:(NSString *)selectedCategory selectedCondition:(NSString *)selectedCondition selectedDesigner:(NSString *)selectedDesigner selectedItemType:(NSString *)selectedItemType selectedSubcategory:(NSString *)selectedSubcategory selectedOptionals:(NSDictionary<NSString *, id> * _Nullable)selectedOptionals utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:estimateResultMax:estimateResultMin:flow:page:selectedCategory:selectedCondition:selectedDesigner:selectedItemType:selectedSubcategory:selectedOptionals:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerConsignorEstimatorItemSavedV1 *)doCopyCategory:(NSString *)category estimateResultMax:(NSString *)estimateResultMax estimateResultMin:(NSString *)estimateResultMin flow:(NSString *)flow page:(NSString *)page selectedCategory:(NSString *)selectedCategory selectedCondition:(NSString *)selectedCondition selectedDesigner:(NSString *)selectedDesigner selectedItemType:(NSString *)selectedItemType selectedSubcategory:(NSString *)selectedSubcategory selectedOptionals:(NSDictionary<NSString *, id> * _Nullable)selectedOptionals utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:estimateResultMax:estimateResultMin:flow:page:selectedCategory:selectedCondition:selectedDesigner:selectedItemType:selectedSubcategory:selectedOptionals:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (seller/consignor_estimator/item_saved/v1.json)
 * event="Consignor Estimator Item Saved"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (seller/consignor_estimator/item_saved/v1.json)
 * event="Consignor Estimator Item Saved"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (seller/consignor_estimator/item_saved/v1.json)
 * event="Consignor Estimator Item Saved"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *estimateResultMax __attribute__((swift_name("estimateResultMax")));
@property (readonly) NSString *estimateResultMin __attribute__((swift_name("estimateResultMin")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *flow __attribute__((swift_name("flow")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
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
 * Generated from JSON Schema (seller/consignor_estimator/landing/v1.json)
 * event="Consignor Estimator Landing"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerConsignorEstimatorLandingV1")))
@interface SharedSellerConsignorEstimatorLandingV1 : SharedBase <SharedSellerConsignorEstimator>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category name:(NSString *)name __attribute__((swift_name("init(category:name:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category name:(NSString *)name utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:name:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerConsignorEstimatorLandingV1 *)doCopyCategory:(NSString *)category name:(NSString *)name utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:name:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (seller/consignor_estimator/landing/v1.json)
 * event="Consignor Estimator Landing"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (seller/consignor_estimator/landing/v1.json)
 * event="Consignor Estimator Landing"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (seller/consignor_estimator/landing/v1.json)
 * event="Consignor Estimator Landing"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (seller/consignor_estimator/result_generated/v1.json)
 * event="Consignor Estimator Result Generated"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerConsignorEstimatorResultGeneratedV1")))
@interface SharedSellerConsignorEstimatorResultGeneratedV1 : SharedBase <SharedSellerConsignorEstimator>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category estimateResultMax:(NSString *)estimateResultMax estimateResultMin:(NSString *)estimateResultMin estimateResultPercentage:(NSString *)estimateResultPercentage flow:(NSString *)flow page:(NSString *)page selectedCategory:(NSString *)selectedCategory selectedCondition:(NSString *)selectedCondition selectedDesigner:(NSString *)selectedDesigner selectedItemType:(NSString *)selectedItemType selectedSubcategory:(NSString *)selectedSubcategory __attribute__((swift_name("init(category:estimateResultMax:estimateResultMin:estimateResultPercentage:flow:page:selectedCategory:selectedCondition:selectedDesigner:selectedItemType:selectedSubcategory:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category estimateResultMax:(NSString *)estimateResultMax estimateResultMin:(NSString *)estimateResultMin estimateResultPercentage:(NSString *)estimateResultPercentage flow:(NSString *)flow page:(NSString *)page selectedCategory:(NSString *)selectedCategory selectedCondition:(NSString *)selectedCondition selectedDesigner:(NSString *)selectedDesigner selectedItemType:(NSString *)selectedItemType selectedSubcategory:(NSString *)selectedSubcategory selectedOptionals:(NSDictionary<NSString *, id> * _Nullable)selectedOptionals utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:estimateResultMax:estimateResultMin:estimateResultPercentage:flow:page:selectedCategory:selectedCondition:selectedDesigner:selectedItemType:selectedSubcategory:selectedOptionals:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerConsignorEstimatorResultGeneratedV1 *)doCopyCategory:(NSString *)category estimateResultMax:(NSString *)estimateResultMax estimateResultMin:(NSString *)estimateResultMin estimateResultPercentage:(NSString *)estimateResultPercentage flow:(NSString *)flow page:(NSString *)page selectedCategory:(NSString *)selectedCategory selectedCondition:(NSString *)selectedCondition selectedDesigner:(NSString *)selectedDesigner selectedItemType:(NSString *)selectedItemType selectedSubcategory:(NSString *)selectedSubcategory selectedOptionals:(NSDictionary<NSString *, id> * _Nullable)selectedOptionals utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:estimateResultMax:estimateResultMin:estimateResultPercentage:flow:page:selectedCategory:selectedCondition:selectedDesigner:selectedItemType:selectedSubcategory:selectedOptionals:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (seller/consignor_estimator/result_generated/v1.json)
 * event="Consignor Estimator Result Generated"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (seller/consignor_estimator/result_generated/v1.json)
 * event="Consignor Estimator Result Generated"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (seller/consignor_estimator/result_generated/v1.json)
 * event="Consignor Estimator Result Generated"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *estimateResultMax __attribute__((swift_name("estimateResultMax")));
@property (readonly) NSString *estimateResultMin __attribute__((swift_name("estimateResultMin")));
@property (readonly) NSString *estimateResultPercentage __attribute__((swift_name("estimateResultPercentage")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *flow __attribute__((swift_name("flow")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
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
 * Generated from JSON Schema (seller/consignor_estimator/results/v1.json)
 * event="Consignor Estimator Results"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerConsignorEstimatorResultsV1")))
@interface SharedSellerConsignorEstimatorResultsV1 : SharedBase <SharedSellerConsignorEstimator>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category name:(NSString *)name __attribute__((swift_name("init(category:name:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category name:(NSString *)name utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:name:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerConsignorEstimatorResultsV1 *)doCopyCategory:(NSString *)category name:(NSString *)name utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:name:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (seller/consignor_estimator/results/v1.json)
 * event="Consignor Estimator Results"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (seller/consignor_estimator/results/v1.json)
 * event="Consignor Estimator Results"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (seller/consignor_estimator/results/v1.json)
 * event="Consignor Estimator Results"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (seller/edit_details_selected/v1.json)
 * event="Edit Details Selected"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerEditDetailsSelectedV1")))
@interface SharedSellerEditDetailsSelectedV1 : SharedBase <SharedSeller>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category estimateResultMax:(NSString *)estimateResultMax estimateResultMin:(NSString *)estimateResultMin flow:(NSString *)flow page:(NSString *)page selectedCategory:(NSString *)selectedCategory selectedCondition:(NSString *)selectedCondition selectedDesigner:(NSString *)selectedDesigner selectedItemType:(NSString *)selectedItemType selectedOptionals:(NSDictionary<NSString *, id> *)selectedOptionals selectedSubcategory:(NSString *)selectedSubcategory __attribute__((swift_name("init(category:estimateResultMax:estimateResultMin:flow:page:selectedCategory:selectedCondition:selectedDesigner:selectedItemType:selectedOptionals:selectedSubcategory:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category estimateResultMax:(NSString *)estimateResultMax estimateResultMin:(NSString *)estimateResultMin flow:(NSString *)flow page:(NSString *)page selectedCategory:(NSString *)selectedCategory selectedCondition:(NSString *)selectedCondition selectedDesigner:(NSString *)selectedDesigner selectedItemType:(NSString *)selectedItemType selectedOptionals:(NSDictionary<NSString *, id> *)selectedOptionals selectedSubcategory:(NSString *)selectedSubcategory utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:estimateResultMax:estimateResultMin:flow:page:selectedCategory:selectedCondition:selectedDesigner:selectedItemType:selectedOptionals:selectedSubcategory:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerEditDetailsSelectedV1 *)doCopyCategory:(NSString *)category estimateResultMax:(NSString *)estimateResultMax estimateResultMin:(NSString *)estimateResultMin flow:(NSString *)flow page:(NSString *)page selectedCategory:(NSString *)selectedCategory selectedCondition:(NSString *)selectedCondition selectedDesigner:(NSString *)selectedDesigner selectedItemType:(NSString *)selectedItemType selectedOptionals:(NSDictionary<NSString *, id> *)selectedOptionals selectedSubcategory:(NSString *)selectedSubcategory utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:estimateResultMax:estimateResultMin:flow:page:selectedCategory:selectedCondition:selectedDesigner:selectedItemType:selectedOptionals:selectedSubcategory:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (seller/edit_details_selected/v1.json)
 * event="Edit Details Selected"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (seller/edit_details_selected/v1.json)
 * event="Edit Details Selected"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (seller/edit_details_selected/v1.json)
 * event="Edit Details Selected"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *estimateResultMax __attribute__((swift_name("estimateResultMax")));
@property (readonly) NSString *estimateResultMin __attribute__((swift_name("estimateResultMin")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *flow __attribute__((swift_name("flow")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
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
 * Generated from JSON Schema (seller/feedback_dismissed/v1.json)
 * event="Feedback Dismissed"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerFeedbackDismissedV1")))
@interface SharedSellerFeedbackDismissedV1 : SharedBase <SharedSeller>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category featureName:(NSString *)featureName flow:(NSString *)flow location:(NSString *)location page:(NSString *)page __attribute__((swift_name("init(category:featureName:flow:location:page:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category featureName:(NSString *)featureName flow:(NSString *)flow location:(NSString *)location page:(NSString *)page utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:featureName:flow:location:page:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerFeedbackDismissedV1 *)doCopyCategory:(NSString *)category featureName:(NSString *)featureName flow:(NSString *)flow location:(NSString *)location page:(NSString *)page utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:featureName:flow:location:page:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (seller/feedback_dismissed/v1.json)
 * event="Feedback Dismissed"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (seller/feedback_dismissed/v1.json)
 * event="Feedback Dismissed"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (seller/feedback_dismissed/v1.json)
 * event="Feedback Dismissed"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *featureName __attribute__((swift_name("featureName")));
@property (readonly) NSString *flow __attribute__((swift_name("flow")));
@property (readonly) NSString *location __attribute__((swift_name("location")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (seller/feedback_submitted/v1.json)
 * event="Feedback Submitted"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerFeedbackSubmittedV1")))
@interface SharedSellerFeedbackSubmittedV1 : SharedBase <SharedSeller>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithFeatureName:(NSString *)featureName location:(NSString *)location __attribute__((swift_name("init(featureName:location:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithFeatureName:(NSString *)featureName location:(NSString *)location category:(NSString * _Nullable)category comment:(NSString * _Nullable)comment feedbackType:(NSString * _Nullable)feedbackType flow:(NSString * _Nullable)flow optionsSelected:(NSArray<NSString *> * _Nullable)optionsSelected page:(NSString * _Nullable)page utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(featureName:location:category:comment:feedbackType:flow:optionsSelected:page:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerFeedbackSubmittedV1 *)doCopyFeatureName:(NSString *)featureName location:(NSString *)location category:(NSString * _Nullable)category comment:(NSString * _Nullable)comment feedbackType:(NSString * _Nullable)feedbackType flow:(NSString * _Nullable)flow optionsSelected:(NSArray<NSString *> * _Nullable)optionsSelected page:(NSString * _Nullable)page utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(featureName:location:category:comment:feedbackType:flow:optionsSelected:page:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (seller/feedback_submitted/v1.json)
 * event="Feedback Submitted"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (seller/feedback_submitted/v1.json)
 * event="Feedback Submitted"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (seller/feedback_submitted/v1.json)
 * event="Feedback Submitted"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable category __attribute__((swift_name("category")));
@property (readonly) NSString * _Nullable comment __attribute__((swift_name("comment")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *featureName __attribute__((swift_name("featureName")));
@property (readonly) NSString * _Nullable feedbackType __attribute__((swift_name("feedbackType")));
@property (readonly) NSString * _Nullable flow __attribute__((swift_name("flow")));
@property (readonly) NSString *location __attribute__((swift_name("location")));
@property (readonly) NSArray<NSString *> * _Nullable optionsSelected __attribute__((swift_name("optionsSelected")));
@property (readonly) NSString * _Nullable page __attribute__((swift_name("page")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (seller/form_started/v1.json)
 * event="Form Started"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerFormStartedV1")))
@interface SharedSellerFormStartedV1 : SharedBase <SharedSeller>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page type:(NSString *)type __attribute__((swift_name("init(category:page:type:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page type:(NSString *)type utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:page:type:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerFormStartedV1 *)doCopyCategory:(NSString *)category page:(NSString *)page type:(NSString *)type utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:page:type:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (seller/form_started/v1.json)
 * event="Form Started"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (seller/form_started/v1.json)
 * event="Form Started"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (seller/form_started/v1.json)
 * event="Form Started"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (seller/form_submitted/v1.json)
 * event="Form Submitted"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerFormSubmittedV1")))
@interface SharedSellerFormSubmittedV1 : SharedBase <SharedSeller>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category email:(NSString *)email firstName:(NSString *)firstName lastName:(NSString *)lastName page:(NSString *)page phone:(NSString *)phone postalCode:(NSString *)postalCode type:(NSString *)type __attribute__((swift_name("init(category:email:firstName:lastName:page:phone:postalCode:type:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category email:(NSString *)email firstName:(NSString *)firstName lastName:(NSString *)lastName page:(NSString *)page phone:(NSString *)phone postalCode:(NSString *)postalCode type:(NSString *)type utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:email:firstName:lastName:page:phone:postalCode:type:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerFormSubmittedV1 *)doCopyCategory:(NSString *)category email:(NSString *)email firstName:(NSString *)firstName lastName:(NSString *)lastName page:(NSString *)page phone:(NSString *)phone postalCode:(NSString *)postalCode type:(NSString *)type utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:email:firstName:lastName:page:phone:postalCode:type:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (seller/form_submitted/v1.json)
 * event="Form Submitted"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (seller/form_submitted/v1.json)
 * event="Form Submitted"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (seller/form_submitted/v1.json)
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
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (seller/inquiry_created/v1.json)
 * event="Inquiry Created"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerInquiryCreatedV1")))
@interface SharedSellerInquiryCreatedV1 : SharedBase <SharedSeller>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithInquiryId:(NSString *)inquiryId repeatConsignor:(BOOL)repeatConsignor __attribute__((swift_name("init(inquiryId:repeatConsignor:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithInquiryId:(NSString *)inquiryId repeatConsignor:(BOOL)repeatConsignor category:(NSString * _Nullable)category feature:(NSString * _Nullable)feature firstName:(NSString * _Nullable)firstName flow:(NSString * _Nullable)flow inquirySlug:(NSString * _Nullable)inquirySlug lastName:(NSString * _Nullable)lastName leadEmail:(NSString * _Nullable)leadEmail leadSource:(NSString * _Nullable)leadSource leadSubSource:(NSString * _Nullable)leadSubSource loggedIn:(SharedBoolean * _Nullable)loggedIn method:(NSString * _Nullable)method page:(NSString * _Nullable)page path:(NSString * _Nullable)path utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource zipCode:(NSString * _Nullable)zipCode __attribute__((swift_name("init(inquiryId:repeatConsignor:category:feature:firstName:flow:inquirySlug:lastName:leadEmail:leadSource:leadSubSource:loggedIn:method:page:path:utmCampaign:utmMedium:utmSource:zipCode:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerInquiryCreatedV1 *)doCopyInquiryId:(NSString *)inquiryId repeatConsignor:(BOOL)repeatConsignor category:(NSString * _Nullable)category feature:(NSString * _Nullable)feature firstName:(NSString * _Nullable)firstName flow:(NSString * _Nullable)flow inquirySlug:(NSString * _Nullable)inquirySlug lastName:(NSString * _Nullable)lastName leadEmail:(NSString * _Nullable)leadEmail leadSource:(NSString * _Nullable)leadSource leadSubSource:(NSString * _Nullable)leadSubSource loggedIn:(SharedBoolean * _Nullable)loggedIn method:(NSString * _Nullable)method page:(NSString * _Nullable)page path:(NSString * _Nullable)path utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource zipCode:(NSString * _Nullable)zipCode __attribute__((swift_name("doCopy(inquiryId:repeatConsignor:category:feature:firstName:flow:inquirySlug:lastName:leadEmail:leadSource:leadSubSource:loggedIn:method:page:path:utmCampaign:utmMedium:utmSource:zipCode:)")));

/**
 * Generated from JSON Schema (seller/inquiry_created/v1.json)
 * event="Inquiry Created"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (seller/inquiry_created/v1.json)
 * event="Inquiry Created"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (seller/inquiry_created/v1.json)
 * event="Inquiry Created"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable feature __attribute__((swift_name("feature")));
@property (readonly) NSString * _Nullable firstName __attribute__((swift_name("firstName")));
@property (readonly) NSString * _Nullable flow __attribute__((swift_name("flow")));
@property (readonly) NSString *inquiryId __attribute__((swift_name("inquiryId")));
@property (readonly) NSString * _Nullable inquirySlug __attribute__((swift_name("inquirySlug")));
@property (readonly) NSString * _Nullable lastName __attribute__((swift_name("lastName")));
@property (readonly) NSString * _Nullable leadEmail __attribute__((swift_name("leadEmail")));
@property (readonly) NSString * _Nullable leadSource __attribute__((swift_name("leadSource")));
@property (readonly) NSString * _Nullable leadSubSource __attribute__((swift_name("leadSubSource")));
@property (readonly) SharedBoolean * _Nullable loggedIn __attribute__((swift_name("loggedIn")));
@property (readonly) NSString * _Nullable method __attribute__((swift_name("method")));
@property (readonly) NSString * _Nullable page __attribute__((swift_name("page")));
@property (readonly) NSString * _Nullable path __attribute__((swift_name("path")));
@property (readonly) BOOL repeatConsignor __attribute__((swift_name("repeatConsignor")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@property (readonly) NSString * _Nullable zipCode __attribute__((swift_name("zipCode")));
@end


/**
 * Generated from JSON Schema (seller/inquiry_updated/v1.json)
 * event="Inquiry Updated"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerInquiryUpdatedV1")))
@interface SharedSellerInquiryUpdatedV1 : SharedBase <SharedSeller>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category flow:(NSString *)flow inquirySlug:(NSString *)inquirySlug method:(NSString *)method page:(NSString *)page __attribute__((swift_name("init(category:flow:inquirySlug:method:page:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category flow:(NSString *)flow inquirySlug:(NSString *)inquirySlug method:(NSString *)method page:(NSString *)page utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:flow:inquirySlug:method:page:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerInquiryUpdatedV1 *)doCopyCategory:(NSString *)category flow:(NSString *)flow inquirySlug:(NSString *)inquirySlug method:(NSString *)method page:(NSString *)page utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:flow:inquirySlug:method:page:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (seller/inquiry_updated/v1.json)
 * event="Inquiry Updated"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (seller/inquiry_updated/v1.json)
 * event="Inquiry Updated"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (seller/inquiry_updated/v1.json)
 * event="Inquiry Updated"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *flow __attribute__((swift_name("flow")));
@property (readonly) NSString *inquirySlug __attribute__((swift_name("inquirySlug")));
@property (readonly) NSString *method __attribute__((swift_name("method")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (seller/lead_form_viewed/v1.json)
 * event="Lead Form Viewed"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerLeadFormViewedV1")))
@interface SharedSellerLeadFormViewedV1 : SharedBase <SharedSeller>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page __attribute__((swift_name("init(category:page:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:page:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerLeadFormViewedV1 *)doCopyCategory:(NSString *)category page:(NSString *)page utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:page:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (seller/lead_form_viewed/v1.json)
 * event="Lead Form Viewed"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (seller/lead_form_viewed/v1.json)
 * event="Lead Form Viewed"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (seller/lead_form_viewed/v1.json)
 * event="Lead Form Viewed"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (seller/nav_packing_list_item_removed/v1.json)
 * event="Nav Packing List Item Removed"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerNavPackingListItemRemovedV1")))
@interface SharedSellerNavPackingListItemRemovedV1 : SharedBase <SharedSeller>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category designer:(NSString *)designer flow:(NSString *)flow id:(NSString *)id page:(NSString *)page taxon:(NSString *)taxon __attribute__((swift_name("init(category:designer:flow:id:page:taxon:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category designer:(NSString *)designer flow:(NSString *)flow id:(NSString *)id page:(NSString *)page taxon:(NSString *)taxon utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:designer:flow:id:page:taxon:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerNavPackingListItemRemovedV1 *)doCopyCategory:(NSString *)category designer:(NSString *)designer flow:(NSString *)flow id:(NSString *)id page:(NSString *)page taxon:(NSString *)taxon utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:designer:flow:id:page:taxon:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (seller/nav_packing_list_item_removed/v1.json)
 * event="Nav Packing List Item Removed"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (seller/nav_packing_list_item_removed/v1.json)
 * event="Nav Packing List Item Removed"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (seller/nav_packing_list_item_removed/v1.json)
 * event="Nav Packing List Item Removed"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *designer __attribute__((swift_name("designer")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *flow __attribute__((swift_name("flow")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString *taxon __attribute__((swift_name("taxon")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (seller/new_search_selected/v1.json)
 * event="New Search Selected"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerNewSearchSelectedV1")))
@interface SharedSellerNewSearchSelectedV1 : SharedBase <SharedSeller>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page __attribute__((swift_name("init(category:page:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:page:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerNewSearchSelectedV1 *)doCopyCategory:(NSString *)category page:(NSString *)page utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:page:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (seller/new_search_selected/v1.json)
 * event="New Search Selected"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (seller/new_search_selected/v1.json)
 * event="New Search Selected"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (seller/new_search_selected/v1.json)
 * event="New Search Selected"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (seller/popover_packing_list_new_estimate_clicked/v1.json)
 * event="Popover Packing List New Estimate Clicked"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerPopoverPackingListNewEstimateClickedV1")))
@interface SharedSellerPopoverPackingListNewEstimateClickedV1 : SharedBase <SharedSeller>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category flow:(NSString *)flow page:(NSString *)page __attribute__((swift_name("init(category:flow:page:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category flow:(NSString *)flow page:(NSString *)page utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:flow:page:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerPopoverPackingListNewEstimateClickedV1 *)doCopyCategory:(NSString *)category flow:(NSString *)flow page:(NSString *)page utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:flow:page:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (seller/popover_packing_list_new_estimate_clicked/v1.json)
 * event="Popover Packing List New Estimate Clicked"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (seller/popover_packing_list_new_estimate_clicked/v1.json)
 * event="Popover Packing List New Estimate Clicked"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (seller/popover_packing_list_new_estimate_clicked/v1.json)
 * event="Popover Packing List New Estimate Clicked"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *flow __attribute__((swift_name("flow")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (seller/popover_packing_list_sell_now_clicked/v1.json)
 * event="Popover Packing List Sell Now Clicked"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerPopoverPackingListSellNowClickedV1")))
@interface SharedSellerPopoverPackingListSellNowClickedV1 : SharedBase <SharedSeller>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category flow:(NSString *)flow page:(NSString *)page __attribute__((swift_name("init(category:flow:page:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category flow:(NSString *)flow page:(NSString *)page utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:flow:page:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerPopoverPackingListSellNowClickedV1 *)doCopyCategory:(NSString *)category flow:(NSString *)flow page:(NSString *)page utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:flow:page:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (seller/popover_packing_list_sell_now_clicked/v1.json)
 * event="Popover Packing List Sell Now Clicked"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (seller/popover_packing_list_sell_now_clicked/v1.json)
 * event="Popover Packing List Sell Now Clicked"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (seller/popover_packing_list_sell_now_clicked/v1.json)
 * event="Popover Packing List Sell Now Clicked"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *flow __attribute__((swift_name("flow")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (seller/server_error/v1.json)
 * event="Server Error"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerServerErrorV1")))
@interface SharedSellerServerErrorV1 : SharedBase <SharedSeller>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category error:(NSString *)error page:(NSString *)page type:(NSString *)type __attribute__((swift_name("init(category:error:page:type:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category error:(NSString *)error page:(NSString *)page type:(NSString *)type utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:error:page:type:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerServerErrorV1 *)doCopyCategory:(NSString *)category error:(NSString *)error page:(NSString *)page type:(NSString *)type utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:error:page:type:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (seller/server_error/v1.json)
 * event="Server Error"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (seller/server_error/v1.json)
 * event="Server Error"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (seller/server_error/v1.json)
 * event="Server Error"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *error __attribute__((swift_name("error")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (seller/view_selling_options_clicked/v1.json)
 * event="View Selling Options Clicked"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellerViewSellingOptionsClickedV1")))
@interface SharedSellerViewSellingOptionsClickedV1 : SharedBase <SharedSeller>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category flow:(NSString *)flow page:(NSString *)page __attribute__((swift_name("init(category:flow:page:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category flow:(NSString *)flow page:(NSString *)page utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:flow:page:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSellerViewSellingOptionsClickedV1 *)doCopyCategory:(NSString *)category flow:(NSString *)flow page:(NSString *)page utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:flow:page:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (seller/view_selling_options_clicked/v1.json)
 * event="View Selling Options Clicked"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (seller/view_selling_options_clicked/v1.json)
 * event="View Selling Options Clicked"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (seller/view_selling_options_clicked/v1.json)
 * event="View Selling Options Clicked"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *flow __attribute__((swift_name("flow")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
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


/**
 * Generated analytics events for family: Seller
 */
__attribute__((swift_name("Seller_")))
@protocol SharedSeller_ <SharedAnalyticsEvent>
@required
@end


/**
 * Generated from JSON Schema (shared/schemas/seller/consignment_home/v1.json)
 * event="Consignment Home"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Seller_ConsignmentHomeV1")))
@interface SharedSeller_ConsignmentHomeV1 : SharedBase <SharedSeller_>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithLoggedIn:(BOOL)loggedIn repeatConsignor:(BOOL)repeatConsignor __attribute__((swift_name("init(loggedIn:repeatConsignor:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithLoggedIn:(BOOL)loggedIn repeatConsignor:(BOOL)repeatConsignor utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(loggedIn:repeatConsignor:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSeller_ConsignmentHomeV1 *)doCopyLoggedIn:(BOOL)loggedIn repeatConsignor:(BOOL)repeatConsignor utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(loggedIn:repeatConsignor:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/consignment_home/v1.json)
 * event="Consignment Home"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/consignment_home/v1.json)
 * event="Consignment Home"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (shared/schemas/seller/consignment_home/v1.json)
 * event="Consignment Home"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) BOOL loggedIn __attribute__((swift_name("loggedIn")));
@property (readonly) BOOL repeatConsignor __attribute__((swift_name("repeatConsignor")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (shared/schemas/seller/consignor_estimator_category_selected/v1.json)
 * event="Consignor Estimator Category Selected"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Seller_ConsignorEstimatorCategorySelectedV1")))
@interface SharedSeller_ConsignorEstimatorCategorySelectedV1 : SharedBase <SharedSeller_>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page selectedCategory:(NSString *)selectedCategory __attribute__((swift_name("init(category:page:selectedCategory:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page selectedCategory:(NSString *)selectedCategory utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:page:selectedCategory:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSeller_ConsignorEstimatorCategorySelectedV1 *)doCopyCategory:(NSString *)category page:(NSString *)page selectedCategory:(NSString *)selectedCategory utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:page:selectedCategory:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/consignor_estimator_category_selected/v1.json)
 * event="Consignor Estimator Category Selected"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/consignor_estimator_category_selected/v1.json)
 * event="Consignor Estimator Category Selected"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (shared/schemas/seller/consignor_estimator_category_selected/v1.json)
 * event="Consignor Estimator Category Selected"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString *selectedCategory __attribute__((swift_name("selectedCategory")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (shared/schemas/seller/consignor_estimator_details_submitted/v1.json)
 * event="Consignor Estimator Details Submitted"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Seller_ConsignorEstimatorDetailsSubmittedV1")))
@interface SharedSeller_ConsignorEstimatorDetailsSubmittedV1 : SharedBase <SharedSeller_>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page selectedCategory:(NSString *)selectedCategory selectedCondition:(NSString *)selectedCondition selectedDesigner:(NSString *)selectedDesigner selectedItemType:(NSString *)selectedItemType selectedSubcategory:(NSString *)selectedSubcategory __attribute__((swift_name("init(category:page:selectedCategory:selectedCondition:selectedDesigner:selectedItemType:selectedSubcategory:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page selectedCategory:(NSString *)selectedCategory selectedCondition:(NSString *)selectedCondition selectedDesigner:(NSString *)selectedDesigner selectedItemType:(NSString *)selectedItemType selectedSubcategory:(NSString *)selectedSubcategory selectedOptionals:(NSDictionary<NSString *, id> * _Nullable)selectedOptionals utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:page:selectedCategory:selectedCondition:selectedDesigner:selectedItemType:selectedSubcategory:selectedOptionals:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSeller_ConsignorEstimatorDetailsSubmittedV1 *)doCopyCategory:(NSString *)category page:(NSString *)page selectedCategory:(NSString *)selectedCategory selectedCondition:(NSString *)selectedCondition selectedDesigner:(NSString *)selectedDesigner selectedItemType:(NSString *)selectedItemType selectedSubcategory:(NSString *)selectedSubcategory selectedOptionals:(NSDictionary<NSString *, id> * _Nullable)selectedOptionals utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:page:selectedCategory:selectedCondition:selectedDesigner:selectedItemType:selectedSubcategory:selectedOptionals:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/consignor_estimator_details_submitted/v1.json)
 * event="Consignor Estimator Details Submitted"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/consignor_estimator_details_submitted/v1.json)
 * event="Consignor Estimator Details Submitted"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (shared/schemas/seller/consignor_estimator_details_submitted/v1.json)
 * event="Consignor Estimator Details Submitted"
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
@property (readonly) NSDictionary<NSString *, id> * _Nullable selectedOptionals __attribute__((swift_name("selectedOptionals")));
@property (readonly) NSString *selectedSubcategory __attribute__((swift_name("selectedSubcategory")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (shared/schemas/seller/consignor_estimator_item_details/v1.json)
 * event="Consignor Estimator Item Details"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Seller_ConsignorEstimatorItemDetailsV1")))
@interface SharedSeller_ConsignorEstimatorItemDetailsV1 : SharedBase <SharedSeller_>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category __attribute__((swift_name("init(category:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSeller_ConsignorEstimatorItemDetailsV1 *)doCopyCategory:(NSString *)category utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/consignor_estimator_item_details/v1.json)
 * event="Consignor Estimator Item Details"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/consignor_estimator_item_details/v1.json)
 * event="Consignor Estimator Item Details"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (shared/schemas/seller/consignor_estimator_item_details/v1.json)
 * event="Consignor Estimator Item Details"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (shared/schemas/seller/consignor_estimator_item_saved/v1.json)
 * event="Consignor Estimator Item Saved"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Seller_ConsignorEstimatorItemSavedV1")))
@interface SharedSeller_ConsignorEstimatorItemSavedV1 : SharedBase <SharedSeller_>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category estimateResultMax:(NSString *)estimateResultMax estimateResultMin:(NSString *)estimateResultMin selectedCategory:(NSString *)selectedCategory selectedCondition:(NSString *)selectedCondition selectedDesigner:(NSString *)selectedDesigner selectedItemType:(NSString *)selectedItemType selectedSubcategory:(NSString *)selectedSubcategory __attribute__((swift_name("init(category:estimateResultMax:estimateResultMin:selectedCategory:selectedCondition:selectedDesigner:selectedItemType:selectedSubcategory:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category estimateResultMax:(NSString *)estimateResultMax estimateResultMin:(NSString *)estimateResultMin selectedCategory:(NSString *)selectedCategory selectedCondition:(NSString *)selectedCondition selectedDesigner:(NSString *)selectedDesigner selectedItemType:(NSString *)selectedItemType selectedSubcategory:(NSString *)selectedSubcategory selectedOptionals:(NSDictionary<NSString *, id> * _Nullable)selectedOptionals utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:estimateResultMax:estimateResultMin:selectedCategory:selectedCondition:selectedDesigner:selectedItemType:selectedSubcategory:selectedOptionals:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSeller_ConsignorEstimatorItemSavedV1 *)doCopyCategory:(NSString *)category estimateResultMax:(NSString *)estimateResultMax estimateResultMin:(NSString *)estimateResultMin selectedCategory:(NSString *)selectedCategory selectedCondition:(NSString *)selectedCondition selectedDesigner:(NSString *)selectedDesigner selectedItemType:(NSString *)selectedItemType selectedSubcategory:(NSString *)selectedSubcategory selectedOptionals:(NSDictionary<NSString *, id> * _Nullable)selectedOptionals utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:estimateResultMax:estimateResultMin:selectedCategory:selectedCondition:selectedDesigner:selectedItemType:selectedSubcategory:selectedOptionals:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/consignor_estimator_item_saved/v1.json)
 * event="Consignor Estimator Item Saved"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/consignor_estimator_item_saved/v1.json)
 * event="Consignor Estimator Item Saved"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (shared/schemas/seller/consignor_estimator_item_saved/v1.json)
 * event="Consignor Estimator Item Saved"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *estimateResultMax __attribute__((swift_name("estimateResultMax")));
@property (readonly) NSString *estimateResultMin __attribute__((swift_name("estimateResultMin")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
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
 * Generated from JSON Schema (shared/schemas/seller/consignor_estimator_landing/v1.json)
 * event="Consignor Estimator Landing"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Seller_ConsignorEstimatorLandingV1")))
@interface SharedSeller_ConsignorEstimatorLandingV1 : SharedBase <SharedSeller_>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category __attribute__((swift_name("init(category:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSeller_ConsignorEstimatorLandingV1 *)doCopyCategory:(NSString *)category utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/consignor_estimator_landing/v1.json)
 * event="Consignor Estimator Landing"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/consignor_estimator_landing/v1.json)
 * event="Consignor Estimator Landing"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (shared/schemas/seller/consignor_estimator_landing/v1.json)
 * event="Consignor Estimator Landing"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (shared/schemas/seller/consignor_estimator_result_generated/v1.json)
 * event="Consignor Estimator Result Generated"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Seller_ConsignorEstimatorResultGeneratedV1")))
@interface SharedSeller_ConsignorEstimatorResultGeneratedV1 : SharedBase <SharedSeller_>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category selectedCategory:(NSString *)selectedCategory selectedCondition:(NSString *)selectedCondition selectedDesigner:(NSString *)selectedDesigner selectedItemType:(NSString *)selectedItemType selectedOptionals:(NSDictionary<NSString *, id> *)selectedOptionals selectedSubcategory:(NSString *)selectedSubcategory __attribute__((swift_name("init(category:selectedCategory:selectedCondition:selectedDesigner:selectedItemType:selectedOptionals:selectedSubcategory:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category selectedCategory:(NSString *)selectedCategory selectedCondition:(NSString *)selectedCondition selectedDesigner:(NSString *)selectedDesigner selectedItemType:(NSString *)selectedItemType selectedOptionals:(NSDictionary<NSString *, id> *)selectedOptionals selectedSubcategory:(NSString *)selectedSubcategory utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:selectedCategory:selectedCondition:selectedDesigner:selectedItemType:selectedOptionals:selectedSubcategory:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSeller_ConsignorEstimatorResultGeneratedV1 *)doCopyCategory:(NSString *)category selectedCategory:(NSString *)selectedCategory selectedCondition:(NSString *)selectedCondition selectedDesigner:(NSString *)selectedDesigner selectedItemType:(NSString *)selectedItemType selectedOptionals:(NSDictionary<NSString *, id> *)selectedOptionals selectedSubcategory:(NSString *)selectedSubcategory utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:selectedCategory:selectedCondition:selectedDesigner:selectedItemType:selectedOptionals:selectedSubcategory:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/consignor_estimator_result_generated/v1.json)
 * event="Consignor Estimator Result Generated"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/consignor_estimator_result_generated/v1.json)
 * event="Consignor Estimator Result Generated"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (shared/schemas/seller/consignor_estimator_result_generated/v1.json)
 * event="Consignor Estimator Result Generated"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
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
 * Generated from JSON Schema (shared/schemas/seller/consignor_estimator_results/v1.json)
 * event="Consignor Estimator Results"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Seller_ConsignorEstimatorResultsV1")))
@interface SharedSeller_ConsignorEstimatorResultsV1 : SharedBase <SharedSeller_>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category __attribute__((swift_name("init(category:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSeller_ConsignorEstimatorResultsV1 *)doCopyCategory:(NSString *)category utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/consignor_estimator_results/v1.json)
 * event="Consignor Estimator Results"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/consignor_estimator_results/v1.json)
 * event="Consignor Estimator Results"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (shared/schemas/seller/consignor_estimator_results/v1.json)
 * event="Consignor Estimator Results"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (shared/schemas/seller/edit_details_selected/v1.json)
 * event="Edit Details Selected"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Seller_EditDetailsSelectedV1")))
@interface SharedSeller_EditDetailsSelectedV1 : SharedBase <SharedSeller_>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page __attribute__((swift_name("init(category:page:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:page:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSeller_EditDetailsSelectedV1 *)doCopyCategory:(NSString *)category page:(NSString *)page utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:page:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/edit_details_selected/v1.json)
 * event="Edit Details Selected"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/edit_details_selected/v1.json)
 * event="Edit Details Selected"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (shared/schemas/seller/edit_details_selected/v1.json)
 * event="Edit Details Selected"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (shared/schemas/seller/feedback_submitted/v1.json)
 * event="Feedback Submitted"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Seller_FeedbackSubmittedV1")))
@interface SharedSeller_FeedbackSubmittedV1 : SharedBase <SharedSeller_>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithFeatureName:(NSString *)featureName location:(NSString *)location __attribute__((swift_name("init(featureName:location:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithFeatureName:(NSString *)featureName location:(NSString *)location comment:(NSString * _Nullable)comment feedbackType:(NSString * _Nullable)feedbackType optionsSelected:(NSArray<NSString *> * _Nullable)optionsSelected utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(featureName:location:comment:feedbackType:optionsSelected:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSeller_FeedbackSubmittedV1 *)doCopyFeatureName:(NSString *)featureName location:(NSString *)location comment:(NSString * _Nullable)comment feedbackType:(NSString * _Nullable)feedbackType optionsSelected:(NSArray<NSString *> * _Nullable)optionsSelected utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(featureName:location:comment:feedbackType:optionsSelected:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/feedback_submitted/v1.json)
 * event="Feedback Submitted"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/feedback_submitted/v1.json)
 * event="Feedback Submitted"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (shared/schemas/seller/feedback_submitted/v1.json)
 * event="Feedback Submitted"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable comment __attribute__((swift_name("comment")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *featureName __attribute__((swift_name("featureName")));
@property (readonly) NSString * _Nullable feedbackType __attribute__((swift_name("feedbackType")));
@property (readonly) NSString *location __attribute__((swift_name("location")));
@property (readonly) NSArray<NSString *> * _Nullable optionsSelected __attribute__((swift_name("optionsSelected")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (shared/schemas/seller/form_started/v1.json)
 * event="Form Started"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Seller_FormStartedV1")))
@interface SharedSeller_FormStartedV1 : SharedBase <SharedSeller_>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page type:(NSString *)type __attribute__((swift_name("init(category:page:type:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page type:(NSString *)type utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:page:type:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSeller_FormStartedV1 *)doCopyCategory:(NSString *)category page:(NSString *)page type:(NSString *)type utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:page:type:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/form_started/v1.json)
 * event="Form Started"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/form_started/v1.json)
 * event="Form Started"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (shared/schemas/seller/form_started/v1.json)
 * event="Form Started"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (shared/schemas/seller/form_submitted/v1.json)
 * event="Form Submitted"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Seller_FormSubmittedV1")))
@interface SharedSeller_FormSubmittedV1 : SharedBase <SharedSeller_>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category email:(NSString *)email firstName:(NSString *)firstName lastName:(NSString *)lastName page:(NSString *)page phone:(NSString *)phone postalCode:(NSString *)postalCode type:(NSString *)type __attribute__((swift_name("init(category:email:firstName:lastName:page:phone:postalCode:type:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category email:(NSString *)email firstName:(NSString *)firstName lastName:(NSString *)lastName page:(NSString *)page phone:(NSString *)phone postalCode:(NSString *)postalCode type:(NSString *)type utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:email:firstName:lastName:page:phone:postalCode:type:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSeller_FormSubmittedV1 *)doCopyCategory:(NSString *)category email:(NSString *)email firstName:(NSString *)firstName lastName:(NSString *)lastName page:(NSString *)page phone:(NSString *)phone postalCode:(NSString *)postalCode type:(NSString *)type utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:email:firstName:lastName:page:phone:postalCode:type:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/form_submitted/v1.json)
 * event="Form Submitted"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/form_submitted/v1.json)
 * event="Form Submitted"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (shared/schemas/seller/form_submitted/v1.json)
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
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (shared/schemas/seller/inquiry_created/v1.json)
 * event="Inquiry Created"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Seller_InquiryCreatedV1")))
@interface SharedSeller_InquiryCreatedV1 : SharedBase <SharedSeller_>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithInquiryId:(NSString *)inquiryId repeatConsignor:(BOOL)repeatConsignor __attribute__((swift_name("init(inquiryId:repeatConsignor:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithInquiryId:(NSString *)inquiryId repeatConsignor:(BOOL)repeatConsignor feature:(NSString * _Nullable)feature firstName:(NSString * _Nullable)firstName inquirySlug:(NSString * _Nullable)inquirySlug lastName:(NSString * _Nullable)lastName leadEmail:(NSString * _Nullable)leadEmail leadSource:(NSString * _Nullable)leadSource leadSubSource:(NSString * _Nullable)leadSubSource loggedIn:(SharedBoolean * _Nullable)loggedIn method:(NSString * _Nullable)method path:(NSString * _Nullable)path utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource zipCode:(NSString * _Nullable)zipCode __attribute__((swift_name("init(inquiryId:repeatConsignor:feature:firstName:inquirySlug:lastName:leadEmail:leadSource:leadSubSource:loggedIn:method:path:utmCampaign:utmMedium:utmSource:zipCode:)"))) __attribute__((objc_designated_initializer));
- (SharedSeller_InquiryCreatedV1 *)doCopyInquiryId:(NSString *)inquiryId repeatConsignor:(BOOL)repeatConsignor feature:(NSString * _Nullable)feature firstName:(NSString * _Nullable)firstName inquirySlug:(NSString * _Nullable)inquirySlug lastName:(NSString * _Nullable)lastName leadEmail:(NSString * _Nullable)leadEmail leadSource:(NSString * _Nullable)leadSource leadSubSource:(NSString * _Nullable)leadSubSource loggedIn:(SharedBoolean * _Nullable)loggedIn method:(NSString * _Nullable)method path:(NSString * _Nullable)path utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource zipCode:(NSString * _Nullable)zipCode __attribute__((swift_name("doCopy(inquiryId:repeatConsignor:feature:firstName:inquirySlug:lastName:leadEmail:leadSource:leadSubSource:loggedIn:method:path:utmCampaign:utmMedium:utmSource:zipCode:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/inquiry_created/v1.json)
 * event="Inquiry Created"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/inquiry_created/v1.json)
 * event="Inquiry Created"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (shared/schemas/seller/inquiry_created/v1.json)
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
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@property (readonly) NSString * _Nullable zipCode __attribute__((swift_name("zipCode")));
@end


/**
 * Generated from JSON Schema (shared/schemas/seller/lead_form_viewed/v1.json)
 * event="Lead Form Viewed"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Seller_LeadFormViewedV1")))
@interface SharedSeller_LeadFormViewedV1 : SharedBase <SharedSeller_>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page __attribute__((swift_name("init(category:page:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:page:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSeller_LeadFormViewedV1 *)doCopyCategory:(NSString *)category page:(NSString *)page utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:page:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/lead_form_viewed/v1.json)
 * event="Lead Form Viewed"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/lead_form_viewed/v1.json)
 * event="Lead Form Viewed"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (shared/schemas/seller/lead_form_viewed/v1.json)
 * event="Lead Form Viewed"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (shared/schemas/seller/new_search_selected/v1.json)
 * event="New Search Selected"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Seller_NewSearchSelectedV1")))
@interface SharedSeller_NewSearchSelectedV1 : SharedBase <SharedSeller_>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page __attribute__((swift_name("init(category:page:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:page:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSeller_NewSearchSelectedV1 *)doCopyCategory:(NSString *)category page:(NSString *)page utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:page:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/new_search_selected/v1.json)
 * event="New Search Selected"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/new_search_selected/v1.json)
 * event="New Search Selected"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (shared/schemas/seller/new_search_selected/v1.json)
 * event="New Search Selected"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (shared/schemas/seller/server_error/v1.json)
 * event="Server Error"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Seller_ServerErrorV1")))
@interface SharedSeller_ServerErrorV1 : SharedBase <SharedSeller_>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category error:(NSString *)error page:(NSString *)page type:(NSString *)type __attribute__((swift_name("init(category:error:page:type:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category error:(NSString *)error page:(NSString *)page type:(NSString *)type utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:error:page:type:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSeller_ServerErrorV1 *)doCopyCategory:(NSString *)category error:(NSString *)error page:(NSString *)page type:(NSString *)type utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:error:page:type:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/server_error/v1.json)
 * event="Server Error"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/server_error/v1.json)
 * event="Server Error"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (shared/schemas/seller/server_error/v1.json)
 * event="Server Error"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *error __attribute__((swift_name("error")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (shared/schemas/seller/server_error/v2.json)
 * event="Server Error"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Seller_ServerErrorV2")))
@interface SharedSeller_ServerErrorV2 : SharedBase <SharedSeller_>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category error:(NSString *)error page:(NSString *)page type:(NSString *)type __attribute__((swift_name("init(category:error:page:type:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category error:(NSString *)error page:(NSString *)page type:(NSString *)type utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:error:page:type:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSeller_ServerErrorV2 *)doCopyCategory:(NSString *)category error:(NSString *)error page:(NSString *)page type:(NSString *)type utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:error:page:type:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/server_error/v2.json)
 * event="Server Error"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/server_error/v2.json)
 * event="Server Error"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (shared/schemas/seller/server_error/v2.json)
 * event="Server Error"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *error __attribute__((swift_name("error")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end


/**
 * Generated from JSON Schema (shared/schemas/seller/view_selling_options_clicked/v1.json)
 * event="View Selling Options Clicked"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Seller_ViewSellingOptionsClickedV1")))
@interface SharedSeller_ViewSellingOptionsClickedV1 : SharedBase <SharedSeller_>

/** Secondary constructor with required fields only (for iOS compatibility) */
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page __attribute__((swift_name("init(category:page:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCategory:(NSString *)category page:(NSString *)page utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("init(category:page:utmCampaign:utmMedium:utmSource:)"))) __attribute__((objc_designated_initializer));
- (SharedSeller_ViewSellingOptionsClickedV1 *)doCopyCategory:(NSString *)category page:(NSString *)page utmCampaign:(NSString * _Nullable)utmCampaign utmMedium:(NSString * _Nullable)utmMedium utmSource:(NSString * _Nullable)utmSource __attribute__((swift_name("doCopy(category:page:utmCampaign:utmMedium:utmSource:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/view_selling_options_clicked/v1.json)
 * event="View Selling Options Clicked"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generated from JSON Schema (shared/schemas/seller/view_selling_options_clicked/v1.json)
 * event="View Selling Options Clicked"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)payload __attribute__((swift_name("payload()")));
- (NSDictionary<NSString *, id> *)properties __attribute__((swift_name("properties()")));

/**
 * Generated from JSON Schema (shared/schemas/seller/view_selling_options_clicked/v1.json)
 * event="View Selling Options Clicked"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *page __attribute__((swift_name("page")));
@property (readonly) int32_t schemaVersion __attribute__((swift_name("schemaVersion")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface SharedPlatform_iosKt : SharedBase
+ (id<SharedPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
