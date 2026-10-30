/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0093C590(s32);                             /* extern */
s32 func_0093CCC0();                                /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
extern void *D_00A68CC0;

void func_0096E0A0(void) {
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = D_00A68CC0;
    temp_v0 = func_0093C590(func_0093CCC0());
    switch (temp_v0) {                              /* irregular */
    case -1:
        func_0099D030(0);
        M2C_FIELD(temp_s0, s32 *, 4) = 4;
        M2C_FIELD(temp_s0, s32 *, 0) = 0x01FB003E;
        func_009717C0(2);
        return;
    case 1:
        func_0099D030(0);
        func_009717C0(2);
        return;
    default:
        func_0099D030(0);
        M2C_FIELD(temp_s0, s32 *, 4) = 4;
        M2C_FIELD(temp_s0, s32 *, 0) = 0x01FB003E;
        func_009717C0(2);
        /* fallthrough */
    case 0:
        return;
    }
}
