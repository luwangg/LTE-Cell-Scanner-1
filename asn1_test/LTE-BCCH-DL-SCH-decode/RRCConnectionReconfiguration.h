/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_RRCConnectionReconfiguration_H_
#define	_RRCConnectionReconfiguration_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "RRCConnectionReconfiguration-r8-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionReconfiguration__criticalExtensions_PR {
	RRCConnectionReconfiguration__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCConnectionReconfiguration__criticalExtensions_PR_c1,
	RRCConnectionReconfiguration__criticalExtensions_PR_criticalExtensionsFuture
} RRCConnectionReconfiguration__criticalExtensions_PR;
typedef enum RRCConnectionReconfiguration__criticalExtensions__c1_PR {
	RRCConnectionReconfiguration__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	RRCConnectionReconfiguration__criticalExtensions__c1_PR_rrcConnectionReconfiguration_r8,
	RRCConnectionReconfiguration__criticalExtensions__c1_PR_spare7,
	RRCConnectionReconfiguration__criticalExtensions__c1_PR_spare6,
	RRCConnectionReconfiguration__criticalExtensions__c1_PR_spare5,
	RRCConnectionReconfiguration__criticalExtensions__c1_PR_spare4,
	RRCConnectionReconfiguration__criticalExtensions__c1_PR_spare3,
	RRCConnectionReconfiguration__criticalExtensions__c1_PR_spare2,
	RRCConnectionReconfiguration__criticalExtensions__c1_PR_spare1
} RRCConnectionReconfiguration__criticalExtensions__c1_PR;

/* RRCConnectionReconfiguration */
typedef struct RRCConnectionReconfiguration {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct RRCConnectionReconfiguration__criticalExtensions {
		RRCConnectionReconfiguration__criticalExtensions_PR present;
		union RRCConnectionReconfiguration__criticalExtensions_u {
			struct RRCConnectionReconfiguration__criticalExtensions__c1 {
				RRCConnectionReconfiguration__criticalExtensions__c1_PR present;
				union RRCConnectionReconfiguration__criticalExtensions__c1_u {
					RRCConnectionReconfiguration_r8_IEs_t	 rrcConnectionReconfiguration_r8;
					NULL_t	 spare7;
					NULL_t	 spare6;
					NULL_t	 spare5;
					NULL_t	 spare4;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct RRCConnectionReconfiguration__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReconfiguration_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReconfiguration;

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReconfiguration_H_ */
#include <asn_internal.h>
