/**
 * Base interface for all analytics events
 */
export interface AnalyticsEvent {
  readonly eventName: string;
  readonly schemaVersion: number;
}
