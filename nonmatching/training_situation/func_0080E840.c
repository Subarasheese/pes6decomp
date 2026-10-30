/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern void *Pes6Ball_Current;
extern char D_00591BE4[];
extern char D_00591E4C[];

void func_0080E840(void *arg0) {
    f32 var_f0;

    if ((M2C_FIELD(Pes6Ball_Current, s32 *, 0x74) >= 0x800) && (M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) == 4) && (M2C_FIELD(arg0, f32 *, 0x48) == 0.0f) && (M2C_FIELD(arg0, f32 *, 0x50) == 0.0f)) {
        M2C_FIELD(arg0, f32 *, 0x48) = 1.0f;
    }
    if (((M2C_FIELD(Pes6Ball_Current, s32 *, 0x74) < 0x800) && (M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) == 4)) || ((*(u8 *)D_00591E4C) == M2C_FIELD(arg0, s32 *, 0xC))) {
        M2C_FIELD(arg0, f32 *, 0x50) = 1.0f;
    }
    if ((M2C_FIELD(arg0, f32 *, 0x48) != 0.0f) || (M2C_FIELD(arg0, f32 *, 0x50) != 0.0f)) {
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + 1);
    }
    if ((s32) (*(u8 *)D_00591BE4) >= 0) {
        var_f0 = (f32) (*(u8 *)D_00591BE4);
    } else {
        var_f0 = 2.0f * (f32) (((u8) (*(u8 *)D_00591BE4) >> 1) | ((*(u8 *)D_00591BE4) & 1));
    }
    if (!((f32) M2C_FIELD(arg0, s32 *, 0x20) <= (0.5f * var_f0))) {
        M2C_FIELD(arg0, s32 *, 0x54) = 0x3F800000;
    }
}
