/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-850.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_InterFreqBlackCellInfo_H_
#define	_InterFreqBlackCellInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PhysCellIdRange.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* InterFreqBlackCellInfo */
typedef struct InterFreqBlackCellInfo {
	PhysCellIdRange_t	 physCellIdRange;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqBlackCellInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqBlackCellInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _InterFreqBlackCellInfo_H_ */
#include <asn_internal.h>
