/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00969AF0(void);
s32 func_0093BC90(s32);                             /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
s32 func_009B76A0();                                /* extern */

void func_0096FEC0(void) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = func_00969AF0();
    temp_v0 = func_0093BC90(func_009B76A0() * 0x64);
    switch (temp_v0) {                              /* irregular */
    case -1:
        func_0099D030(0);
        M2C_FIELD(temp_s0, s32 *, 0x18) = 4;
        func_009717C0(2);
        return;
    case 1:
        func_0099D030(0);
        func_009717C0(2);
        return;
    default:
        func_0099D030(0);
        M2C_FIELD(temp_s0, s32 *, 0x18) = 4;
        func_009717C0(2);
        /* fallthrough */
    case 0:
        return;
    }
}
