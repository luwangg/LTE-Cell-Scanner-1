/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_CSFBParametersResponseCDMA2000_r8_IEs_H_
#define	_CSFBParametersResponseCDMA2000_r8_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RAND-CDMA2000.h"
#include "MobilityParametersCDMA2000.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CSFBParametersResponseCDMA2000_v8a0_IEs;

/* CSFBParametersResponseCDMA2000-r8-IEs */
typedef struct CSFBParametersResponseCDMA2000_r8_IEs {
	RAND_CDMA2000_t	 rand;
	MobilityParametersCDMA2000_t	 mobilityParameters;
	struct CSFBParametersResponseCDMA2000_v8a0_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSFBParametersResponseCDMA2000_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSFBParametersResponseCDMA2000_r8_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CSFBParametersResponseCDMA2000-v8a0-IEs.h"

#endif	/* _CSFBParametersResponseCDMA2000_r8_IEs_H_ */
#include <asn_internal.h>
