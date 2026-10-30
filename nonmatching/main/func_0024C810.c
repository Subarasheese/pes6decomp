/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001C4698(M2C_UNK *, void *, M2C_UNK);      /* extern */
extern char D_0053CD70[];
extern char D_0053CDA4[];
extern char D_0053CDD8[];
extern char D_0053CE0C[];
extern char D_0053CE40[];
extern char D_0053CE74[];
extern char D_0053CEA8[];
extern char D_0053CEDC[];

s32 func_0024C810(s32 arg0, void *arg1) {
    M2C_UNK *var_a1_2;
    M2C_UNK *var_a2;
    M2C_UNK *var_a2_2;
    M2C_UNK *var_a2_3;
    M2C_UNK *var_a2_4;
    M2C_UNK *var_a2_5;
    M2C_UNK *var_a2_6;
    M2C_UNK *var_a2_7;
    M2C_UNK *var_a5;
    M2C_UNK *var_s1;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a0_5;
    s32 var_a0_6;
    s32 var_a0_7;
    s32 var_a0_8;
    s32 var_a6;
    s32 var_s0;
    s8 temp_v0;
    s8 temp_v0_2;
    s8 temp_v0_3;
    s8 temp_v0_4;
    s8 temp_v0_5;
    s8 temp_v0_6;
    s8 temp_v0_7;
    s8 temp_v0_8;
    s8 temp_v0_9;
    s8 var_v0;
    void *var_a1;
    void *var_a2_8;
    void *var_a3;
    void *var_a3_2;
    void *var_a3_3;
    void *var_a3_4;
    void *var_a3_5;
    void *var_a3_6;
    void *var_a3_7;
    void *var_s2;

    var_a1 = arg1;
    temp_v1 = arg0 & 0xFF;
    switch (temp_v1) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        var_a0 = 0x1A;
        var_a2 = ((void *)D_0053CD70);
        var_a3 = var_a1;
        do {
            var_a0 -= 1;
            temp_v0 = M2C_FIELD(var_a3, s8 *, 1);
            M2C_FIELD(var_a2, s8 *, 0) = (s8) M2C_FIELD(var_a3, s8 *, 0);
            var_a3 += 2;
            M2C_FIELD(var_a2, s8 *, 1) = temp_v0;
            var_a2 += 2;
        } while (var_a0 > 0);
        var_a3_2 = var_a1 + 0x34;
        var_a2_2 = ((void *)D_0053CDA4);
        var_a0_2 = 0x1A;
        do {
            var_a0_2 -= 1;
            temp_v0_2 = M2C_FIELD(var_a3_2, s8 *, 1);
            M2C_FIELD(var_a2_2, s8 *, 0) = (s8) M2C_FIELD(var_a3_2, s8 *, 0);
            var_a3_2 += 2;
            M2C_FIELD(var_a2_2, s8 *, 1) = temp_v0_2;
            var_a2_2 += 2;
        } while (var_a0_2 > 0);
        var_a3_3 = var_a1 + 0x68;
        var_a2_3 = ((void *)D_0053CDD8);
        var_a0_3 = 0x1A;
        do {
            var_a0_3 -= 1;
            temp_v0_3 = M2C_FIELD(var_a3_3, s8 *, 1);
            M2C_FIELD(var_a2_3, s8 *, 0) = (s8) M2C_FIELD(var_a3_3, s8 *, 0);
            var_a3_3 += 2;
            M2C_FIELD(var_a2_3, s8 *, 1) = temp_v0_3;
            var_a2_3 += 2;
        } while (var_a0_3 > 0);
        var_a3_4 = var_a1 + 0x9C;
        var_a2_4 = ((void *)D_0053CE0C);
        var_a0_4 = 0x1A;
        do {
            var_a0_4 -= 1;
            temp_v0_4 = M2C_FIELD(var_a3_4, s8 *, 1);
            M2C_FIELD(var_a2_4, s8 *, 0) = (s8) M2C_FIELD(var_a3_4, s8 *, 0);
            var_a3_4 += 2;
            M2C_FIELD(var_a2_4, s8 *, 1) = temp_v0_4;
            var_a2_4 += 2;
        } while (var_a0_4 > 0);
        var_a3_5 = var_a1 + 0xD0;
        var_a2_5 = ((void *)D_0053CE40);
        var_a0_5 = 0x1A;
        do {
            var_a0_5 -= 1;
            temp_v0_5 = M2C_FIELD(var_a3_5, s8 *, 1);
            M2C_FIELD(var_a2_5, s8 *, 0) = (s8) M2C_FIELD(var_a3_5, s8 *, 0);
            var_a3_5 += 2;
            M2C_FIELD(var_a2_5, s8 *, 1) = temp_v0_5;
            var_a2_5 += 2;
        } while (var_a0_5 > 0);
        var_a3_6 = var_a1 + 0x104;
        var_a2_6 = ((void *)D_0053CE74);
        var_a0_6 = 0x1A;
        do {
            var_a0_6 -= 1;
            temp_v0_6 = M2C_FIELD(var_a3_6, s8 *, 1);
            M2C_FIELD(var_a2_6, s8 *, 0) = (s8) M2C_FIELD(var_a3_6, s8 *, 0);
            var_a3_6 += 2;
            M2C_FIELD(var_a2_6, s8 *, 1) = temp_v0_6;
            var_a2_6 += 2;
        } while (var_a0_6 > 0);
        var_a3_7 = var_a1 + 0x138;
        var_a2_7 = ((void *)D_0053CEA8);
        var_a0_7 = 0x1A;
        do {
            var_a0_7 -= 1;
            temp_v0_7 = M2C_FIELD(var_a3_7, s8 *, 1);
            M2C_FIELD(var_a2_7, s8 *, 0) = (s8) M2C_FIELD(var_a3_7, s8 *, 0);
            var_a3_7 += 2;
            M2C_FIELD(var_a2_7, s8 *, 1) = temp_v0_7;
            var_a2_7 += 2;
        } while (var_a0_7 > 0);
        var_a2_8 = var_a1 + 0x16C;
        var_a0_8 = 0x1A;
        var_a1_2 = ((void *)D_0053CEDC);
        do {
            var_a0_8 -= 1;
            temp_v0_8 = M2C_FIELD(var_a2_8, s8 *, 1);
            M2C_FIELD(var_a1_2, s8 *, 0) = (s8) M2C_FIELD(var_a2_8, s8 *, 0);
            var_a2_8 += 2;
            M2C_FIELD(var_a1_2, s8 *, 1) = temp_v0_8;
            var_a1_2 += 2;
        } while (var_a0_8 > 0);
block_45:
    default:                                        /* switch 1 */
        return 0;
    case 1:                                         /* switch 1 */
        var_a6 = 0;
        var_a5 = ((void *)D_0053CD70);
        do {
            var_v0 = M2C_FIELD(var_a1, s8 *, 1);
            if (var_v0 != 0xA) {
                if (var_v0 <= 0) {
                    var_v0 = -var_v0;
                }
                if (var_v0 != 0xB) {
                    temp_v0_9 = M2C_FIELD(var_a5, s8 *, 1);
                    switch (temp_v0_9) {            /* switch 2; irregular */
                    case 10:                        /* switch 2 */
                        M2C_FIELD(var_a1, s8 *, 1) = 0;
                        break;
                    case 11:                        /* switch 2 */
                        M2C_FIELD(var_a1, s8 *, 1) = 4;
                        break;
                    case -11:                       /* switch 2 */
                        M2C_FIELD(var_a1, s8 *, 1) = -4;
                        break;
                    }
                } else {
                    goto block_34;
                }
            } else {
block_34:
                M2C_FIELD(var_a1, s8 *, 1) = M2C_FIELD(var_a5, s8 *, 1);
            }
            var_a6 += 1;
            var_a1 += 0x34;
            var_a5 += 0x34;
        } while (var_a6 < 8);
        goto block_45;
    case 2:                                         /* switch 1 */
        var_s2 = var_a1;
        var_s0 = 0;
        var_s1 = ((void *)D_0053CD70);
loop_39:
        if (func_001C4698(var_s1, var_s2, 0x34) == 0) {
            var_s0 += 1;
            var_s2 += 0x34;
            var_s1 += 0x34;
            if (var_s0 >= 8) {
                goto block_45;
            }
            goto loop_39;
        }
        return 1;
    }
}
