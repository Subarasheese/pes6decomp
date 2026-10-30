/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *Pes6Ball_Current;
extern char D_00591E19[];
extern char D_00591E4C[];
extern char D_005E3A94[];

void func_0080D890(void *arg0) {
    if (((*(s32 *)D_005E3A94) != 0) && (M2C_FIELD(arg0, f32 *, 0x4C) == 0.0f) && (M2C_FIELD(arg0, f32 *, 0x48) != 0.0f)) {
        M2C_FIELD(arg0, f32 *, 0x4C) = 1.0f;
    }
    if (((*(u8 *)D_00591E19) == M2C_FIELD(arg0, s32 *, 8)) && (M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) == 4) && (M2C_FIELD(arg0, f32 *, 0x48) == 0.0f)) {
        M2C_FIELD(arg0, f32 *, 0x48) = 1.0f;
    }
    if ((M2C_FIELD(arg0, f32 *, 0x48) != 0.0f) && ((*(u8 *)D_00591E4C) == M2C_FIELD(arg0, s32 *, 8))) {
        M2C_FIELD(arg0, f32 *, 0x48) = 0.0f;
    }
}
