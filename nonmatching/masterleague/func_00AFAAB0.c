/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00229280(s32);
extern u8 func_0022BC60(s32);
extern s32 func_002293F0(void);
s32 func_00229010(u8);                              /* extern */
void *func_0022BFF0(s32, s32);                      /* extern */
s32 func_00236680(s32);                             /* extern */

s32 func_00AFAAB0(s32 arg0) {
    s32 temp_fp;
    s32 temp_fp_2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_s4_2;
    s32 temp_s6;
    s32 temp_s6_2;
    s32 temp_s6_3;
    s32 temp_s6_4;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s4;
    s32 var_s4_3;
    s32 var_s7;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    void *temp_v0;
    void *var_s4_2;
    void *var_s4_4;
    void *var_s6;
    void *var_s6_2;

    var_s7 = 0;
    temp_s3 = arg0 & 0xFF;
loop_1:
    temp_v0 = func_0022BFF0(arg0, var_s7 & 0xFF);
    if (temp_v0 != NULL) {
        if (M2C_FIELD(temp_v0, u8 *, 0x17) & 1) {
            temp_fp_2 = func_0022BC60((s32) M2C_FIELD(temp_v0, u8 *, 6)) & 0xFF;
            temp_s6_3 = func_002293F0();
            temp_s0 = func_00236680(arg0) & 0xFF;
            temp_v0_2 = func_00229280(temp_s3);
            if (temp_v0_2 == 0) {
                var_v0 = 0xFF;
            } else if (temp_s6_3 == 0) {
                var_v0 = 0xFF;
            } else {
                var_s4 = 0;
                if ((s32) M2C_FIELD(temp_v0_2, u8 *, 0xB) > 0) {
                    var_s6 = temp_s6_3 + (temp_s0 & 0xFF);
loop_43:
                    if ((temp_fp_2 & 0xFF) == (func_00229010(M2C_FIELD(var_s6, u8 *, 0x71)) & 0xFF)) {
                        var_v0 = var_s4 & 0xFF;
                    } else {
                        var_s4 += 1;
                        var_s6 += 1;
                        if (var_s4 >= (s32) M2C_FIELD(temp_v0_2, u8 *, 0xB)) {
                            goto block_48;
                        }
                        goto loop_43;
                    }
                } else {
block_48:
                    var_v0 = 0xFF;
                }
            }
            temp_v1 = var_v0 & 0xFF;
            if ((temp_v1 >= 6) && (temp_v1 < 0xE)) {
                return temp_fp_2;
            }
            temp_s6_2 = func_0022BC60((s32) M2C_FIELD(temp_v0, u8 *, 5)) & 0xFF;
            temp_s4 = func_002293F0();
            temp_s1 = func_00236680(arg0) & 0xFF;
            temp_v0_3 = func_00229280(temp_s3);
            if (temp_v0_3 == 0) {
                var_v0_2 = 0xFF;
            } else if (temp_s4 == 0) {
                var_v0_2 = 0xFF;
            } else {
                var_s0 = 0;
                if ((s32) M2C_FIELD(temp_v0_3, u8 *, 0xB) > 0) {
                    var_s4_2 = temp_s4 + (temp_s1 & 0xFF);
loop_59:
                    if ((temp_s6_2 & 0xFF) == (func_00229010(M2C_FIELD(var_s4_2, u8 *, 0x71)) & 0xFF)) {
                        var_v0_2 = var_s0 & 0xFF;
                    } else {
                        var_s0 += 1;
                        var_s4_2 += 1;
                        if (var_s0 >= (s32) M2C_FIELD(temp_v0_3, u8 *, 0xB)) {
                            goto block_64;
                        }
                        goto loop_59;
                    }
                } else {
block_64:
                    var_v0_2 = 0xFF;
                }
            }
            temp_v1_2 = var_v0_2 & 0xFF;
            if ((temp_v1_2 >= 6) && (temp_v1_2 < 0xE)) {
                return temp_s6_2;
            }
            goto block_68;
        }
        temp_fp = func_0022BC60((s32) M2C_FIELD(temp_v0, u8 *, 5)) & 0xFF;
        temp_s6_4 = func_002293F0();
        temp_s0_2 = func_00236680(arg0) & 0xFF;
        temp_v0_4 = func_00229280(temp_s3);
        if (temp_v0_4 == 0) {
            var_v0_3 = 0xFF;
        } else if (temp_s6_4 == 0) {
            var_v0_3 = 0xFF;
        } else {
            var_s4_3 = 0;
            if ((s32) M2C_FIELD(temp_v0_4, u8 *, 0xB) > 0) {
                var_s6_2 = temp_s6_4 + (temp_s0_2 & 0xFF);
loop_12:
                if ((temp_fp & 0xFF) == (func_00229010(M2C_FIELD(var_s6_2, u8 *, 0x71)) & 0xFF)) {
                    var_v0_3 = var_s4_3 & 0xFF;
                } else {
                    var_s4_3 += 1;
                    var_s6_2 += 1;
                    if (var_s4_3 >= (s32) M2C_FIELD(temp_v0_4, u8 *, 0xB)) {
                        goto block_17;
                    }
                    goto loop_12;
                }
            } else {
block_17:
                var_v0_3 = 0xFF;
            }
        }
        temp_v1_3 = var_v0_3 & 0xFF;
        if ((temp_v1_3 >= 6) && (temp_v1_3 < 0xE)) {
            return temp_fp;
        }
        temp_s6 = func_0022BC60((s32) M2C_FIELD(temp_v0, u8 *, 6)) & 0xFF;
        temp_s4_2 = func_002293F0();
        temp_s1_2 = func_00236680(arg0) & 0xFF;
        temp_v0_5 = func_00229280(temp_s3);
        if (temp_v0_5 == 0) {
            var_v0_4 = 0xFF;
        } else if (temp_s4_2 == 0) {
            var_v0_4 = 0xFF;
        } else {
            var_s0_2 = 0;
            if ((s32) M2C_FIELD(temp_v0_5, u8 *, 0xB) > 0) {
                var_s4_4 = temp_s4_2 + (temp_s1_2 & 0xFF);
loop_28:
                if ((temp_s6 & 0xFF) == (func_00229010(M2C_FIELD(var_s4_4, u8 *, 0x71)) & 0xFF)) {
                    var_v0_4 = var_s0_2 & 0xFF;
                } else {
                    var_s0_2 += 1;
                    var_s4_4 += 1;
                    if (var_s0_2 >= (s32) M2C_FIELD(temp_v0_5, u8 *, 0xB)) {
                        goto block_33;
                    }
                    goto loop_28;
                }
            } else {
block_33:
                var_v0_4 = 0xFF;
            }
        }
        temp_v1_4 = var_v0_4 & 0xFF;
        if ((temp_v1_4 >= 6) && (temp_v1_4 < 0xE)) {
            return temp_s6;
        }
        goto block_68;
    }
block_68:
    var_s7 += 1;
    if (var_s7 >= 3) {
        return 0xFF;
    }
    goto loop_1;
}
