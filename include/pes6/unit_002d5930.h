#ifndef PES6_UNIT_002D5930_H
#define PES6_UNIT_002D5930_H

#include "types.h"

/* Fields used by the callback transition routines; unknown bytes retain their offsets. */
typedef void (*UpdateCallback)(void);
struct TransitionState {
    u8 initialized;
    u8 enabled;
    u8 pad02[2];
    s32 entries[12];
    UpdateCallback update;
    u8 pad38[0x14];
    s32 defaults[3];
    s32 counter;
    u8 pad5C[4];
};
extern struct TransitionState *D_003E7614;
extern u8 D_0092F0FC[];
extern u8 D_0092F0FF[];
extern u8 D_00591BE4[];
extern s32 func_002D33C0(s32);
extern void func_002D33D0(s32, s32);
extern void func_002D33E0(s32,s32,s32,s32);
extern void func_0026E840(u32);
extern s32 func_00151EA0(s32);
extern s32 func_0090F1F0(void);
extern void func_002D5C30(void);
extern void func_002D5CE0(void);
extern void func_002D5DF0(void);
extern void func_002D5E90(void);
extern void func_002D5F50(void);
extern void func_002D6090(void);
extern void func_002D61A0(void);

#endif
