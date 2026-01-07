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
     * event="Consignor Estimator Category Selected", schemaVersion=1
     */
    export interface ConsignorEstimatorCategorySelected extends Seller {
      readonly eventName: "Consignor Estimator Category Selected";
      readonly schemaVersion: 1;
      category: string;
      page: string;
      selectedCategory: string;
    }


    /**
     * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/consignor_estimator_details_submitted.json)
     * event="Consignor Estimator Details Submitted", schemaVersion=1
     */
    export interface ConsignorEstimatorDetailsSubmitted extends Seller {
      readonly eventName: "Consignor Estimator Details Submitted";
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
     * event="Consignor Estimator Item Details", schemaVersion=1
     */
    export interface ConsignorEstimatorItemDetails extends Seller {
      readonly eventName: "Consignor Estimator Item Details";
      readonly schemaVersion: 1;
      category: string;
    }


    /**
     * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/consignor_estimator_landing.json)
     * event="Consignor Estimator Landing", schemaVersion=1
     */
    export interface ConsignorEstimatorLanding extends Seller {
      readonly eventName: "Consignor Estimator Landing";
      readonly schemaVersion: 1;
      category: string;
    }


    /**
     * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/consignor_estimator_results.json)
     * event="Consignor Estimator Results", schemaVersion=1
     */
    export interface ConsignorEstimatorResults extends Seller {
      readonly eventName: "Consignor Estimator Results";
      readonly schemaVersion: 1;
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
    }


    /**
     * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/edit_item_details_selected.json)
     * event="Edit Item Details Selected", schemaVersion=1
     */
    export interface EditItemDetailsSelected extends Seller {
      readonly eventName: "Edit Item Details Selected";
      readonly schemaVersion: 1;
      category: string;
      page: string;
    }


    /**
     * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/form_started.json)
     * event="Form Started", schemaVersion=1
     */
    export interface FormStarted extends Seller {
      readonly eventName: "Form Started";
      readonly schemaVersion: 1;
      category: string;
      page: string;
    }


    /**
     * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/form_submitted.json)
     * event="Form Submitted", schemaVersion=1
     */
    export interface FormSubmitted extends Seller {
      readonly eventName: "Form Submitted";
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
     * event="Lead Form Viewed", schemaVersion=1
     */
    export interface LeadFormViewed extends Seller {
      readonly eventName: "Lead Form Viewed";
      readonly schemaVersion: 1;
      category: string;
      page: string;
    }


    /**
     * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/new_search_selected.json)
     * event="New Search Selected", schemaVersion=1
     */
    export interface NewSearchSelected extends Seller {
      readonly eventName: "New Search Selected";
      readonly schemaVersion: 1;
      category: string;
      page: string;
    }


    /**
     * Generated from JSON Schema (/Users/runner/work/trr-analytics/trr-analytics/shared/schemas/seller/v1/server_error.json)
     * event="Server Error", schemaVersion=1
     */
    export interface ServerError extends Seller {
      readonly eventName: "Server Error";
      readonly schemaVersion: 1;
      category: string;
      error: string;
      page: string;
      type: string;
    }

  }
}
