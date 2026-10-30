/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00184AB0(void *, M2C_UNK, s32, s32, s32, s32, void *); /* extern */
M2C_UNK func_00184BA8(void *, M2C_UNK, s32, s32, s32, s32, void *); /* extern */
M2C_UNK func_00184D38(void *, M2C_UNK, s32, s32, s32, s32, void *); /* extern */
M2C_UNK func_00184F98(void *, M2C_UNK, s32, s32, s32, s32, void *); /* extern */

void func_001845B0(void *arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_a2_4;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_a3_4;
    s32 temp_a4;
    s32 temp_a5;
    s32 temp_fp;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_s1;
    s32 temp_s6;
    s32 temp_s6_2;
    s32 temp_s6_3;
    s32 temp_s7;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    void *temp_a6;
    void *temp_a6_2;
    void *temp_a6_3;
    void *temp_a6_4;
    void *temp_s5;

    temp_s5 = arg0 + 0x910;
    var_s2 = M2C_FIELD(temp_s5, s32 *, 0x55A0);
    var_s4 = M2C_FIELD(temp_s5, s32 *, 0x55A4);
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x5D4);
    temp_a4 = (var_s2 + var_s4) * 2;
    temp_s6 = M2C_FIELD(arg0, s32 *, 0x5AC);
    temp_s7 = M2C_FIELD(arg0, s32 *, 0x5B0);
    sp0 = M2C_FIELD(arg0, s32 *, 0x5A0) + temp_a0;
    temp_fp = M2C_FIELD(arg0, s32 *, 0x5A4) + temp_a0;
    var_s1 = M2C_FIELD(temp_s5, s32 *, 0x55A8);
    var_s3 = M2C_FIELD(temp_s5, s32 *, 0x55AC);
    if (temp_s6 < temp_a4) {
        temp_lo = (s32) (var_s4 * temp_s6) / (s32) ((var_s2 + var_s4) * 2);
        var_s2 = (s32) (var_s2 * temp_s6) / temp_a4;
        var_s4 = temp_lo;
    }
    temp_a5 = (var_s1 + var_s3) * 2;
    if (temp_s7 < temp_a5) {
        temp_lo_2 = (s32) (var_s3 * temp_s7) / (s32) ((var_s1 + var_s3) * 2);
        var_s1 = (s32) (var_s1 * temp_s7) / temp_a5;
        var_s3 = temp_lo_2;
    }
    sp4 = var_s2 * 2;
    sp8 = var_s1 * 2;
    temp_a2 = sp0 + sp4;
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x5EC0);
    temp_a3 = temp_fp + sp8;
    temp_a6 = (M2C_FIELD(arg0, s32 *, 0x4EC) * 0x8C0) + temp_s5 + 0x250;
    switch (temp_a0_2) {                            /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        func_00184AB0(arg0, 0, temp_a2, temp_a3, var_s2, var_s1, temp_a6);
        break;
    case 1:                                         /* switch 1 */
        func_00184BA8(arg0, 0, temp_a2, temp_a3, var_s2, var_s1, temp_a6);
        break;
    case 2:                                         /* switch 1 */
        func_00184D38(arg0, 0, temp_a2, temp_a3, var_s2, var_s1, temp_a6);
        break;
    case 3:                                         /* switch 1 */
        func_00184F98(arg0, 0, temp_a2, temp_a3, var_s2, var_s1, temp_a6);
        break;
    }
    temp_s6_2 = sp0 + temp_s6;
    sp10 = var_s4 * 2;
    spC = temp_s6_2;
    temp_a2_2 = temp_s6_2 - sp10;
    temp_a3_2 = temp_fp + sp8;
    temp_a0_3 = M2C_FIELD(arg0, s32 *, 0x5EC4);
    temp_a6_2 = (M2C_FIELD(arg0, s32 *, 0x4EC) * 0x8C0) + temp_s5 + 0x3F0;
    switch (temp_a0_3) {                            /* switch 2; irregular */
    case 0:                                         /* switch 2 */
        func_00184AB0(arg0, 1, temp_a2_2, temp_a3_2, var_s4, var_s1, temp_a6_2);
        break;
    case 1:                                         /* switch 2 */
        func_00184BA8(arg0, 1, temp_a2_2, temp_a3_2, var_s4, var_s1, temp_a6_2);
        break;
    case 2:                                         /* switch 2 */
        func_00184D38(arg0, 1, temp_a2_2, temp_a3_2, var_s4, var_s1, temp_a6_2);
        break;
    case 3:                                         /* switch 2 */
        func_00184F98(arg0, 1, temp_a2_2, temp_a3_2, var_s4, var_s1, temp_a6_2);
        break;
    }
    temp_s6_3 = temp_fp + temp_s7;
    temp_s1 = var_s3 * 2;
    temp_a2_3 = sp0 + sp4;
    temp_a3_3 = temp_s6_3 - temp_s1;
    temp_a0_4 = M2C_FIELD(arg0, s32 *, 0x5EC8);
    temp_a6_3 = (M2C_FIELD(arg0, s32 *, 0x4EC) * 0x8C0) + temp_s5 + 0x590;
    switch (temp_a0_4) {                            /* switch 3; irregular */
    case 0:                                         /* switch 3 */
        func_00184AB0(arg0, 2, temp_a2_3, temp_a3_3, var_s2, var_s3, temp_a6_3);
        break;
    case 1:                                         /* switch 3 */
        func_00184BA8(arg0, 2, temp_a2_3, temp_a3_3, var_s2, var_s3, temp_a6_3);
        break;
    case 2:                                         /* switch 3 */
        func_00184D38(arg0, 2, temp_a2_3, temp_a3_3, var_s2, var_s3, temp_a6_3);
        break;
    case 3:                                         /* switch 3 */
        func_00184F98(arg0, 2, temp_a2_3, temp_a3_3, var_s2, var_s3, temp_a6_3);
        break;
    }
    temp_a2_4 = spC - sp10;
    temp_a0_5 = M2C_FIELD(arg0, s32 *, 0x5ECC);
    temp_a3_4 = temp_s6_3 - temp_s1;
    temp_a6_4 = (M2C_FIELD(arg0, s32 *, 0x4EC) * 0x8C0) + temp_s5 + 0x730;
    switch (temp_a0_5) {                            /* switch 4; irregular */
    case 0:                                         /* switch 4 */
        func_00184AB0(arg0, 3, temp_a2_4, temp_a3_4, var_s4, var_s3, temp_a6_4);
        return;
    case 1:                                         /* switch 4 */
        func_00184BA8(arg0, 3, temp_a2_4, temp_a3_4, var_s4, var_s3, temp_a6_4);
        return;
    case 2:                                         /* switch 4 */
        func_00184D38(arg0, 3, temp_a2_4, temp_a3_4, var_s4, var_s3, temp_a6_4);
        return;
    case 3:                                         /* switch 4 */
        func_00184F98(arg0, 3, temp_a2_4, temp_a3_4, var_s4, var_s3, temp_a6_4);
        return;
    }
}
