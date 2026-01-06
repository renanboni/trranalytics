import { AnalyticsEvent } from './AnalyticsEvent';

/**
 * Generated analytics events for family: Seller
 */
export interface Seller extends AnalyticsEvent {}

export namespace Seller {
  export namespace V1 {
    /**
     * Generated from JSON Schema (/Users/renan.boni/Downloads/TRRAnalytics/shared/schemas/seller/v1/consignment_home.json)
     * event="consignment_home", schemaVersion=1
     */
    export interface ConsignmentHome extends Seller {
      readonly eventName: "consignment_home";
      readonly schemaVersion: 1;
      loggedIn: boolean;
      repeatConsignor: boolean;
      test?: boolean | null;
    }

  }
}
