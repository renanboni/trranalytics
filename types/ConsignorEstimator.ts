import { AnalyticsEvent } from './AnalyticsEvent';

/**
 * Generated analytics events for family: ConsignorEstimator
 */
export interface ConsignorEstimator extends AnalyticsEvent {}

export namespace ConsignorEstimator {
  /**
   * Generated from JSON Schema (/Users/renan.boni/Downloads/TRRAnalytics/shared/schemas/seller/consignor-estimator/category_selected/v1.json)
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
   * Generated from JSON Schema (/Users/renan.boni/Downloads/TRRAnalytics/shared/schemas/seller/consignor-estimator/details_submitted/v1.json)
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
   * Generated from JSON Schema (/Users/renan.boni/Downloads/TRRAnalytics/shared/schemas/seller/consignor-estimator/item_detail_selected/v1.json)
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
   * Generated from JSON Schema (/Users/renan.boni/Downloads/TRRAnalytics/shared/schemas/seller/consignor-estimator/item_details/v1.json)
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
   * Generated from JSON Schema (/Users/renan.boni/Downloads/TRRAnalytics/shared/schemas/seller/consignor-estimator/item_saved/v1.json)
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
   * Generated from JSON Schema (/Users/renan.boni/Downloads/TRRAnalytics/shared/schemas/seller/consignor-estimator/landing/v1.json)
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
   * Generated from JSON Schema (/Users/renan.boni/Downloads/TRRAnalytics/shared/schemas/seller/consignor-estimator/result_generated/v1.json)
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
   * Generated from JSON Schema (/Users/renan.boni/Downloads/TRRAnalytics/shared/schemas/seller/consignor-estimator/results/v1.json)
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
