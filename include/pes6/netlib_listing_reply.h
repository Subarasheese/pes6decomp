#ifndef PES6_NETLIB_LISTING_REPLY_H
#define PES6_NETLIB_LISTING_REPLY_H

#include "pes6/netlib_packet.h"

typedef struct {
    s32 id, value04, value08;
    char name[65];
    s8 field4D;
    s16 field4E;
    char text50[6];
    s8 field56, reserved57;
    s16 field58;
    s8 field5A, field5B, field5C;
    u8 reserved5D[3];
} NetlibListingRow;

typedef struct {
    u16 count, reserved02;
    NetlibListingRow rows[20];
} NetlibListing;

extern s32 func_00873EB0(void *packet);
extern s32 func_00873EE0(void *packet, void *dst, s32 size);
extern s32 func_00874090(void *packet, s16 *value);
extern void *func_001C48E8(void *dst, s32 value, u32 size);

#endif
