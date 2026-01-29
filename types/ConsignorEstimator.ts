import { AnalyticsEvent } from './AnalyticsEvent';

/**
 * Generated analytics events for family: ConsignorEstimator
 */
export interface ConsignorEstimator extends AnalyticsEvent {}

export namespace ConsignorEstimator {
  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/consignor-estimator/category_selected/v1.json)
   * event="Consignor Estimator Category Selected"
   */
  export interface CategorySelectedV1 extends ConsignorEstimator {
    readonly eventName: "Consignor Estimator Category Selected";
    readonly schemaVersion: 1;
    category: string;
    flow: string;
    page: string;
    selectedCategory: string;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }


  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/consignor-estimator/details_submitted/v1.json)
   * event="Consignor Estimator Details Submitted"
   */
  export interface DetailsSubmittedV1 extends ConsignorEstimator {
    readonly eventName: "Consignor Estimator Details Submitted";
    readonly schemaVersion: 1;
    category: string;
    flow: string;
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
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/consignor-estimator/item_detail_selected/v1.json)
   * event="Consignor Estimator Item Detail Selected"
   */
  export interface ItemDetailSelectedV1 extends ConsignorEstimator {
    readonly eventName: "Consignor Estimator Item Detail Selected";
    readonly schemaVersion: 1;
    category: string;
    flow: string;
    page: string;
    selectedCondition?: string | null;
    selectedDesigner?: string | null;
    selectedItemType?: string | null;
    selectedOptionals?: Record<string, unknown> | null;
    selectedSubcategory?: string | null;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }


  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/consignor-estimator/item_details/v1.json)
   * event="Consignor Estimator Item Details"
   */
  export interface ItemDetailsV1 extends ConsignorEstimator {
    readonly eventName: "Consignor Estimator Item Details";
    readonly schemaVersion: 1;
    category: string;
    name: string;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }


  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/consignor-estimator/item_saved/v1.json)
   * event="Consignor Estimator Item Saved"
   */
  export interface ItemSavedV1 extends ConsignorEstimator {
    readonly eventName: "Consignor Estimator Item Saved";
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
    selectedSubcategory: string;
    selectedOptionals?: Record<string, unknown> | null;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }


  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/consignor-estimator/landing/v1.json)
   * event="Consignor Estimator Landing"
   */
  export interface LandingV1 extends ConsignorEstimator {
    readonly eventName: "Consignor Estimator Landing";
    readonly schemaVersion: 1;
    category: string;
    name: string;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }


  /**
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/consignor-estimator/result_generated/v1.json)
   * event="Consignor Estimator Result Generated"
   */
  export interface ResultGeneratedV1 extends ConsignorEstimator {
    readonly eventName: "Consignor Estimator Result Generated";
    readonly schemaVersion: 1;
    category: string;
    estimateResultMax: string;
    estimateResultMin: string;
    estimateResultPercentage: string;
    flow: string;
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
   * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/consignor-estimator/results/v1.json)
   * event="Consignor Estimator Results"
   */
  export interface ResultsV1 extends ConsignorEstimator {
    readonly eventName: "Consignor Estimator Results";
    readonly schemaVersion: 1;
    category: string;
    name: string;
    utmCampaign?: string | null;
    utmMedium?: string | null;
    utmSource?: string | null;
  }

}
