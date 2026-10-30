/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern void *Pes6Ball_Current;
extern char D_00591BE4[];
extern char D_00591E19[];
extern char D_00591E4C[];
extern char D_005E3A94[];

void func_0080C940(void *arg0) {
    if (((*(u8 *)D_00591E19) == M2C_FIELD(arg0, s32 *, 8)) && (M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) == 3)) {
        M2C_FIELD(arg0, f32 *, 0x48) = 1.0f;
    }
    if (((*(u8 *)D_00591E19) == M2C_FIELD(arg0, s32 *, 0xC)) && (M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) == 4)) {
        M2C_FIELD(arg0, f32 *, 0x54) = 1.0f;
    }
    if ((M2C_FIELD(arg0, f32 *, 0x48) != 0.0f) && (M2C_FIELD(arg0, f32 *, 0x54) != 0.0f) && ((*(s32 *)D_005E3A94) != 0)) {
        M2C_FIELD(arg0, s32 *, 0x4C) = 0x3F800000;
    }
    if (((*(u8 *)D_00591E4C) == M2C_FIELD(arg0, s32 *, 0xC)) || (M2C_FIELD(arg0, f32 *, 0x5C) != 0.0f)) {
        M2C_FIELD(arg0, s32 *, 0x50) = 0x3F800000;
    }
    if ((M2C_FIELD(arg0, f32 *, 0x60) != 0.0f) && (M2C_FIELD(Pes6Ball_Current, f32 *, 0x14) == -28.0f)) {
        M2C_FIELD(arg0, f32 *, 0x58) = 1.0f;
    }
    if ((M2C_FIELD(arg0, f32 *, 0x48) != 0.0f) && (M2C_FIELD(Pes6Ball_Current, f32 *, 0x14) != -28.0f)) {
        M2C_FIELD(arg0, f32 *, 0x60) = 1.0f;
    }
    if (M2C_FIELD(arg0, f32 *, 0x58) == 0.0f) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + 1);
    }
    if (M2C_FIELD(arg0, s32 *, 0x20) >= (s32) (*(u8 *)D_00591BE4)) {
        M2C_FIELD(arg0, f32 *, 0x5C) = 1.0f;
    }
}
