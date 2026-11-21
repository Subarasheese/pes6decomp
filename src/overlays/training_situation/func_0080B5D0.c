/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void *Pes6Ball_Current;
extern char D_00591E19[];
extern char D_00591E4C[];

s32 func_0080B5D0(void *arg0) {
    float zero = 0.0f;

    s32 value;
    s32 value2;
    u16 value3;

    value = M2C_FIELD(arg0, s32 *, 0xC);
    value2 = 0;
    if (((*(u8 *)D_00591E4C) == value) ||
        (((*(u8 *)D_00591E19) == value) &&
         ((value3 = M2C_FIELD(Pes6Ball_Current, u16 *, 0x84), (value3 == 1)) || (value3 == 2) ||
          (value3 == 4) || (value3 == 8))) ||
        (M2C_FIELD(arg0, f32 *, 0x5C) != zero)) {
        value2 = 1;
    }
    return value2;
}
