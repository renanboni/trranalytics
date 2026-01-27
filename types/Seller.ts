import { AnalyticsEvent } from './AnalyticsEvent';

/**
 * Generated analytics events for family: Seller
 */
export interface Seller extends AnalyticsEvent {}

export namespace Seller {
  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/consignment_home/v1.json)
   * event="Consignment Home"
   */
  export interface ConsignmentHomeV1 extends Seller {
    readonly eventName: "Consignment Home";
    readonly schemaVersion: 1;
    loggedIn: boolean;
    repeatConsignor: boolean;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }


  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/consignor_estimator_category_selected/v1.json)
   * event="Consignor Estimator Category Selected"
   */
  export interface ConsignorEstimatorCategorySelectedV1 extends Seller {
    readonly eventName: "Consignor Estimator Category Selected";
    readonly schemaVersion: 1;
    category: string;
    page: string;
    selectedCategory: string;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }


  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/consignor_estimator_details_submitted/v1.json)
   * event="Consignor Estimator Details Submitted"
   */
  export interface ConsignorEstimatorDetailsSubmittedV1 extends Seller {
    readonly eventName: "Consignor Estimator Details Submitted";
    readonly schemaVersion: 1;
    category: string;
    page: string;
    selectedCategory: string;
    selectedCondition: string;
    selectedDesigner: string;
    selectedItemType: string;
    selectedSubcategory: string;
    selectedOptionals?: Record<string, unknown> | null;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }


  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/consignor_estimator_item_details/v1.json)
   * event="Consignor Estimator Item Details"
   */
  export interface ConsignorEstimatorItemDetailsV1 extends Seller {
    readonly eventName: "Consignor Estimator Item Details";
    readonly schemaVersion: 1;
    category: string;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }


  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/consignor_estimator_item_saved/v1.json)
   * event="Consignor Estimator Item Saved"
   */
  export interface ConsignorEstimatorItemSavedV1 extends Seller {
    readonly eventName: "Consignor Estimator Item Saved";
    readonly schemaVersion: 1;
    category: string;
    estimateResultMax: string;
    estimateResultMin: string;
    selectedCategory: string;
    selectedCondition: string;
    selectedDesigner: string;
    selectedItemType: string;
    selectedSubcategory: string;
    selectedOptionals?: Record<string, unknown> | null;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }


  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/consignor_estimator_landing/v1.json)
   * event="Consignor Estimator Landing"
   */
  export interface ConsignorEstimatorLandingV1 extends Seller {
    readonly eventName: "Consignor Estimator Landing";
    readonly schemaVersion: 1;
    category: string;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }


  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/consignor_estimator_result_generated/v1.json)
   * event="Consignor Estimator Result Generated"
   */
  export interface ConsignorEstimatorResultGeneratedV1 extends Seller {
    readonly eventName: "Consignor Estimator Result Generated";
    readonly schemaVersion: 1;
    category: string;
    selectedCategory: string;
    selectedCondition: string;
    selectedDesigner: string;
    selectedItemType: string;
    selectedOptionals: Record<string, unknown>;
    selectedSubcategory: string;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }


  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/consignor_estimator_results/v1.json)
   * event="Consignor Estimator Results"
   */
  export interface ConsignorEstimatorResultsV1 extends Seller {
    readonly eventName: "Consignor Estimator Results";
    readonly schemaVersion: 1;
    category: string;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }


  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/edit_details_selected/v1.json)
   * event="Edit Details Selected"
   */
  export interface EditDetailsSelectedV1 extends Seller {
    readonly eventName: "Edit Details Selected";
    readonly schemaVersion: 1;
    category: string;
    page: string;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }


  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/feedback_submitted/v1.json)
   * event="Feedback Submitted"
   */
  export interface FeedbackSubmittedV1 extends Seller {
    readonly eventName: "Feedback Submitted";
    readonly schemaVersion: 1;
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
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/form_started/v1.json)
   * event="Form Started"
   */
  export interface FormStartedV1 extends Seller {
    readonly eventName: "Form Started";
    readonly schemaVersion: 1;
    category: string;
    page: string;
    type: string;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }


  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/form_submitted/v1.json)
   * event="Form Submitted"
   */
  export interface FormSubmittedV1 extends Seller {
    readonly eventName: "Form Submitted";
    readonly schemaVersion: 1;
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
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/inquiry_created/v1.json)
   * event="Inquiry Created"
   */
  export interface InquiryCreatedV1 extends Seller {
    readonly eventName: "Inquiry Created";
    readonly schemaVersion: 1;
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
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/lead_form_viewed/v1.json)
   * event="Lead Form Viewed"
   */
  export interface LeadFormViewedV1 extends Seller {
    readonly eventName: "Lead Form Viewed";
    readonly schemaVersion: 1;
    category: string;
    page: string;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }


  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/new_search_selected/v1.json)
   * event="New Search Selected"
   */
  export interface NewSearchSelectedV1 extends Seller {
    readonly eventName: "New Search Selected";
    readonly schemaVersion: 1;
    category: string;
    page: string;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }


  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/server_error/v1.json)
   * event="Server Error"
   */
  export interface ServerErrorV1 extends Seller {
    readonly eventName: "Server Error";
    readonly schemaVersion: 1;
    category: string;
    error: string;
    page: string;
    type: string;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }


  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/view_selling_options_clicked/v1.json)
   * event="View Selling Options Clicked"
   */
  export interface ViewSellingOptionsClickedV1 extends Seller {
    readonly eventName: "View Selling Options Clicked";
    readonly schemaVersion: 1;
    category: string;
    page: string;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }

}
