/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0017F900();                                /* extern */
s32 func_001BE5B0(M2C_UNK);                         /* extern */
s32 func_00236DC0();                                /* extern */
M2C_UNK func_0023A3F0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0093D720();                            /* extern */
M2C_UNK func_0093D850();                            /* extern */
M2C_UNK func_0094C790(M2C_UNK);                     /* extern */
M2C_UNK func_0095A980();                            /* extern */
M2C_UNK func_00986C50();                            /* extern */
M2C_UNK func_00986CC0();                            /* extern */
s32 func_0098B700();                                /* extern */
extern void *D_003E77AC;

s32 func_009654A0(void) {
    s32 temp_v1;
    s32 var_s0;

    temp_v1 = M2C_FIELD(D_003E77AC, s32 *, 4);
    var_s0 = -1;
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (func_001BE5B0(0) != 0) {
            if (func_00236DC0() != 1) {
                func_0094C790(2);
            } else {
                func_00986CC0();
                func_0094C790(1);
            }
        }
        break;
    case 1:
        if (func_0017F900() != 0) {
            func_0094C790(2);
        case 2:
            if (func_0098B700() == 1) {
                func_0093D720();
                func_0093D850();
                func_0095A980();
                func_00986C50();
                func_0023A3F0(0xFF, 0);
                var_s0 = 0x4A;
            }
        }
        break;
    }
    if (var_s0 != -1) {
        func_0094C790(0);
    }
    return var_s0;
}
