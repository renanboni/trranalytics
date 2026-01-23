          package com.therealreal.analytics.events.generated

          import com.therealreal.analytics.events.AnalyticsEvent

          /**
           * Generated analytics events for family: Seller
           */
          sealed interface Seller : AnalyticsEvent {

                        /**
             * Generated from JSON Schema (shared/schemas/seller/consignment_home/v1.json)
             * event="Consignment Home"
             */
            data class ConsignmentHomeV1(
                val loggedIn: Boolean,
    val repeatConsignor: Boolean,
    val utmCampaign: String? = null,
    val utmMedium: String? = null,
    val utmSource: String? = null
            ) : Seller {

          

          

                override val eventName: String = "Consignment Home"
                override val schemaVersion: Int = 1

                /** Secondary constructor with required fields only (for iOS compatibility) */
    constructor(loggedIn: Boolean, repeatConsignor: Boolean) : this(loggedIn, repeatConsignor, null, null, null)

                override fun properties(): Map<String, Any?> =         buildMap {
            put("logged_in", loggedIn)
put("repeat_consignor", repeatConsignor)
utmCampaign?.let { put("utm_campaign", it) }
utmMedium?.let { put("utm_medium", it) }
utmSource?.let { put("utm_source", it) }
            }

                override fun payload(): Map<String, Any?> = mapOf(
                    "event" to eventName,
                    "schema_version" to schemaVersion,
                    "properties" to properties()
                )
            }

            /**
             * Generated from JSON Schema (shared/schemas/seller/consignor_estimator_category_selected/v1.json)
             * event="Consignor Estimator Category Selected"
             */
            data class ConsignorEstimatorCategorySelectedV1(
                val category: String,
    val page: String,
    val selectedCategory: String,
    val utmCampaign: String? = null,
    val utmMedium: String? = null,
    val utmSource: String? = null
            ) : Seller {

          

          

                override val eventName: String = "Consignor Estimator Category Selected"
                override val schemaVersion: Int = 1

                /** Secondary constructor with required fields only (for iOS compatibility) */
    constructor(category: String, page: String, selectedCategory: String) : this(category, page, selectedCategory, null, null, null)

                override fun properties(): Map<String, Any?> =         buildMap {
            put("category", category)
put("page", page)
put("selected_category", selectedCategory)
utmCampaign?.let { put("utm_campaign", it) }
utmMedium?.let { put("utm_medium", it) }
utmSource?.let { put("utm_source", it) }
            }

                override fun payload(): Map<String, Any?> = mapOf(
                    "event" to eventName,
                    "schema_version" to schemaVersion,
                    "properties" to properties()
                )
            }

            /**
             * Generated from JSON Schema (shared/schemas/seller/consignor_estimator_details_submitted/v1.json)
             * event="Consignor Estimator Details Submitted"
             */
            data class ConsignorEstimatorDetailsSubmittedV1(
                val category: String,
    val page: String,
    val selectedCategory: String,
    val selectedCondition: String,
    val selectedDesigner: String,
    val selectedItemType: String,
    val selectedSubcategory: String,
    val selectedOptionals: Map<String, Any>? = null,
    val utmCampaign: String? = null,
    val utmMedium: String? = null,
    val utmSource: String? = null
            ) : Seller {

          

          

                override val eventName: String = "Consignor Estimator Details Submitted"
                override val schemaVersion: Int = 1

                /** Secondary constructor with required fields only (for iOS compatibility) */
    constructor(category: String, page: String, selectedCategory: String, selectedCondition: String, selectedDesigner: String, selectedItemType: String, selectedSubcategory: String) : this(category, page, selectedCategory, selectedCondition, selectedDesigner, selectedItemType, selectedSubcategory, null, null, null, null)

                override fun properties(): Map<String, Any?> =         buildMap {
            put("category", category)
put("page", page)
put("selected_category", selectedCategory)
put("selected_condition", selectedCondition)
put("selected_designer", selectedDesigner)
put("selected_item_type", selectedItemType)
selectedOptionals?.let { put("selected_optionals", it) }
put("selected_subcategory", selectedSubcategory)
utmCampaign?.let { put("utm_campaign", it) }
utmMedium?.let { put("utm_medium", it) }
utmSource?.let { put("utm_source", it) }
            }

                override fun payload(): Map<String, Any?> = mapOf(
                    "event" to eventName,
                    "schema_version" to schemaVersion,
                    "properties" to properties()
                )
            }

            /**
             * Generated from JSON Schema (shared/schemas/seller/consignor_estimator_item_details/v1.json)
             * event="Consignor Estimator Item Details"
             */
            data class ConsignorEstimatorItemDetailsV1(
                val category: String,
    val utmCampaign: String? = null,
    val utmMedium: String? = null,
    val utmSource: String? = null
            ) : Seller {

          

          

                override val eventName: String = "Consignor Estimator Item Details"
                override val schemaVersion: Int = 1

                /** Secondary constructor with required fields only (for iOS compatibility) */
    constructor(category: String) : this(category, null, null, null)

                override fun properties(): Map<String, Any?> =         buildMap {
            put("category", category)
utmCampaign?.let { put("utm_campaign", it) }
utmMedium?.let { put("utm_medium", it) }
utmSource?.let { put("utm_source", it) }
            }

                override fun payload(): Map<String, Any?> = mapOf(
                    "event" to eventName,
                    "schema_version" to schemaVersion,
                    "properties" to properties()
                )
            }

            /**
             * Generated from JSON Schema (shared/schemas/seller/consignor_estimator_item_saved/v1.json)
             * event="Consignor Estimator Item Saved"
             */
            data class ConsignorEstimatorItemSavedV1(
                val category: String,
    val estimateResultMax: String,
    val estimateResultMin: String,
    val selectedCategory: String,
    val selectedCondition: String,
    val selectedDesigner: String,
    val selectedItemType: String,
    val selectedSubcategory: String,
    val selectedOptionals: Map<String, Any>? = null,
    val utmCampaign: String? = null,
    val utmMedium: String? = null,
    val utmSource: String? = null
            ) : Seller {

          

          

                override val eventName: String = "Consignor Estimator Item Saved"
                override val schemaVersion: Int = 1

                /** Secondary constructor with required fields only (for iOS compatibility) */
    constructor(category: String, estimateResultMax: String, estimateResultMin: String, selectedCategory: String, selectedCondition: String, selectedDesigner: String, selectedItemType: String, selectedSubcategory: String) : this(category, estimateResultMax, estimateResultMin, selectedCategory, selectedCondition, selectedDesigner, selectedItemType, selectedSubcategory, null, null, null, null)

                override fun properties(): Map<String, Any?> =         buildMap {
            put("category", category)
put("estimate_result_max", estimateResultMax)
put("estimate_result_min", estimateResultMin)
put("selected_category", selectedCategory)
put("selected_condition", selectedCondition)
put("selected_designer", selectedDesigner)
put("selected_item_type", selectedItemType)
selectedOptionals?.let { put("selected_optionals", it) }
put("selected_subcategory", selectedSubcategory)
utmCampaign?.let { put("utm_campaign", it) }
utmMedium?.let { put("utm_medium", it) }
utmSource?.let { put("utm_source", it) }
            }

                override fun payload(): Map<String, Any?> = mapOf(
                    "event" to eventName,
                    "schema_version" to schemaVersion,
                    "properties" to properties()
                )
            }

            /**
             * Generated from JSON Schema (shared/schemas/seller/consignor_estimator_landing/v1.json)
             * event="Consignor Estimator Landing"
             */
            data class ConsignorEstimatorLandingV1(
                val category: String,
    val utmCampaign: String? = null,
    val utmMedium: String? = null,
    val utmSource: String? = null
            ) : Seller {

          

          

                override val eventName: String = "Consignor Estimator Landing"
                override val schemaVersion: Int = 1

                /** Secondary constructor with required fields only (for iOS compatibility) */
    constructor(category: String) : this(category, null, null, null)

                override fun properties(): Map<String, Any?> =         buildMap {
            put("category", category)
utmCampaign?.let { put("utm_campaign", it) }
utmMedium?.let { put("utm_medium", it) }
utmSource?.let { put("utm_source", it) }
            }

                override fun payload(): Map<String, Any?> = mapOf(
                    "event" to eventName,
                    "schema_version" to schemaVersion,
                    "properties" to properties()
                )
            }

            /**
             * Generated from JSON Schema (shared/schemas/seller/consignor_estimator_result_generated/v1.json)
             * event="Consignor Estimator Result Generated"
             */
            data class ConsignorEstimatorResultGeneratedV1(
                val category: String,
    val selectedCategory: String,
    val selectedCondition: String,
    val selectedDesigner: String,
    val selectedItemType: String,
    val selectedOptionals: Map<String, Any>,
    val selectedSubcategory: String,
    val utmCampaign: String? = null,
    val utmMedium: String? = null,
    val utmSource: String? = null
            ) : Seller {

          

          

                override val eventName: String = "Consignor Estimator Result Generated"
                override val schemaVersion: Int = 1

                /** Secondary constructor with required fields only (for iOS compatibility) */
    constructor(category: String, selectedCategory: String, selectedCondition: String, selectedDesigner: String, selectedItemType: String, selectedOptionals: Map<String, Any>, selectedSubcategory: String) : this(category, selectedCategory, selectedCondition, selectedDesigner, selectedItemType, selectedOptionals, selectedSubcategory, null, null, null)

                override fun properties(): Map<String, Any?> =         buildMap {
            put("category", category)
put("selected_category", selectedCategory)
put("selected_condition", selectedCondition)
put("selected_designer", selectedDesigner)
put("selected_item_type", selectedItemType)
put("selected_optionals", selectedOptionals)
put("selected_subcategory", selectedSubcategory)
utmCampaign?.let { put("utm_campaign", it) }
utmMedium?.let { put("utm_medium", it) }
utmSource?.let { put("utm_source", it) }
            }

                override fun payload(): Map<String, Any?> = mapOf(
                    "event" to eventName,
                    "schema_version" to schemaVersion,
                    "properties" to properties()
                )
            }

            /**
             * Generated from JSON Schema (shared/schemas/seller/consignor_estimator_results/v1.json)
             * event="Consignor Estimator Results"
             */
            data class ConsignorEstimatorResultsV1(
                val category: String,
    val utmCampaign: String? = null,
    val utmMedium: String? = null,
    val utmSource: String? = null
            ) : Seller {

          

          

                override val eventName: String = "Consignor Estimator Results"
                override val schemaVersion: Int = 1

                /** Secondary constructor with required fields only (for iOS compatibility) */
    constructor(category: String) : this(category, null, null, null)

                override fun properties(): Map<String, Any?> =         buildMap {
            put("category", category)
utmCampaign?.let { put("utm_campaign", it) }
utmMedium?.let { put("utm_medium", it) }
utmSource?.let { put("utm_source", it) }
            }

                override fun payload(): Map<String, Any?> = mapOf(
                    "event" to eventName,
                    "schema_version" to schemaVersion,
                    "properties" to properties()
                )
            }

            /**
             * Generated from JSON Schema (shared/schemas/seller/edit_details_selected/v1.json)
             * event="Edit Details Selected"
             */
            data class EditDetailsSelectedV1(
                val category: String,
    val page: String,
    val utmCampaign: String? = null,
    val utmMedium: String? = null,
    val utmSource: String? = null
            ) : Seller {

          

          

                override val eventName: String = "Edit Details Selected"
                override val schemaVersion: Int = 1

                /** Secondary constructor with required fields only (for iOS compatibility) */
    constructor(category: String, page: String) : this(category, page, null, null, null)

                override fun properties(): Map<String, Any?> =         buildMap {
            put("category", category)
put("page", page)
utmCampaign?.let { put("utm_campaign", it) }
utmMedium?.let { put("utm_medium", it) }
utmSource?.let { put("utm_source", it) }
            }

                override fun payload(): Map<String, Any?> = mapOf(
                    "event" to eventName,
                    "schema_version" to schemaVersion,
                    "properties" to properties()
                )
            }

            /**
             * Generated from JSON Schema (shared/schemas/seller/feedback_submitted/v1.json)
             * event="Feedback Submitted"
             */
            data class FeedbackSubmittedV1(
                val featureName: String,
    val location: String,
    val comment: String? = null,
    val feedbackType: String? = null,
    val optionsSelected: List<String>? = null,
    val utmCampaign: String? = null,
    val utmMedium: String? = null,
    val utmSource: String? = null
            ) : Seller {

          

          

                override val eventName: String = "Feedback Submitted"
                override val schemaVersion: Int = 1

                /** Secondary constructor with required fields only (for iOS compatibility) */
    constructor(featureName: String, location: String) : this(featureName, location, null, null, null, null, null, null)

                override fun properties(): Map<String, Any?> =         buildMap {
            comment?.let { put("comment", it) }
put("feature_name", featureName)
feedbackType?.let { put("feedback_type", it) }
put("location", location)
optionsSelected?.let { put("options_selected", it) }
utmCampaign?.let { put("utm_campaign", it) }
utmMedium?.let { put("utm_medium", it) }
utmSource?.let { put("utm_source", it) }
            }

                override fun payload(): Map<String, Any?> = mapOf(
                    "event" to eventName,
                    "schema_version" to schemaVersion,
                    "properties" to properties()
                )
            }

            /**
             * Generated from JSON Schema (shared/schemas/seller/form_started/v1.json)
             * event="Form Started"
             */
            data class FormStartedV1(
                val category: String,
    val page: String,
    val type: String,
    val utmCampaign: String? = null,
    val utmMedium: String? = null,
    val utmSource: String? = null
            ) : Seller {

          

          

                override val eventName: String = "Form Started"
                override val schemaVersion: Int = 1

                /** Secondary constructor with required fields only (for iOS compatibility) */
    constructor(category: String, page: String, type: String) : this(category, page, type, null, null, null)

                override fun properties(): Map<String, Any?> =         buildMap {
            put("category", category)
put("page", page)
put("type", type)
utmCampaign?.let { put("utm_campaign", it) }
utmMedium?.let { put("utm_medium", it) }
utmSource?.let { put("utm_source", it) }
            }

                override fun payload(): Map<String, Any?> = mapOf(
                    "event" to eventName,
                    "schema_version" to schemaVersion,
                    "properties" to properties()
                )
            }

            /**
             * Generated from JSON Schema (shared/schemas/seller/form_submitted/v1.json)
             * event="Form Submitted"
             */
            data class FormSubmittedV1(
                val category: String,
    val email: String,
    val firstName: String,
    val lastName: String,
    val page: String,
    val phone: String,
    val postalCode: String,
    val type: String,
    val utmCampaign: String? = null,
    val utmMedium: String? = null,
    val utmSource: String? = null
            ) : Seller {

          

          

                override val eventName: String = "Form Submitted"
                override val schemaVersion: Int = 1

                /** Secondary constructor with required fields only (for iOS compatibility) */
    constructor(category: String, email: String, firstName: String, lastName: String, page: String, phone: String, postalCode: String, type: String) : this(category, email, firstName, lastName, page, phone, postalCode, type, null, null, null)

                override fun properties(): Map<String, Any?> =         buildMap {
            put("category", category)
put("email", email)
put("first_name", firstName)
put("last_name", lastName)
put("page", page)
put("phone", phone)
put("postal_code", postalCode)
put("type", type)
utmCampaign?.let { put("utm_campaign", it) }
utmMedium?.let { put("utm_medium", it) }
utmSource?.let { put("utm_source", it) }
            }

                override fun payload(): Map<String, Any?> = mapOf(
                    "event" to eventName,
                    "schema_version" to schemaVersion,
                    "properties" to properties()
                )
            }

            /**
             * Generated from JSON Schema (shared/schemas/seller/inquiry_created/v1.json)
             * event="Inquiry Created"
             */
            data class InquiryCreatedV1(
                val inquiryId: String,
    val repeatConsignor: Boolean,
    val feature: String? = null,
    val firstName: String? = null,
    val inquirySlug: String? = null,
    val lastName: String? = null,
    val leadEmail: String? = null,
    val leadSource: String? = null,
    val leadSubSource: String? = null,
    val loggedIn: Boolean? = null,
    val method: String? = null,
    val path: String? = null,
    val utmCampaign: String? = null,
    val utmMedium: String? = null,
    val utmSource: String? = null,
    val zipCode: String? = null
            ) : Seller {

          

          

                override val eventName: String = "Inquiry Created"
                override val schemaVersion: Int = 1

                /** Secondary constructor with required fields only (for iOS compatibility) */
    constructor(inquiryId: String, repeatConsignor: Boolean) : this(inquiryId, repeatConsignor, null, null, null, null, null, null, null, null, null, null, null, null, null, null)

                override fun properties(): Map<String, Any?> =         buildMap {
            feature?.let { put("feature", it) }
firstName?.let { put("first_name", it) }
put("inquiry_id", inquiryId)
inquirySlug?.let { put("inquiry_slug", it) }
lastName?.let { put("last_name", it) }
leadEmail?.let { put("lead_email", it) }
leadSource?.let { put("lead_source", it) }
leadSubSource?.let { put("lead_sub_source", it) }
loggedIn?.let { put("logged_in", it) }
method?.let { put("method", it) }
path?.let { put("path", it) }
put("repeat_consignor", repeatConsignor)
utmCampaign?.let { put("utm_campaign", it) }
utmMedium?.let { put("utm_medium", it) }
utmSource?.let { put("utm_source", it) }
zipCode?.let { put("zip_code", it) }
            }

                override fun payload(): Map<String, Any?> = mapOf(
                    "event" to eventName,
                    "schema_version" to schemaVersion,
                    "properties" to properties()
                )
            }

            /**
             * Generated from JSON Schema (shared/schemas/seller/lead_form_viewed/v1.json)
             * event="Lead Form Viewed"
             */
            data class LeadFormViewedV1(
                val category: String,
    val page: String,
    val utmCampaign: String? = null,
    val utmMedium: String? = null,
    val utmSource: String? = null
            ) : Seller {

          

          

                override val eventName: String = "Lead Form Viewed"
                override val schemaVersion: Int = 1

                /** Secondary constructor with required fields only (for iOS compatibility) */
    constructor(category: String, page: String) : this(category, page, null, null, null)

                override fun properties(): Map<String, Any?> =         buildMap {
            put("category", category)
put("page", page)
utmCampaign?.let { put("utm_campaign", it) }
utmMedium?.let { put("utm_medium", it) }
utmSource?.let { put("utm_source", it) }
            }

                override fun payload(): Map<String, Any?> = mapOf(
                    "event" to eventName,
                    "schema_version" to schemaVersion,
                    "properties" to properties()
                )
            }

            /**
             * Generated from JSON Schema (shared/schemas/seller/new_search_selected/v1.json)
             * event="New Search Selected"
             */
            data class NewSearchSelectedV1(
                val category: String,
    val page: String,
    val utmCampaign: String? = null,
    val utmMedium: String? = null,
    val utmSource: String? = null
            ) : Seller {

          

          

                override val eventName: String = "New Search Selected"
                override val schemaVersion: Int = 1

                /** Secondary constructor with required fields only (for iOS compatibility) */
    constructor(category: String, page: String) : this(category, page, null, null, null)

                override fun properties(): Map<String, Any?> =         buildMap {
            put("category", category)
put("page", page)
utmCampaign?.let { put("utm_campaign", it) }
utmMedium?.let { put("utm_medium", it) }
utmSource?.let { put("utm_source", it) }
            }

                override fun payload(): Map<String, Any?> = mapOf(
                    "event" to eventName,
                    "schema_version" to schemaVersion,
                    "properties" to properties()
                )
            }

            /**
             * Generated from JSON Schema (shared/schemas/seller/server_error/v1.json)
             * event="Server Error"
             */
            data class ServerErrorV1(
                val category: String,
    val error: String,
    val page: String,
    val type: String,
    val utmCampaign: String? = null,
    val utmMedium: String? = null,
    val utmSource: String? = null
            ) : Seller {

          

          

                override val eventName: String = "Server Error"
                override val schemaVersion: Int = 1

                /** Secondary constructor with required fields only (for iOS compatibility) */
    constructor(category: String, error: String, page: String, type: String) : this(category, error, page, type, null, null, null)

                override fun properties(): Map<String, Any?> =         buildMap {
            put("category", category)
put("error", error)
put("page", page)
put("type", type)
utmCampaign?.let { put("utm_campaign", it) }
utmMedium?.let { put("utm_medium", it) }
utmSource?.let { put("utm_source", it) }
            }

                override fun payload(): Map<String, Any?> = mapOf(
                    "event" to eventName,
                    "schema_version" to schemaVersion,
                    "properties" to properties()
                )
            }

            /**
             * Generated from JSON Schema (shared/schemas/seller/server_error/v2.json)
             * event="Server Error"
             */
            data class ServerErrorV2(
                val category: String,
    val error: String,
    val page: String,
    val type: String,
    val utmCampaign: String? = null,
    val utmMedium: String? = null,
    val utmSource: String? = null
            ) : Seller {

          

          

                override val eventName: String = "Server Error"
                override val schemaVersion: Int = 2

                /** Secondary constructor with required fields only (for iOS compatibility) */
    constructor(category: String, error: String, page: String, type: String) : this(category, error, page, type, null, null, null)

                override fun properties(): Map<String, Any?> =         buildMap {
            put("category", category)
put("error", error)
put("page", page)
put("type", type)
utmCampaign?.let { put("utm_campaign", it) }
utmMedium?.let { put("utm_medium", it) }
utmSource?.let { put("utm_source", it) }
            }

                override fun payload(): Map<String, Any?> = mapOf(
                    "event" to eventName,
                    "schema_version" to schemaVersion,
                    "properties" to properties()
                )
            }

            /**
             * Generated from JSON Schema (shared/schemas/seller/view_selling_options_clicked/v1.json)
             * event="View Selling Options Clicked"
             */
            data class ViewSellingOptionsClickedV1(
                val category: String,
    val page: String,
    val utmCampaign: String? = null,
    val utmMedium: String? = null,
    val utmSource: String? = null
            ) : Seller {

          

          

                override val eventName: String = "View Selling Options Clicked"
                override val schemaVersion: Int = 1

                /** Secondary constructor with required fields only (for iOS compatibility) */
    constructor(category: String, page: String) : this(category, page, null, null, null)

                override fun properties(): Map<String, Any?> =         buildMap {
            put("category", category)
put("page", page)
utmCampaign?.let { put("utm_campaign", it) }
utmMedium?.let { put("utm_medium", it) }
utmSource?.let { put("utm_source", it) }
            }

                override fun payload(): Map<String, Any?> = mapOf(
                    "event" to eventName,
                    "schema_version" to schemaVersion,
                    "properties" to properties()
                )
            }
          }
