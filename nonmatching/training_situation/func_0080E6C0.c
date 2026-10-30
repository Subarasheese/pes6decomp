/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern void *Pes6Ball_Current;
extern char D_00591E19[];
extern char D_00591E4C[];
extern char D_005E3A94[];
extern char D_00CB62B8[];

void func_0080E6C0(void *arg0) {
    if (((*(s32 *)D_00CB62B8) & 0x200) && ((*(s32 *)D_00CB62B8) & 0x800)) {
        M2C_FIELD(arg0, f32 *, 0x48) = 1.0f;
    }
    if ((M2C_FIELD(arg0, f32 *, 0x48) != 0.0f) && ((*(u8 *)D_00591E19) == M2C_FIELD(arg0, s32 *, 8)) && (M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) == 4)) {
        M2C_FIELD(arg0, f32 *, 0x4C) = 1.0f;
    }
    if (((*(s32 *)D_005E3A94) != 0) && (M2C_FIELD(arg0, f32 *, 0x4C) != 0.0f)) {
        M2C_FIELD(arg0, s32 *, 0x50) = 0x3F800000;
    }
    if ((M2C_FIELD(arg0, f32 *, 0x4C) == 0.0f) && (M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) != 4) && ((*(u8 *)D_00591E19) == M2C_FIELD(arg0, s32 *, 8))) {
        M2C_FIELD(arg0, s32 *, 0x54) = 0x3F800000;
    }
    if ((M2C_FIELD(arg0, f32 *, 0x4C) != 0.0f) && (M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) != 4)) {
        M2C_FIELD(arg0, f32 *, 0x58) = 1.0f;
    }
    if ((M2C_FIELD(arg0, f32 *, 0x58) != 0.0f) && (M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) == 4)) {
        M2C_FIELD(arg0, s32 *, 0x54) = 0x3F800000;
    }
    if ((*(u8 *)D_00591E4C) == M2C_FIELD(arg0, s32 *, 8)) {
        M2C_FIELD(arg0, s32 *, 0x54) = 0x3F800000;
    }
}
