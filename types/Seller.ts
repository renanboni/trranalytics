import { AnalyticsEvent } from './AnalyticsEvent';

/**
 * Generated analytics events for family: Seller
 */
export interface Seller extends AnalyticsEvent {}

export namespace Seller {
  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/consignment_funnel_consignment_options_viewed/v1.json)
   * event="Consignment Funnel Consignment Options Viewed"
   */
  export interface ConsignmentFunnelConsignmentOptionsViewedV1 extends Seller {
    readonly eventName: "Consignment Funnel Consignment Options Viewed";
    readonly schemaVersion: 1;
    category: string;
    flow: string;
    funnelPage: string;
    inquiryId: string;
    inquirySlug: string;
    leadType: string;
    methods: string[];
    page: string;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }


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
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/edit_details_selected/v1.json)
   * event="Edit Details Selected"
   */
  export interface EditDetailsSelectedV1 extends Seller {
    readonly eventName: "Edit Details Selected";
    readonly schemaVersion: 1;
    category: string;
    estimateResultMax: string;
    estimateResultMin: string;
    flow: string;
    page: string;
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
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/feedback_dismissed/v1.json)
   * event="Feedback Dismissed"
   */
  export interface FeedbackDismissedV1 extends Seller {
    readonly eventName: "Feedback Dismissed";
    readonly schemaVersion: 1;
    category: string;
    featureName: string;
    flow: string;
    location: string;
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
    category?: string | null;
    comment?: string | null;
    feedbackType?: string | null;
    flow?: string | null;
    optionsSelected?: string[] | null;
    page?: string | null;
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
    category?: string | null;
    feature?: string | null;
    firstName?: string | null;
    flow?: string | null;
    inquirySlug?: string | null;
    lastName?: string | null;
    leadEmail?: string | null;
    leadSource?: string | null;
    leadSubSource?: string | null;
    loggedIn?: boolean | null;
    method?: string | null;
    page?: string | null;
    path?: string | null;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
    zipCode?: string | null;
  }


  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/inquiry_updated/v1.json)
   * event="Inquiry Updated"
   */
  export interface InquiryUpdatedV1 extends Seller {
    readonly eventName: "Inquiry Updated";
    readonly schemaVersion: 1;
    category: string;
    flow: string;
    inquirySlug: string;
    method: string;
    page: string;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
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
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/nav_packing_list_item_removed/v1.json)
   * event="Nav Packing List Item Removed"
   */
  export interface NavPackingListItemRemovedV1 extends Seller {
    readonly eventName: "Nav Packing List Item Removed";
    readonly schemaVersion: 1;
    category: string;
    designer: string;
    flow: string;
    id: string;
    page: string;
    taxon: string;
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
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/popover_packing_list_new_estimate_clicked/v1.json)
   * event="Popover Packing List New Estimate Clicked"
   */
  export interface PopoverPackingListNewEstimateClickedV1 extends Seller {
    readonly eventName: "Popover Packing List New Estimate Clicked";
    readonly schemaVersion: 1;
    category: string;
    flow: string;
    page: string;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }


  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/popover_packing_list_sell_now_clicked/v1.json)
   * event="Popover Packing List Sell Now Clicked"
   */
  export interface PopoverPackingListSellNowClickedV1 extends Seller {
    readonly eventName: "Popover Packing List Sell Now Clicked";
    readonly schemaVersion: 1;
    category: string;
    flow: string;
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
    flow: string;
    page: string;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }

}
