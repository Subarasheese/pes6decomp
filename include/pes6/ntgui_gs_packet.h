#ifndef PES6_NTGUI_GS_PACKET_H
#define PES6_NTGUI_GS_PACKET_H

#include "types.h"

typedef struct {
    u64 payload, reg;
} GsCommand;
typedef union {
    u8 bytes[0x8000];
    struct {
        u8 reserved[0x4ec];
        s32 page;
    } selection;
    struct {
        u8 reserved[0x910];
        GsCommand *packet[2];
    } buffers;
} GsWidget;
extern void func_00189AD0(GsCommand *tag, s32 count);
extern void func_0018A148(GsCommand *command, s32 reg, ...);
extern u32 D_005C5994[];

#endif
