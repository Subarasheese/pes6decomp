/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0020DF20();                            /* extern */

void func_0020DC80(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;

    if (arg0 != NULL) {
        func_0020DF20();
        temp_a0 = M2C_FIELD(arg0, u8 *, 0) * 3;
        var_v1 = temp_a0 >> 2;
        if (temp_a0 < 0) {
            var_v1 = (s32) (temp_a0 + 3) >> 2;
        }
        M2C_FIELD(arg0, u8 *, 0) = (u8) (var_v1 + 0x3C);
        temp_a0_2 = M2C_FIELD(arg0, u8 *, 1) * 3;
        var_v1_2 = temp_a0_2 >> 2;
        if (temp_a0_2 < 0) {
            var_v1_2 = (s32) (temp_a0_2 + 3) >> 2;
        }
        M2C_FIELD(arg0, u8 *, 1) = (u8) (var_v1_2 + 0x3C);
        temp_a0_3 = M2C_FIELD(arg0, u8 *, 2) * 3;
        var_v1_3 = temp_a0_3 >> 2;
        if (temp_a0_3 < 0) {
            var_v1_3 = (s32) (temp_a0_3 + 3) >> 2;
        }
        M2C_FIELD(arg0, u8 *, 2) = (u8) (var_v1_3 + 0x3C);
    }
}
