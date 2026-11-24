#ifndef PES6_PAIRED_PLAYER_ACTION_H
#define PES6_PAIRED_PLAYER_ACTION_H

#include "pes6/heading_motion.h"

typedef HeadingMotion PairedPlayback;
typedef struct {
    u8 id, pad01[3];
    PairedPlayback *playback;
    u8 pad08[0x10];
    s16 action;
    u16 previousAction;
    u8 pad1c[10];
    u16 heading, previousHeading;
    u8 pad2a[0x24];
    u8 repeats;
    u8 pad4f, field50;
    u8 pad51[0x11];
    u8 field62;
    u8 pad63[3];
    u8 actionGroup;
    u8 pad67[5];
    float aimX, aimZ;
    u8 pad74[0x6c];
    float x, y, z;
} PairedActor;
typedef struct {
    s32 state;
    u8 pad04[2];
    s16 countdown;
    u8 pad08[6];
    u8 flag0e;
    u8 pad0f[3];
    u8 mode12;
    u8 pad13[0x21];
    u32 distance;
    u32 value38;
    u8 pad3c[8];
    s8 triggers[3];
    u8 pad47[5];
    u8 command;      /* 0x4c: selector for the next paired action */
    u8 pad4d[3];
    u8 enabled;
    u8 alternate;    /* 0x51 */
    u8 ready;        /* 0x52 */
    u8 pad53;
    u8 patternId;    /* 0x54 */
} PairedControl;
typedef struct {
    PairedActor *actor;
    PairedControl *control;
} PairedContext;
extern u32 func_00BF6270(void);
extern s32 func_00B364C0(void);
extern PairedContext *func_00B2A420(u32 player);
extern void func_00BD3CF0(PairedContext *, float, float);
extern s32 func_00B3B1F0(PairedContext *);
extern void func_0027A600(PairedActor *, s32);
extern void func_00207390(PairedPlayback *, s32);
extern void func_00B84330(PairedContext *, s32, u16, s32, u16, s32);
extern void func_00B89C70(PairedContext *);
extern void func_00B93E50(PairedContext *, s32);
extern u8 D_00CBCAD1[], D_00CBCD81[], D_00CBCD8C[];
extern u16 D_00CBCD74[], D_00CBCD72[], D_00CBCD70[], D_00CBCAFE[];
static inline void adjust_paired_speed(PairedContext *ctx) {
    s32 speed;
    switch (D_00CBCAD1[0]) {
    default:
        speed = 0xC00;
        break;
    case 8:
        speed = 0xA00;
        break;
    case 7:
        speed = 0xA00;
        break;
    case 9:
        speed = 0xC00;
        break;
    case 6:
        speed = 0xC00;
        break;
    }
    func_00B93E50(ctx, speed);
}

#endif
