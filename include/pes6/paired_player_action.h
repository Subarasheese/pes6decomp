#ifndef PES6_PAIRED_PLAYER_ACTION_H
#define PES6_PAIRED_PLAYER_ACTION_H

#include "types.h"
typedef struct {
    u8 pad00[0x2d];
    u8 mirrored;
    u8 pad2e[2];
    u16 clip;
} PairedPlayback;
typedef struct {
    u8 pad00[4];
    PairedPlayback *playback;
    u8 pad08[0x10];
    s16 action;
    u16 previousAction;
    u8 pad1c[10];
    u16 heading, previousHeading;
    u8 pad2a[0x24];
    u8 repeats;
    u8 pad4f[0x17];
    u8 actionGroup;
    u8 pad67[5];
    float aimX, aimZ;
} PairedActor;
typedef struct {
    u8 pad00[6];
    s16 countdown;
    u8 pad08[6];
    u8 flag0e;
    u8 pad0f[0x35];
    s8 triggers[3];
    u8 pad47[9];
    u8 enabled;
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
extern void func_00209A00(PairedPlayback *, s32, s32);
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
