/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BC6100(s32, M2C_UNK, s32);               /* extern */
extern char D_00CE8E20[];

void func_00BF4060(s32 arg0, s32 arg1) {
    M2C_UNK *var_a0_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_s1;
    s32 temp_v1_2;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_s2;
    s32 var_v1_2;
    u16 var_v1;
    void *temp_s0;
    void *temp_v1;
    void *var_a0;

    var_a2 = 0;
    var_s2 = 0;
    temp_s0 = ((void *)D_00CE8E20) + (arg0 * 0x146C);
    var_a0 = temp_s0;
    do {
        if (M2C_FIELD(var_a0, s32 *, 0x1430) > 0) {
            var_s2 += 1;
        }
        var_a2 += 1;
        var_a0 += 4;
    } while (var_a2 < 4);
    temp_v1 = temp_s0 + 0x13A8;
    if (temp_v1 != NULL) {
        var_v1 = M2C_FIELD(temp_v1, u16 *, 0x80);
    } else {
        var_v1 = 0;
    }
    temp_s1 = var_v1 & 0xFFFF;
    if ((temp_s1 == 0) || ((temp_s1 >= 0xFFFC) && (temp_s1 < 0x10000))) {
        M2C_FIELD(temp_s0, s32 *, 0x1448) = 0;
        if (var_s2 <= 0) {
            M2C_FIELD(temp_s0, s32 *, 0x1444) = 0;
            return;
        }
        var_v1_2 = 1;
        goto block_48;
    }
    temp_a0 = arg1 & 0xFFFF;
    switch (temp_a0) {                              /* irregular */
    case 0xFFFF:
        /* fallthrough */
    case 0x11C:
        M2C_FIELD(temp_s0, s32 *, 0x1448) = 0;
        temp_a0_2 = M2C_FIELD(temp_s0, s32 *, 0x144C);
        if (M2C_FIELD(temp_s0, s32 *, 0x1444) >= temp_a0_2) {
            var_v1_2 = temp_a0_2 - 1;
block_48:
            M2C_FIELD(temp_s0, s32 *, 0x1444) = var_v1_2;
        }
        return;
    default:
        temp_a1 = var_s2 + func_00BC6100(arg1, 0, var_a2);
        var_a2_2 = 0;
        if (temp_a1 > 0) {
            var_a0_2 = ((void *)D_00CE8E20);
loop_23:
            if (temp_s1 != M2C_FIELD(var_a0_2, u16 *, 0x80)) {
                var_a2_2 += 1;
                var_a0_2 += 0x88;
                if (var_a2_2 >= temp_a1) {

                } else {
                    goto loop_23;
                }
            } else {
                M2C_FIELD(temp_s0, s32 *, 0x1444) = var_a2_2;
                temp_v1_2 = M2C_FIELD(temp_s0, s32 *, 0x1448);
                if (var_a2_2 >= temp_v1_2) {
                    temp_a0_3 = M2C_FIELD(temp_s0, s32 *, 0x1450);
                    if (var_a2_2 >= (temp_v1_2 + temp_a0_3)) {
                        M2C_FIELD(temp_s0, s32 *, 0x1448) = (s32) ((var_a2_2 - temp_a0_3) + 1);
                    }
                } else {
                    M2C_FIELD(temp_s0, s32 *, 0x1448) = var_a2_2;
                }
            }
        }
        if (var_a2_2 != temp_a1) {
            if (temp_a1 < M2C_FIELD(temp_s0, s32 *, 0x1450)) {
                M2C_FIELD(temp_s0, s32 *, 0x1448) = 0;
            }
        } else {
            M2C_FIELD(temp_s0, s32 *, 0x1448) = 0;
            M2C_FIELD(temp_s0, s32 *, 0x1444) = 0;
        }
        temp_a1_2 = M2C_FIELD(temp_s0, s32 *, 0x1444);
        if ((s32) M2C_FIELD(((temp_a1_2 * 0x88) + temp_s0), u16 *, 0x80) >= 0xFFFC) {
            M2C_FIELD(temp_s0, s32 *, 0x1444) = (s32) (temp_a1_2 + 1);
        }
        temp_a0_4 = M2C_FIELD(temp_s0, s32 *, 0x1448);
        temp_a1_3 = M2C_FIELD(temp_s0, s32 *, 0x1444);
        if (temp_a1_3 >= temp_a0_4) {
            temp_a0_5 = temp_a0_4 + M2C_FIELD(temp_s0, s32 *, 0x1450);
            if (temp_a1_3 >= temp_a0_5) {
                var_v1_2 = temp_a0_5 - 1;
                goto block_48;
            }
        } else {
            M2C_FIELD(temp_s0, s32 *, 0x1444) = temp_a0_4;
            return;
        }
        break;
    }
}
