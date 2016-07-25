/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "MBMS-SessionInfo-r9.h"

static int
memb_sessionId_r9_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_logicalChannelIdentity_r9_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 28)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_sessionId_r9_constr_3 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  1,  1 }	/* (SIZE(1..1)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_logicalChannelIdentity_r9_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  28 }	/* (0..28) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_MBMS_SessionInfo_r9_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_SessionInfo_r9, tmgi_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TMGI_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tmgi-r9"
		},
	{ ATF_POINTER, 1, offsetof(struct MBMS_SessionInfo_r9, sessionId_r9),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		memb_sessionId_r9_constraint_1,
		&asn_PER_memb_sessionId_r9_constr_3,
		0,
		"sessionId-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_SessionInfo_r9, logicalChannelIdentity_r9),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_logicalChannelIdentity_r9_constraint_1,
		&asn_PER_memb_logicalChannelIdentity_r9_constr_4,
		0,
		"logicalChannelIdentity-r9"
		},
};
static int asn_MAP_MBMS_SessionInfo_r9_oms_1[] = { 1 };
static ber_tlv_tag_t asn_DEF_MBMS_SessionInfo_r9_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MBMS_SessionInfo_r9_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tmgi-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sessionId-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* logicalChannelIdentity-r9 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MBMS_SessionInfo_r9_specs_1 = {
	sizeof(struct MBMS_SessionInfo_r9),
	offsetof(struct MBMS_SessionInfo_r9, _asn_ctx),
	asn_MAP_MBMS_SessionInfo_r9_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_MBMS_SessionInfo_r9_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MBMS_SessionInfo_r9 = {
	"MBMS-SessionInfo-r9",
	"MBMS-SessionInfo-r9",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_MBMS_SessionInfo_r9_tags_1,
	sizeof(asn_DEF_MBMS_SessionInfo_r9_tags_1)
		/sizeof(asn_DEF_MBMS_SessionInfo_r9_tags_1[0]), /* 1 */
	asn_DEF_MBMS_SessionInfo_r9_tags_1,	/* Same as above */
	sizeof(asn_DEF_MBMS_SessionInfo_r9_tags_1)
		/sizeof(asn_DEF_MBMS_SessionInfo_r9_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MBMS_SessionInfo_r9_1,
	3,	/* Elements count */
	&asn_SPC_MBMS_SessionInfo_r9_specs_1	/* Additional specs */
};

