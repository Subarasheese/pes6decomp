#ifndef PES6_NETLIB_DIRECTORY_PAGE_H
#define PES6_NETLIB_DIRECTORY_PAGE_H

#include "pes6/netlib_packet.h"

typedef struct {
    s32 id, value04;
    char name[33];
    u8 reserved29;
    s16 field2A;
    char text2C[16];
    s16 field3C, field3E;
} NetlibDirectoryRow;

typedef struct {
    s32 count;
    NetlibDirectoryRow rows[200];
} NetlibDirectoryPage;

extern void *func_001C48E8(void *dst, s32 value, u32 size);
extern s32 func_00873EB0(void *packet);
extern s32 func_00873EE0(void *packet, void *dst, s32 size);
extern s32 func_00874040(void *packet, s16 *value);
extern s32 func_00874090(void *packet, s16 *value);

#endif
