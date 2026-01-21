import { AnalyticsEvent } from './AnalyticsEvent';

/**
 * Generated analytics events for family: Seller
 */
export interface Seller extends AnalyticsEvent {}

export namespace Seller {
  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/consignment_home.json)
   * event="Consignment Home"
   */
  export interface ConsignmentHome extends Seller {
    readonly eventName: "Consignment Home";
    loggedIn: boolean;
    repeatConsignor: boolean;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }


  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/consignor_estimator_category_selected.json)
   * event="Consignor Estimator Category Selected"
   */
  export interface ConsignorEstimatorCategorySelected extends Seller {
    readonly eventName: "Consignor Estimator Category Selected";
    category: string;
    page: string;
    selectedCategory: string;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }


  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/consignor_estimator_details_submitted.json)
   * event="Consignor Estimator Details Submitted"
   */
  export interface ConsignorEstimatorDetailsSubmitted extends Seller {
    readonly eventName: "Consignor Estimator Details Submitted";
    category: string;
    page: string;
    selectedCategory: string;
    selectedCondition: string;
    selectedDesigner: string;
    selectedItemType: string;
    selectedSubcategory: string;
    selectedOptionalColor?: string | null;
    selectedOptionalMaterial?: string | null;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }


  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/consignor_estimator_item_details.json)
   * event="Consignor Estimator Item Details"
   */
  export interface ConsignorEstimatorItemDetails extends Seller {
    readonly eventName: "Consignor Estimator Item Details";
    category: string;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }


  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/consignor_estimator_landing.json)
   * event="Consignor Estimator Landing"
   */
  export interface ConsignorEstimatorLanding extends Seller {
    readonly eventName: "Consignor Estimator Landing";
    category: string;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }


  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/consignor_estimator_results.json)
   * event="Consignor Estimator Results"
   */
  export interface ConsignorEstimatorResults extends Seller {
    readonly eventName: "Consignor Estimator Results";
    category: string;
    estimateResultFrom: string;
    estimateResultTo: string;
    selectedCategory: string;
    selectedCondition: string;
    selectedDesigner: string;
    selectedItemType: string;
    selectedSubcategory: string;
    selectedOptionalColor?: string | null;
    selectedOptionalMaterial?: string | null;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }


  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/edit_item_details_selected.json)
   * event="Edit Item Details Selected"
   */
  export interface EditItemDetailsSelected extends Seller {
    readonly eventName: "Edit Item Details Selected";
    category: string;
    page: string;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }


  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/feedback_submitted.json)
   * event="Feedback Submitted"
   */
  export interface FeedbackSubmitted extends Seller {
    readonly eventName: "Feedback Submitted";
    featureName: string;
    location: string;
    comment?: string | null;
    feedbackType?: string | null;
    optionsSelected?: string[] | null;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }


  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/form_started.json)
   * event="Form Started"
   */
  export interface FormStarted extends Seller {
    readonly eventName: "Form Started";
    category: string;
    page: string;
    type: string;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }


  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/form_submitted.json)
   * event="Form Submitted"
   */
  export interface FormSubmitted extends Seller {
    readonly eventName: "Form Submitted";
    category: string;
    email: string;
    firstName: string;
    lastName: string;
    page: string;
    phone: string;
    postalCode: string;
    type: string;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }


  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/inquiry_created.json)
   * event="Inquiry Created"
   */
  export interface InquiryCreated extends Seller {
    readonly eventName: "Inquiry Created";
    inquiryId: string;
    repeatConsignor: boolean;
    feature?: string | null;
    firstName?: string | null;
    inquirySlug?: string | null;
    lastName?: string | null;
    leadEmail?: string | null;
    leadSource?: string | null;
    leadSubSource?: string | null;
    loggedIn?: boolean | null;
    method?: string | null;
    path?: string | null;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
    zipCode?: string | null;
  }


  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/lead_form_viewed.json)
   * event="Lead Form Viewed"
   */
  export interface LeadFormViewed extends Seller {
    readonly eventName: "Lead Form Viewed";
    category: string;
    page: string;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }


  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/new_search_selected.json)
   * event="New Search Selected"
   */
  export interface NewSearchSelected extends Seller {
    readonly eventName: "New Search Selected";
    category: string;
    page: string;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }


  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/server_error.json)
   * event="Server Error"
   */
  export interface ServerError extends Seller {
    readonly eventName: "Server Error";
    category: string;
    error: string;
    page: string;
    type: string;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }

}
