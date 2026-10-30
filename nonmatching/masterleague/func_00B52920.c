/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
extern char D_00B80B80[];
extern char D_00B8EFE0[];

s64 func_00B52920(s32 arg0, s32 arg1, s32 arg2, s64 arg3) {
    M2C_UNK *var_s3;
    s32 temp_s1;
    s32 temp_s2;
    s32 var_s4;
    s32 var_v0_6;
    s64 temp_a0;
    s64 temp_a0_2;
    s64 var_a1;
    s64 var_s5;
    s64 var_v0_7;
    s64 var_v0_8;
    u16 temp_s0;
    u16 temp_v0;
    u8 *var_v0_5;
    u8 temp_v1;
    u8 var_v0;
    u8 var_v0_3;
    void *temp_v0_2;
    void *var_v0_2;
    void *var_v0_4;

    var_s5 = arg3;
    var_s4 = 0;
    temp_s2 = arg0 & 0xFF;
    temp_s1 = arg1 & 0xFF;
    var_s3 = ((void *)D_00B8EFE0);
    do {
        temp_v0 = M2C_FIELD(var_s3, u16 *, 0);
        if (temp_v0 != 0) {
            temp_s0 = M2C_FIELD(var_s3, u16 *, 2);
            if ((temp_s0 != 0) && ((arg2 & 0xFFFF) == temp_v0)) {
                if (temp_s2 != 3) {
                    if (temp_s2 >= 3) {
                        var_v0 = 0;
                    } else {
                        if (temp_s0 >= 0x267U) {
                            var_v0_2 = NULL;
                        } else if ((s32) temp_s0 >= 0x268) {
                            var_v0_2 = NULL;
                        } else {
                            var_v0_2 = ((void *)D_00B80B80) + (temp_s0 << 5);
                        }
                        if (var_v0_2 == NULL) {
                            var_v0 = 0;
                        } else {
                            var_v0 = M2C_FIELD((temp_s2 + var_v0_2), u8 *, 0x13);
                        }
                    }
                    if (var_v0 & 0xFF) {
                        goto block_19;
                    }
                } else {
block_19:
                    if (temp_s1 != 5) {
                        if (temp_s1 >= 5) {
                            var_v0_3 = 0;
                        } else {
                            if (temp_s0 >= 0x267U) {
                                var_v0_4 = NULL;
                            } else if ((s32) temp_s0 >= 0x268) {
                                var_v0_4 = NULL;
                            } else {
                                var_v0_4 = ((void *)D_00B80B80) + ((temp_s0 & 0xFFFF) << 5);
                            }
                            if (var_v0_4 == NULL) {
                                var_v0_3 = 0;
                            } else {
                                var_v0_3 = M2C_FIELD((temp_s1 + var_v0_4), u8 *, 0x16);
                            }
                        }
                        if (var_v0_3 & 0xFF) {
                            goto block_34;
                        }
                    } else {
block_34:
                        temp_v0_2 = func_00228A80();
                        if (temp_v0_2 == NULL) {
                            var_v0_5 = NULL;
                        } else {
                            temp_a0 = (s64) ((s64) temp_s0 << 0x30) >> 0x30;
                            if (temp_a0 >= 0x268) {
                                var_v0_5 = NULL;
                            } else if (temp_a0 < 0x25E) {
                                var_v0_5 = temp_v0_2 + temp_a0 + 0x102BE;
                            } else {
                                var_v0_5 = temp_v0_2 + (temp_a0 - 0x25E) + 0x10530;
                            }
                        }
                        if (var_v0_5 != NULL) {
                            var_v0_6 = *var_v0_5 & 1;
                        } else {
                            var_v0_6 = 0;
                        }
                        temp_v1 = M2C_FIELD(var_s3, u8 *, 4);
                        temp_a0_2 = var_v0_6 & 0xFF;
                        var_a1 = (s64) (var_s5 << 0x38) >> 0x38;
                        if (temp_v1 == 0) {
                            var_v0_7 = var_a1 != 0;
                            if (var_v0_7 != 0) {
                                var_v0_7 = ((s64) (temp_a0_2 << 0x38) >> 0x38) != 0;
                            }
                            var_a1 = (s64) (var_v0_7 << 0x38) >> 0x38;
                        } else if (temp_v1 == 1) {
                            var_v0_8 = var_a1 != 0;
                            if (var_v0_8 == 0) {
                                var_v0_8 = ((s64) (temp_a0_2 << 0x38) >> 0x38) != 0;
                            }
                            var_a1 = (s64) (var_v0_8 << 0x38) >> 0x38;
                        }
                        var_s5 = var_a1 & 0xFF;
                    }
                }
            }
        }
        var_s4 += 1;
        var_s3 += 6;
    } while (var_s4 == 0);
    return var_s5;
}
