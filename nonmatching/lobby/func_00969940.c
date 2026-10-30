/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0093CCD0();                                /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
extern void *D_00A68CA8;

void func_00969940(void) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s1;
    void *temp_s0;

    temp_s0 = D_00A68CA8;
    var_s1 = 0;
    temp_v0 = func_0093CCD0();
    switch (temp_v0) {                              /* irregular */
    case 0:
        break;
    case -2:
        temp_v1 = M2C_FIELD(temp_s0, s32 *, 0x190) + 1;
        M2C_FIELD(temp_s0, s32 *, 0x190) = temp_v1;
        if (temp_v1 >= 2) {
            var_s1 = 1;
block_15:
            M2C_FIELD(temp_s0, s32 *, 0x174) = 3;
        }
        break;
    case -1:
        var_s1 = 1;
        goto block_15;
    case 1:
        var_s1 = 1;
        break;
    default:
        var_s1 = 1;
        goto block_15;
    }
    if (var_s1 != 0) {
        M2C_FIELD(temp_s0, s32 *, 0x190) = 0;
        func_0099D030(0);
        func_009717C0(3);
    }
}
