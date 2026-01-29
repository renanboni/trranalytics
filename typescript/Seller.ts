import { AnalyticsEvent } from './AnalyticsEvent';

/**
 * Generated analytics events for family: Seller
 */
export interface Seller extends AnalyticsEvent {}

export namespace Seller {
  /**
   * Generated from JSON Schema (seller/consignment_funnel_consignment_options_viewed/v1.json)
   * event="Consignment Funnel Consignment Options Viewed"
   */
  export interface ConsignmentFunnelConsignmentOptionsViewedV1 extends Seller {
    readonly event_name: "Consignment Funnel Consignment Options Viewed";
    category: string;
    flow: string;
    funnel_page: string;
    inquiry_id: string;
    inquiry_slug: string;
    lead_type: string;
    methods: string[];
    page: string;
    utm_campaign?: string | null;
    utm_medium?: string | null;
    utm_source?: string | null;
  }


  /**
   * Generated from JSON Schema (seller/consignment_home/v1.json)
   * event="Consignment Home"
   */
  export interface ConsignmentHomeV1 extends Seller {
    readonly event_name: "Consignment Home";
    logged_in: boolean;
    repeat_consignor: boolean;
    utm_campaign?: string | null;
    utm_medium?: string | null;
    utm_source?: string | null;
  }


  /**
   * Generated from JSON Schema (seller/edit_details_selected/v1.json)
   * event="Edit Details Selected"
   */
  export interface EditDetailsSelectedV1 extends Seller {
    readonly event_name: "Edit Details Selected";
    category: string;
    estimate_result_max: string;
    estimate_result_min: string;
    flow: string;
    page: string;
    selected_category: string;
    selected_condition: string;
    selected_designer: string;
    selected_item_type: string;
    selected_optionals: Record<string, unknown>;
    selected_subcategory: string;
    utm_campaign?: string | null;
    utm_medium?: string | null;
    utm_source?: string | null;
  }


  /**
   * Generated from JSON Schema (seller/feedback_dismissed/v1.json)
   * event="Feedback Dismissed"
   */
  export interface FeedbackDismissedV1 extends Seller {
    readonly event_name: "Feedback Dismissed";
    category: string;
    feature_name: string;
    flow: string;
    location: string;
    page: string;
    utm_campaign?: string | null;
    utm_medium?: string | null;
    utm_source?: string | null;
  }


  /**
   * Generated from JSON Schema (seller/feedback_submitted/v1.json)
   * event="Feedback Submitted"
   */
  export interface FeedbackSubmittedV1 extends Seller {
    readonly event_name: "Feedback Submitted";
    feature_name: string;
    location: string;
    category?: string | null;
    comment?: string | null;
    feedback_type?: string | null;
    flow?: string | null;
    options_selected?: string[] | null;
    page?: string | null;
    utm_campaign?: string | null;
    utm_medium?: string | null;
    utm_source?: string | null;
  }


  /**
   * Generated from JSON Schema (seller/form_started/v1.json)
   * event="Form Started"
   */
  export interface FormStartedV1 extends Seller {
    readonly event_name: "Form Started";
    category: string;
    page: string;
    type: string;
    utm_campaign?: string | null;
    utm_medium?: string | null;
    utm_source?: string | null;
  }


  /**
   * Generated from JSON Schema (seller/form_submitted/v1.json)
   * event="Form Submitted"
   */
  export interface FormSubmittedV1 extends Seller {
    readonly event_name: "Form Submitted";
    category: string;
    email: string;
    first_name: string;
    last_name: string;
    page: string;
    phone: string;
    postal_code: string;
    type: string;
    utm_campaign?: string | null;
    utm_medium?: string | null;
    utm_source?: string | null;
  }


  /**
   * Generated from JSON Schema (seller/inquiry_created/v1.json)
   * event="Inquiry Created"
   */
  export interface InquiryCreatedV1 extends Seller {
    readonly event_name: "Inquiry Created";
    inquiry_id: string;
    repeat_consignor: boolean;
    category?: string | null;
    feature?: string | null;
    first_name?: string | null;
    flow?: string | null;
    inquiry_slug?: string | null;
    last_name?: string | null;
    lead_email?: string | null;
    lead_source?: string | null;
    lead_sub_source?: string | null;
    logged_in?: boolean | null;
    method?: string | null;
    page?: string | null;
    path?: string | null;
    utm_campaign?: string | null;
    utm_medium?: string | null;
    utm_source?: string | null;
    zip_code?: string | null;
  }


  /**
   * Generated from JSON Schema (seller/inquiry_updated/v1.json)
   * event="Inquiry Updated"
   */
  export interface InquiryUpdatedV1 extends Seller {
    readonly event_name: "Inquiry Updated";
    category: string;
    flow: string;
    inquiry_slug: string;
    method: string;
    page: string;
    utm_campaign?: string | null;
    utm_medium?: string | null;
    utm_source?: string | null;
  }


  /**
   * Generated from JSON Schema (seller/lead_form_viewed/v1.json)
   * event="Lead Form Viewed"
   */
  export interface LeadFormViewedV1 extends Seller {
    readonly event_name: "Lead Form Viewed";
    category: string;
    page: string;
    utm_campaign?: string | null;
    utm_medium?: string | null;
    utm_source?: string | null;
  }


  /**
   * Generated from JSON Schema (seller/nav_packing_list_item_removed/v1.json)
   * event="Nav Packing List Item Removed"
   */
  export interface NavPackingListItemRemovedV1 extends Seller {
    readonly event_name: "Nav Packing List Item Removed";
    category: string;
    designer: string;
    flow: string;
    id: string;
    page: string;
    taxon: string;
    utm_campaign?: string | null;
    utm_medium?: string | null;
    utm_source?: string | null;
  }


  /**
   * Generated from JSON Schema (seller/new_search_selected/v1.json)
   * event="New Search Selected"
   */
  export interface NewSearchSelectedV1 extends Seller {
    readonly event_name: "New Search Selected";
    category: string;
    page: string;
    utm_campaign?: string | null;
    utm_medium?: string | null;
    utm_source?: string | null;
  }


  /**
   * Generated from JSON Schema (seller/popover_packing_list_new_estimate_clicked/v1.json)
   * event="Popover Packing List New Estimate Clicked"
   */
  export interface PopoverPackingListNewEstimateClickedV1 extends Seller {
    readonly event_name: "Popover Packing List New Estimate Clicked";
    category: string;
    flow: string;
    page: string;
    utm_campaign?: string | null;
    utm_medium?: string | null;
    utm_source?: string | null;
  }


  /**
   * Generated from JSON Schema (seller/popover_packing_list_sell_now_clicked/v1.json)
   * event="Popover Packing List Sell Now Clicked"
   */
  export interface PopoverPackingListSellNowClickedV1 extends Seller {
    readonly event_name: "Popover Packing List Sell Now Clicked";
    category: string;
    flow: string;
    page: string;
    utm_campaign?: string | null;
    utm_medium?: string | null;
    utm_source?: string | null;
  }


  /**
   * Generated from JSON Schema (seller/server_error/v1.json)
   * event="Server Error"
   */
  export interface ServerErrorV1 extends Seller {
    readonly event_name: "Server Error";
    category: string;
    error: string;
    page: string;
    type: string;
    utm_campaign?: string | null;
    utm_medium?: string | null;
    utm_source?: string | null;
  }


  /**
   * Generated from JSON Schema (seller/view_selling_options_clicked/v1.json)
   * event="View Selling Options Clicked"
   */
  export interface ViewSellingOptionsClickedV1 extends Seller {
    readonly event_name: "View Selling Options Clicked";
    category: string;
    flow: string;
    page: string;
    utm_campaign?: string | null;
    utm_medium?: string | null;
    utm_source?: string | null;
  }


  export interface ConsignorEstimator extends Seller {}

  export namespace ConsignorEstimator {
    /**
     * Generated from JSON Schema (seller/consignor_estimator/category_selected/v1.json)
     * event="Consignor Estimator Category Selected"
     */
    export interface CategorySelectedV1 extends ConsignorEstimator {
      readonly event_name: "Consignor Estimator Category Selected";
      category: string;
      flow: string;
      page: string;
      selected_category: string;
      utm_campaign?: string | null;
      utm_medium?: string | null;
      utm_source?: string | null;
    }


    /**
     * Generated from JSON Schema (seller/consignor_estimator/details_submitted/v1.json)
     * event="Consignor Estimator Details Submitted"
     */
    export interface DetailsSubmittedV1 extends ConsignorEstimator {
      readonly event_name: "Consignor Estimator Details Submitted";
      category: string;
      flow: string;
      page: string;
      selected_category: string;
      selected_condition: string;
      selected_designer: string;
      selected_item_type: string;
      selected_subcategory: string;
      selected_optionals?: Record<string, unknown> | null;
      utm_campaign?: string | null;
      utm_medium?: string | null;
      utm_source?: string | null;
    }


    /**
     * Generated from JSON Schema (seller/consignor_estimator/item_detail_selected/v1.json)
     * event="Consignor Estimator Item Detail Selected"
     */
    export interface ItemDetailSelectedV1 extends ConsignorEstimator {
      readonly event_name: "Consignor Estimator Item Detail Selected";
      category: string;
      flow: string;
      page: string;
      selected_condition?: string | null;
      selected_designer?: string | null;
      selected_item_type?: string | null;
      selected_optionals?: Record<string, unknown> | null;
      selected_subcategory?: string | null;
      utm_campaign?: string | null;
      utm_medium?: string | null;
      utm_source?: string | null;
    }


    /**
     * Generated from JSON Schema (seller/consignor_estimator/item_details/v1.json)
     * event="Consignor Estimator Item Details"
     */
    export interface ItemDetailsV1 extends ConsignorEstimator {
      readonly event_name: "Consignor Estimator Item Details";
      category: string;
      name: string;
      utm_campaign?: string | null;
      utm_medium?: string | null;
      utm_source?: string | null;
    }


    /**
     * Generated from JSON Schema (seller/consignor_estimator/item_saved/v1.json)
     * event="Consignor Estimator Item Saved"
     */
    export interface ItemSavedV1 extends ConsignorEstimator {
      readonly event_name: "Consignor Estimator Item Saved";
      category: string;
      estimate_result_max: string;
      estimate_result_min: string;
      flow: string;
      page: string;
      selected_category: string;
      selected_condition: string;
      selected_designer: string;
      selected_item_type: string;
      selected_subcategory: string;
      selected_optionals?: Record<string, unknown> | null;
      utm_campaign?: string | null;
      utm_medium?: string | null;
      utm_source?: string | null;
    }


    /**
     * Generated from JSON Schema (seller/consignor_estimator/landing/v1.json)
     * event="Consignor Estimator Landing"
     */
    export interface LandingV1 extends ConsignorEstimator {
      readonly event_name: "Consignor Estimator Landing";
      category: string;
      name: string;
      utm_campaign?: string | null;
      utm_medium?: string | null;
      utm_source?: string | null;
    }


    /**
     * Generated from JSON Schema (seller/consignor_estimator/result_generated/v1.json)
     * event="Consignor Estimator Result Generated"
     */
    export interface ResultGeneratedV1 extends ConsignorEstimator {
      readonly event_name: "Consignor Estimator Result Generated";
      category: string;
      estimate_result_max: string;
      estimate_result_min: string;
      estimate_result_percentage: string;
      flow: string;
      page: string;
      selected_category: string;
      selected_condition: string;
      selected_designer: string;
      selected_item_type: string;
      selected_subcategory: string;
      selected_optionals?: Record<string, unknown> | null;
      utm_campaign?: string | null;
      utm_medium?: string | null;
      utm_source?: string | null;
    }


    /**
     * Generated from JSON Schema (seller/consignor_estimator/results/v1.json)
     * event="Consignor Estimator Results"
     */
    export interface ResultsV1 extends ConsignorEstimator {
      readonly event_name: "Consignor Estimator Results";
      category: string;
      name: string;
      utm_campaign?: string | null;
      utm_medium?: string | null;
      utm_source?: string | null;
    }

  }
}
