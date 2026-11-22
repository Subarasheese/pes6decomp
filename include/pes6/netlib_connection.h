#ifndef PES6_NETLIB_CONNECTION_H
#define PES6_NETLIB_CONNECTION_H

#include "pes6/netlib_packet.h"

/* Partial layout of the connection used by the incoming message handlers.
 * Each receive slot holds one 0x480-byte packet. */
typedef struct {
    u8 pad0000[0x158];
    s32 pending;
    u8 pad015C[0x3684];
    NetlibPacket *packets;
    u8 pad37E4[0x104c];
    s32 error;
    u8 pad4834[0x34];
    u8 *session;
    u8 pad486C[0x17c];
    u8 *request;
    u8 field49EC[0x1a0];
    u8 field4B8C[0x28];
    u8 *channel;
    s32 channelResult;
    u8 pad4BBC[0xb5e8];
    u8 field101A4[0x3];
    u8 field101A7[0x3805];
    u8 field139AC[0xe3c];
    u8 field147E8[0x810];
    u8 field14FF8[0x2c6];
    u8 field152BE[0x21];
    u8 field152DF[0xd5];
    u8 field153B4[0x25];
    u8 field153D9[0x3];
    u8 field153DC[0x1f0];
    u8 field155CC[0x2c];
    u8 field155F8[0x820];
    u8 field15E18[0x300];
    u8 field16118[0x2c];
    u8 extension[];
} NetlibConnection;

extern void * func_001C48E8(void *, s32, u32);
extern s32 func_0085F4E0(NetlibConnection *, NetlibPacket *);
extern s32 func_0085F780(NetlibConnection *, NetlibPacket *);
extern s32 func_0085F890(NetlibConnection *, NetlibPacket *);
extern s32 func_0085FE30(NetlibConnection *, NetlibPacket *);
extern s32 func_00860C80(NetlibConnection *, NetlibPacket *);
extern s32 func_008611C0(NetlibConnection *, NetlibPacket *);
extern s32 func_00861F40(NetlibConnection *, NetlibPacket *, s32);
extern s32 func_00862040(NetlibConnection *, NetlibPacket *);
extern s32 func_00866820(NetlibPacket *, void *);
extern s32 func_008668A0(NetlibPacket *, void *);
extern s32 func_00866970(NetlibPacket *, void *);
extern s32 func_00866C00(NetlibPacket *, void *);
extern s32 func_00866D00(NetlibPacket *, void *);
extern s32 func_00867250(NetlibPacket *, void *, void *, void *);
extern s32 func_008672B0(NetlibPacket *, void *, void *);
extern s32 func_00867570(NetlibPacket *, void *, void *);
extern s32 func_00867670(NetlibPacket *, void *, void *);
extern s32 func_00867B10(NetlibPacket *, void *, void *, void *);
extern s32 func_0086A980(NetlibPacket *, void *, void *);
extern s32 func_0086AAC0(NetlibPacket *, void *, void *, void *, void *, void *, void *);
extern s32 func_0086AE00(NetlibPacket *, void *);
extern s32 func_0086AE80(NetlibPacket *, void *);
extern s32 func_0086AF60(NetlibPacket *, void *);
extern s32 func_00871A80(NetlibPacket *, void *);
extern s32 func_00875F60(NetlibPacket *, void *);
extern s32 func_00876030(NetlibPacket *, void *);
extern s32 func_008760B0(NetlibPacket *, void *, void *);
extern s32 func_00876140(NetlibPacket *, void *);
extern s32 func_00876230(NetlibPacket *, void *);
extern s32 func_00876320(NetlibPacket *, void *);
extern s32 func_00876440(NetlibPacket *, void *);
extern s32 func_00876530(NetlibPacket *, void *);
extern s32 func_00876620(NetlibPacket *, void *, void *);
extern s32 func_008766E0(NetlibPacket *, void *);
extern s32 func_008767C0(NetlibPacket *, void *);
extern s32 func_00876840(NetlibPacket *, void *);
extern s32 func_00876920(NetlibPacket *, void *);
extern s32 func_00876A30(NetlibPacket *, void *);
extern s32 func_00876C20(NetlibPacket *, void *, void *);
extern s32 func_00876D80(NetlibPacket *, void *, void *);
extern s32 func_00876FB0(NetlibPacket *, void *);
extern s32 func_00877090(NetlibPacket *, void *);
extern s32 func_00877290(NetlibPacket *, void *);
extern s32 func_00877430(NetlibPacket *, void *, void *);

#endif
