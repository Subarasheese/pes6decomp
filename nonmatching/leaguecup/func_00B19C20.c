/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00B19C20(void *arg0) {
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_a4;
    s32 temp_a5;
    s32 temp_a6;
    s32 temp_a7;
    s32 temp_v1;
    s32 var_v1;

    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 8) != 0) {
            if (M2C_FIELD(arg0, u8 *, 0x46) != 1) {
                temp_a1 = M2C_FIELD(arg0, s32 *, 0x14);
                temp_v1 = M2C_FIELD(arg0, s32 *, 0x20);
                if (temp_v1 >= temp_a1) {
                    if (temp_a1 >= temp_v1) {
                        temp_a7 = M2C_FIELD(arg0, s32 *, 0x18);
                        temp_a6 = M2C_FIELD(arg0, s32 *, 0x28);
                        temp_a4 = M2C_FIELD(arg0, s32 *, 0xC);
                        temp_a3 = M2C_FIELD(arg0, s32 *, 0x24);
                        temp_a5 = M2C_FIELD(arg0, s32 *, 0x1C);
                        temp_a2 = M2C_FIELD(arg0, s32 *, 0x10);
                        if ((temp_a2 + (temp_a3 + temp_a4)) != (temp_a5 + (temp_a6 + temp_a7))) {
                            if (temp_a5 >= temp_a2) {
                                if (temp_a2 >= temp_a5) {
                                    if (temp_a7 >= temp_a4) {
                                        if (temp_a4 < temp_a7) {
                                            var_v1 = 0xE;
                                            goto block_51;
                                        }
                                        if (temp_a4 != temp_a7) {
                                            M2C_FIELD(arg0, s32 *, 0x2C) = 0;
                                            return;
                                        }
                                        var_v1 = 0xD;
                                        goto block_51;
                                    }
                                    var_v1 = 0xC;
                                    goto block_51;
                                }
                                var_v1 = 0x10;
                                goto block_51;
                            }
                            var_v1 = 0xF;
                            goto block_51;
                        }
                        if ((temp_a5 + (temp_a7 + (temp_a6 * 2))) >= (temp_a3 + ((temp_a4 + temp_a2) * 2))) {
                            var_v1 = 0x13;
                        } else {
                            var_v1 = 0x14;
                        }
                        goto block_51;
                    }
                    var_v1 = 0x12;
                    goto block_51;
                }
                var_v1 = 0x11;
                goto block_51;
            }
            if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {
                var_v1 = 0xE;
            } else {
                var_v1 = 0xC;
            }
            goto block_51;
        }
        if (M2C_FIELD(arg0, u16 *, 4) != 0xFFFF) {
            var_v1 = 1;
block_51:
            M2C_FIELD(arg0, s32 *, 0x2C) = var_v1;
        } else {
            M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        }
    }
}
