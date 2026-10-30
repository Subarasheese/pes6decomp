/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00B19DF0(void *arg0) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_v1;

    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 8) != 0) {
            temp_a1 = M2C_FIELD(arg0, s32 *, 0xC);
            temp_v1 = M2C_FIELD(arg0, s32 *, 0x18);
            if (temp_v1 >= temp_a1) {
                if (temp_a1 >= temp_v1) {
                    temp_a1_2 = M2C_FIELD(arg0, s32 *, 0x10);
                    temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x1C);
                    if (temp_v1_2 >= temp_a1_2) {
                        if (temp_a1_2 >= temp_v1_2) {
                            temp_a1_3 = M2C_FIELD(arg0, s32 *, 0x14);
                            temp_v1_3 = M2C_FIELD(arg0, s32 *, 0x20);
                            if (temp_v1_3 >= temp_a1_3) {
                                if (temp_a1_3 >= temp_v1_3) {
                                    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
                                    return;
                                }
                                var_v1 = 0xB;
                                goto block_33;
                            }
                            var_v1 = 0xA;
                            goto block_33;
                        }
                        var_v1 = 9;
                        goto block_33;
                    }
                    var_v1 = 8;
                    goto block_33;
                }
                var_v1 = 7;
                goto block_33;
            }
            var_v1 = 5;
            goto block_33;
        }
        if (M2C_FIELD(arg0, u16 *, 4) != 0xFFFF) {
            var_v1 = 1;
block_33:
            M2C_FIELD(arg0, s32 *, 0x2C) = var_v1;
        } else {
            M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        }
    }
}
