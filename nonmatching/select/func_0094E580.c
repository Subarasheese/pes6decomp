/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00967F20[];

s32 func_0094E580(s32 *arg0, s32 *arg1) {
    s32 temp_a2;
    s32 temp_a4;
    s32 var_a2;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_a4;
    s32 var_a4_2;
    s32 var_a4_3;
    s32 var_a5_2;
    s32 var_a5_4;
    s32 var_a6;
    s32 var_a6_2;
    s32 var_a6_4;
    s32 var_a7;
    s32 var_a7_2;
    s32 var_t0;
    s32 var_t1;
    s32 var_v0;
    s8 *var_a4_4;
    s8 *var_a5;
    s8 *var_a5_3;
    s8 *var_a5_5;
    s8 *var_a6_3;
    s8 *var_a6_5;
    s8 *var_a7_3;
    s8 *var_a7_4;
    s8 *var_t0_2;

    *arg0 = 0;
    *arg1 = 0;
    var_v0 = 0;
    switch ((*(s8 *)D_00967F20)) {                           /* irregular */
    case 1:
        var_a7 = 0;
        var_a6 = 0;
loop_5:
        var_t0 = 0;
        var_a5 = &(((void *)D_00967F20))[var_a6];
loop_6:
        if (M2C_FIELD(var_a5, u16 *, 0x124C) == 0x119) {
            *arg0 = var_t0;
            var_v0 = 1;
            *arg1 = var_a7;
        } else {
            var_t0 += 1;
            var_a5 += 0x20;
            if (var_t0 < 4) {
                goto loop_6;
            }
        }
        if (var_v0 != 1) {
            var_a7 += 1;
            var_a6 += 8;
            if (var_a7 < 4) {
                goto loop_5;
            }
        }
        if ((var_a7 == 4) && (var_v0 == 0)) {
            var_a7_2 = 0;
            var_t1 = 0;
loop_15:
            var_a6_2 = 4;
            var_t0_2 = &(((void *)D_00967F20))[var_t1] + 0x80;
loop_16:
            if (M2C_FIELD(var_t0_2, u16 *, 0x124C) == 0x119) {
                *arg0 = var_a6_2;
                var_v0 = 1;
                *arg1 = var_a7_2;
            } else {
                var_a6_2 += 1;
                var_t0_2 += 0x20;
                if (var_a6_2 < 8) {
                    goto loop_16;
                }
            }
            if (var_v0 != 1) {
                var_a7_2 += 1;
                var_t1 += 8;
                if (var_a7_2 < 4) {
                    goto loop_15;
                }
            }
        }
        if (var_v0 == 0) {
loop_24:
            temp_a4 = *arg1;
            if (M2C_FIELD(((temp_a4 * 8) + (((void *)D_00967F20) + (*arg0 << 5))), u16 *, 0x124C) == 0xFFFF) {
                temp_a2 = temp_a4 + 1;
                *arg1 = temp_a2;
                if (temp_a2 == -1) {
                    *arg1 = 3;
                }
                goto loop_24;
            }
            return 1;
        }
block_64:
    default:
        return 0;
    case 2:
        var_a4 = 0;
        var_a7_3 = ((void *)D_00967F20);
loop_30:
        var_a5_2 = 0;
        var_a6_3 = var_a7_3;
loop_31:
        if (M2C_FIELD(var_a6_3, u16 *, 0x164C) == 0x119) {
            *arg0 = var_a4;
            var_v0 = 1;
            *arg1 = var_a5_2;
        } else {
            var_a5_2 += 1;
            var_a6_3 += 8;
            if (var_a5_2 < 0xA) {
                goto loop_31;
            }
        }
        if (var_v0 != 1) {
            var_a4 += 1;
            var_a7_3 += 0x50;
            if (var_a4 < 2) {
                goto loop_30;
            }
        }
        if (var_v0 == 0) {
            var_a4_2 = 0;
            var_a6_4 = 0;
loop_39:
            var_a3 = 0;
            var_a5_3 = &(((void *)D_00967F20))[var_a6_4];
loop_40:
            if (M2C_FIELD(var_a5_3, u16 *, 0x164C) == 0xFFFF) {
                var_a3 += 1;
                var_a5_3 += 0x50;
                if (var_a3 >= 2) {
                    var_a4_2 += 1;
                    var_a6_4 += 8;
                    if (var_a4_2 >= 0xA) {
                        goto block_64;
                    }
                    goto loop_39;
                }
                goto loop_40;
            }
            *arg0 = var_a3;
            *arg1 = var_a4_2;
            return 1;
        }
        goto block_64;
    case 0:
        var_a4_3 = 0;
        var_a7_4 = ((void *)D_00967F20);
loop_48:
        var_a5_4 = 0;
        var_a6_5 = var_a7_4;
loop_49:
        if (M2C_FIELD(var_a6_5, u16 *, 0x144C) == 0x119) {
            *arg0 = var_a4_3;
            var_v0 = 1;
            *arg1 = var_a5_4;
        } else {
            var_a5_4 += 1;
            var_a6_5 += 8;
            if (var_a5_4 < 0x10) {
                goto loop_49;
            }
        }
        if (var_v0 != 1) {
            var_a4_3 += 1;
            var_a7_4 += 0x80;
            if (var_a4_3 < 2) {
                goto loop_48;
            }
        }
        if (var_v0 == 0) {
            var_a2 = 0;
            var_a5_5 = ((void *)D_00967F20);
loop_57:
            var_a3_2 = 0;
            var_a4_4 = var_a5_5;
loop_58:
            if (M2C_FIELD(var_a4_4, u16 *, 0x144C) == 0xFFFF) {
                var_a3_2 += 1;
                var_a4_4 += 8;
                if (var_a3_2 >= 0x10) {
                    var_a2 += 1;
                    var_a5_5 += 0x80;
                    if (var_a2 >= 2) {
                        goto block_64;
                    }
                    goto loop_57;
                }
                goto loop_58;
            }
            *arg0 = var_a2;
            *arg1 = var_a3_2;
            return 1;
        }
        goto block_64;
    }
}
