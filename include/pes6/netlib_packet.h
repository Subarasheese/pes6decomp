#ifndef PES6_NETLIB_PACKET_H
#define PES6_NETLIB_PACKET_H

#include "types.h"

/* The tag is the first word. Senders reserve 0x480 bytes on the stack. */
typedef struct {
    s32 tag;
    u8 payload_storage[0x480 - sizeof(s32)];
} NetlibPacket;

enum {
    NETLIB_INVALID_ARGUMENT = -24,
    NETLIB_SEND_FAILED = -61,
    NETLIB_UNEXPECTED_TAG = -70
};

extern void func_00874470(void *);
extern void func_00874460(void *);
extern s32 func_00873FD0(void *, s32 *);
extern s32 func_00873F60(void *, s32 *);
extern s32 func_00874120(void *, s8 *);
extern void func_008744F0(void *);
extern void func_008744A0(void *, s32);
extern s32 func_00874240(void *, const s32 *);
extern s32 func_008743E0(void *, const u8 *);
extern s32 func_00874420(void *, const s8 *);
extern void func_00874480(void *);
extern s32 func_0085F2A0(void *, void *);

static inline void netlib_begin_packet(NetlibPacket *packet, s32 tag) {
    func_008744F0(packet);
    func_008744A0(packet, tag);
}

static inline s32 netlib_send_packet(NetlibPacket *packet, void *connection) {
    func_00874480(packet);
    return func_0085F2A0(packet, connection) ? NETLIB_SEND_FAILED : 0;
}

#endif
