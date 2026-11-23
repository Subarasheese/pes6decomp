#ifndef PES6_NET_MD5_H
#define PES6_NET_MD5_H
#include "types.h"
typedef struct {
    u32 state[4], count[2];
    u8 buffer[64];
} NetMd5Context;
void func_00872B00(u32 state[4], const u8 block[64]);
void func_00873A70(u8 digest[16], NetMd5Context *context);
void func_00873BB0(NetMd5Context *context, const u8 *input, u32 inputLen);
void func_00873CB0(NetMd5Context *context);
#endif
