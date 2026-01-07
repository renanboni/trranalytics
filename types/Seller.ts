import { AnalyticsEvent } from './AnalyticsEvent';

/**
 * Generated analytics events for family: Seller
 */
export interface Seller extends AnalyticsEvent {}

export namespace Seller {
  export namespace V1 {
    /**
     * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/consignment_home.json)
     * event="Consignment Home", schemaVersion=1
     */
    export interface ConsignmentHome extends Seller {
      readonly eventName: "Consignment Home";
      readonly schemaVersion: 1;
      loggedIn: boolean;
      repeatConsignor: boolean;
    }


    /**
     * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/consignor_estimator_category_selected.json)
     * event="consignor_estimator_category_selected", schemaVersion=1
     */
    export interface ConsignorEstimatorCategorySelected extends Seller {
      readonly eventName: "consignor_estimator_category_selected";
      readonly schemaVersion: 1;
      category: string;
      page: string;
      selectedCategory: string;
    }


    /**
     * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/consignor_estimator_details_submitted.json)
     * event="consignor_estimator_details_submitted", schemaVersion=1
     */
    export interface ConsignorEstimatorDetailsSubmitted extends Seller {
      readonly eventName: "consignor_estimator_details_submitted";
      readonly schemaVersion: 1;
      category: string;
      page: string;
      selectedCategory: string;
      selectedCondition: string;
      selectedDesigner: string;
      selectedItemType: string;
      selectedSubcategory: string;
      selectedOptionalColor?: string | null;
      selectedOptionalMaterial?: string | null;
    }


    /**
     * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/consignor_estimator_item_details.json)
     * event="consignor_estimator_item_details", schemaVersion=1
     */
    export interface ConsignorEstimatorItemDetails extends Seller {
      readonly eventName: "consignor_estimator_item_details";
      readonly schemaVersion: 1;
      category: string;
    }


    /**
     * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/consignor_estimator_landing.json)
     * event="consignor_estimator_landing", schemaVersion=1
     */
    export interface ConsignorEstimatorLanding extends Seller {
      readonly eventName: "consignor_estimator_landing";
      readonly schemaVersion: 1;
      category: string;
    }


    /**
     * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/consignor_estimator_results.json)
     * event="consignor_estimator_results", schemaVersion=1
     */
    export interface ConsignorEstimatorResults extends Seller {
      readonly eventName: "consignor_estimator_results";
      readonly schemaVersion: 1;
      category: string;
      estimateResultFrom: number;
      estimateResultTo: number;
      selectedCategory: string;
      selectedCondition: string;
      selectedDesigner: string;
      selectedItemType: string;
      selectedSubcategory: string;
      selectedOptionalColor?: string | null;
      selectedOptionalMaterial?: string | null;
    }


    /**
     * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/edit_item_details_selected.json)
     * event="edit_item_details_selected", schemaVersion=1
     */
    export interface EditItemDetailsSelected extends Seller {
      readonly eventName: "edit_item_details_selected";
      readonly schemaVersion: 1;
      category: string;
      page: string;
    }


    /**
     * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/form_started.json)
     * event="form_started", schemaVersion=1
     */
    export interface FormStarted extends Seller {
      readonly eventName: "form_started";
      readonly schemaVersion: 1;
      category: string;
      page: string;
    }


    /**
     * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/form_submitted.json)
     * event="form_submitted", schemaVersion=1
     */
    export interface FormSubmitted extends Seller {
      readonly eventName: "form_submitted";
      readonly schemaVersion: 1;
      category: string;
      email: string;
      firstName: string;
      lastName: string;
      page: string;
      phone: string;
      postalCode: string;
    }


    /**
     * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/lead_form_viewed.json)
     * event="lead_form_viewed", schemaVersion=1
     */
    export interface LeadFormViewed extends Seller {
      readonly eventName: "lead_form_viewed";
      readonly schemaVersion: 1;
      category: string;
      page: string;
    }


    /**
     * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/new_search_selected.json)
     * event="new_search_selected", schemaVersion=1
     */
    export interface NewSearchSelected extends Seller {
      readonly eventName: "new_search_selected";
      readonly schemaVersion: 1;
      category: string;
      page: string;
    }


    /**
     * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/server_error.json)
     * event="server_error", schemaVersion=1
     */
    export interface ServerError extends Seller {
      readonly eventName: "server_error";
      readonly schemaVersion: 1;
      category: string;
      error: string;
      page: string;
      type: string;
    }

  }
}
