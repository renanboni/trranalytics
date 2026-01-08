import SwiftUI
import Shared

@main
struct iOSApp: App {
    var body: some Scene {
        WindowGroup {
            ContentView()
            SellerV1.InquiryCreated(
                            inquiryId: id,
                            repeatConsignor: isRepeatConsignor,
                            firstName: inquiry.firstName,
                            inquirySlug: inquiry.slug,
                            lastName: inquiry.lastName,
                            leadEmail: inquiry.email,
                            leadSource: "consignor_estimator",
                            leadSubSource: "consignor_estimator_mobile_app",
                            loggedIn: .init(value: userManager.currentUser() != nil),
                            method: inquiry.method,
                            path: nil,
                            zipCode: inquiry.postalCode
                        )
        }
    }
}
import Shared

private extension Shared.AnalyticsEvent {
    func propertiesMap() -> [String: Any] {
        AnalyticsEventExtensionsKt.propertiesMap(self)
    }
}

public extension AnalyticsClient {
    func track(event: Shared.AnalyticsEvent) {
        track(name: event.eventName, payload: AnalyticsPayload(event.propertiesMap()))
    }

    func track(screen: Shared.AnalyticsEvent) {
        self.screen(name: screen.eventName, payload: AnalyticsPayload(screen.propertiesMap()))
    }
}
