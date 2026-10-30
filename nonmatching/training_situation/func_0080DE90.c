/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *Pes6Ball_Current;
extern char D_00591E19[];
extern char D_00591E1A[];
extern char D_00591E4C[];
extern char D_005E3A94[];
extern char D_00CB62B8[];

void func_0080DE90(void *arg0) {
    s32 temp_a2;
    u16 temp_a1;
    u16 temp_a1_2;

    if ((M2C_FIELD(arg0, f32 *, 0x48) == 0.0f) && (M2C_FIELD(arg0, f32 *, 0x4C) == 0.0f) && ((*(u8 *)D_00591E19) == M2C_FIELD(arg0, s32 *, 8)) && ((temp_a1 = M2C_FIELD(Pes6Ball_Current, u16 *, 0x84), (temp_a1 == 5)) || (temp_a1 == 0))) {
        if (!((*(s32 *)D_00CB62B8) & 0x800)) {
            M2C_FIELD(arg0, f32 *, 0x48) = 1.0f;
        } else {
            M2C_FIELD(arg0, f32 *, 0x4C) = 1.0f;
        }
    }
    if ((M2C_FIELD(arg0, f32 *, 0x48) != 0.0f) && ((*(s32 *)D_005E3A94) != 0) && ((temp_a2 = M2C_FIELD(arg0, s32 *, 8), ((*(u8 *)D_00591E19) == temp_a2)) || (((*(u8 *)D_00591E19) == 0xC) && ((*(u8 *)D_00591E1A) == temp_a2)))) {
        M2C_FIELD(arg0, s32 *, 0x50) = 0x3F800000;
    }
    if (((*(u8 *)D_00591E19) == M2C_FIELD(arg0, s32 *, 8)) && ((temp_a1_2 = M2C_FIELD(Pes6Ball_Current, u16 *, 0x84), (temp_a1_2 == 2)) || (temp_a1_2 == 1) || (temp_a1_2 == 3) || ((M2C_FIELD(arg0, f32 *, 0x48) == 0.0f) && (temp_a1_2 == 4)))) {
        M2C_FIELD(arg0, s32 *, 0x54) = 0x3F800000;
    }
    if ((M2C_FIELD(arg0, f32 *, 0x58) != 0.0f) && ((*(u8 *)D_00591E4C) != M2C_FIELD(arg0, s32 *, 8)) && ((*(u8 *)D_00591E4C) != 0)) {
        M2C_FIELD(arg0, s32 *, 0x54) = 0x3F800000;
    }
    if ((M2C_FIELD(arg0, f32 *, 0x58) != 0.0f) && ((*(u8 *)D_00591E19) != M2C_FIELD(arg0, s32 *, 8)) && ((u32) (M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) - 1) < 3U)) {
        M2C_FIELD(arg0, s32 *, 0x54) = 0x3F800000;
    }
    if (((*(u8 *)D_00591E19) == M2C_FIELD(arg0, s32 *, 0xC)) && (M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) == 1)) {
        M2C_FIELD(arg0, f32 *, 0x5C) = 1.0f;
    }
    if ((M2C_FIELD(arg0, f32 *, 0x5C) != 0.0f) && (M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) != 1)) {
        M2C_FIELD(arg0, f32 *, 0x58) = 1.0f;
    }
}
