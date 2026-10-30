/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_0010E140(void *);
s32 func_0010E168(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_v0;
    s32 var_a1;
    s32 var_v0_2;
    s32 var_v1;
    u8 temp_a0;
    u8 var_a0;
    u8 var_a1_2;
    u8 var_a2;
    u8 var_v1_2;
    void *temp_a2;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1;
    void *var_v0;

    var_v0 = func_0010E140(arg0);
    temp_a2 = var_v0;
    if (temp_a2 != NULL) {
        temp_a0 = M2C_FIELD(arg0, u8 *, 0x13);
        var_v0_2 = arg1 * 0x10;
        switch (temp_a0) {                          /* irregular */
        case 5:
            var_v0_2 = arg1 << 8;
            /* fallthrough */
        case 4:
            var_a1 = var_v0_2 + arg2;
            var_v0 = NULL;
            if ((s32) M2C_FIELD(arg0, u16 *, 0xE) >= var_a1) {
                temp_a0_2 = (M2C_FIELD(arg0, u8 *, 0x12) << 8) | temp_a0;
                if (temp_a0_2 != 0x305) {
                    if (temp_a0_2 < 0x306) {
                        if (temp_a0_2 != 0x105) {
                            var_v1 = var_a1 & 0x1F;
                            if (temp_a0_2 != 0x205) {

                            } else {
                                goto block_20;
                            }
                        } else {
                            goto block_19;
                        }
                    } else if (temp_a0_2 != 0x4204) {
                        if (temp_a0_2 < 0x4205) {
                            var_v1 = var_a1 & 0x1F;
                            if (temp_a0_2 != 0x4104) {

                            } else {
                                goto block_20;
                            }
                        } else if (temp_a0_2 == 0x4304) {
                            goto block_19;
                        }
                    } else {
                        goto block_19;
                    }
                } else {
block_19:
                    var_v1 = var_a1 & 0x1F;
block_20:
                    if (var_v1 >= 8) {
                        if (var_v1 < 0x10) {
                            var_a1 += 8;
                        } else {
                            var_a1 = (var_v1 < 0x18) ? (var_a1 - 8) : var_a1;
                        }
                    }
                }
                temp_a0_3 = M2C_FIELD(arg0, u8 *, 0x12) & 0x3F;
                if (temp_a0_3 != 2) {
                    if (temp_a0_3 < 3) {
                        if (temp_a0_3 != 1) {
                            var_a2 = 0;
                            goto block_34;
                        }
                        temp_v1 = (var_a1 * 2) + temp_a2;
                        temp_v0 = (M2C_FIELD(temp_v1, u8 *, 1) << 8) | M2C_FIELD(temp_v1, u8 *, 0);
                        var_a2 = (M2C_FIELD(temp_v1, u8 *, 0) * 8) & 0xFF;
                        var_v1_2 = (temp_v0 >> 8) & 0x80 & 0xFF;
                        var_a0 = (temp_v0 >> 2) & 0xF8;
                        var_a1_2 = (temp_v0 >> 7) & 0xF8;
                    } else if (temp_a0_3 != 3) {
                        var_a2 = 0;
block_34:
                        var_a0 = 0;
                        var_a1_2 = 0;
                        var_v1_2 = 0;
                    } else {
                        temp_v0_2 = (var_a1 * 4) + temp_a2;
                        var_v1_2 = M2C_FIELD(temp_v0_2, u8 *, 3);
                        var_a2 = M2C_FIELD(temp_v0_2, u8 *, 0);
                        var_a0 = M2C_FIELD(temp_v0_2, u8 *, 1);
                        var_a1_2 = M2C_FIELD(temp_v0_2, u8 *, 2);
                    }
                } else {
                    var_v1_2 = 0x80;
                    temp_v0_3 = (var_a1 * 3) + temp_a2;
                    var_a1_2 = M2C_FIELD(temp_v0_3, u8 *, 2);
                    var_a2 = M2C_FIELD(temp_v0_3, u8 *, 0);
                    var_a0 = M2C_FIELD(temp_v0_3, u8 *, 1);
                }
                var_v0 = (void *) ((var_v1_2 << 0x18) | var_a2 | ((var_a1_2 << 8) | (var_a0 << 0x10)));
            }
            /* Duplicate return node #36. Try simplifying control flow for better match */
            return (s32) var_v0;
        default:
            return 0;
        }
    } else {
        return (s32) var_v0;
    }
}
