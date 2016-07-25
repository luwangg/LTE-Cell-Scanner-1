/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_MeasurementReport_r8_IEs_H_
#define	_MeasurementReport_r8_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasResults.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasurementReport_v8a0_IEs;

/* MeasurementReport-r8-IEs */
typedef struct MeasurementReport_r8_IEs {
	MeasResults_t	 measResults;
	struct MeasurementReport_v8a0_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementReport_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementReport_r8_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasurementReport-v8a0-IEs.h"

#endif	/* _MeasurementReport_r8_IEs_H_ */
#include <asn_internal.h>
