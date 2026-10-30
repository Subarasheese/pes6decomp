/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *Pes6Ball_Current;
extern char D_00591BE4[];
extern char D_00591E19[];
extern char D_00591E4C[];

void func_0080E580(void *arg0) {
    f32 var_f0;
    u16 temp_a1;

    if (((*(u8 *)D_00591E4C) == M2C_FIELD(arg0, s32 *, 0xC)) && ((temp_a1 = M2C_FIELD(Pes6Ball_Current, u16 *, 0x84), (temp_a1 == 5)) || (temp_a1 == 0))) {
        M2C_FIELD(arg0, f32 *, 0x48) = 1.0f;
    }
    if ((M2C_FIELD(arg0, f32 *, 0x48) != 0.0f) && ((*(u8 *)D_00591E4C) == M2C_FIELD(arg0, s32 *, 0xC))) {
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + 1);
    }
    if ((M2C_FIELD(arg0, f32 *, 0x48) != 0.0f) && ((*(u8 *)D_00591E4C) == M2C_FIELD(arg0, s32 *, 0xC))) {
        if ((s32) (*(u8 *)D_00591BE4) >= 0) {
            var_f0 = (f32) (*(u8 *)D_00591BE4);
        } else {
            var_f0 = 2.0f * (f32) (((u8) (*(u8 *)D_00591BE4) >> 1) | ((*(u8 *)D_00591BE4) & 1));
        }
        if (!((f32) M2C_FIELD(arg0, s32 *, 0x20) <= var_f0)) {
            M2C_FIELD(arg0, s32 *, 0x4C) = 0x3F800000;
        }
    }
    if (((*(u8 *)D_00591E4C) == M2C_FIELD(arg0, s32 *, 0x10)) || (((*(u8 *)D_00591E19) == M2C_FIELD(arg0, s32 *, 0xC)) && ((u32) (M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) - 1) < 3U))) {
        M2C_FIELD(arg0, s32 *, 0x50) = 0x3F800000;
    }
}
