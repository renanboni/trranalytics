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

  }
}
