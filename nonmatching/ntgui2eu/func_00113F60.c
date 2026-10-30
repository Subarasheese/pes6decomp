/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_005F8648[];
extern char D_005F8700[];

void func_00113F60(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_s3;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_a2_4;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_a4;
    s32 var_a4_2;
    s32 var_v0;
    s32 var_v0_2;

    temp_s3 = M2C_FIELD(arg0, s32 *, 0x48);
    if (arg0 == NULL) {
        func_001AD620(((void *)D_005F8648), 0x630, ((void *)D_005F8700));
    }
    if ((arg1 != 0) || (arg2 != 0)) {
        if (arg2 != 0) {
            var_a2 = arg2;
            if (arg2 > 0) {
                do {
                    var_a2 -= 1;
                    M2C_FIELD(arg0, s32 *, 0x48) = (s32) M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x48) * 0x198) + M2C_FIELD(arg0, s32 *, 0x78)), u16 *, 0x190);
                } while (var_a2 != 0);
                var_a4 = 1;
            } else {
                var_a4 = 0;
                if (var_a2 < 0) {
                    var_a2_2 = -var_a2;
                    do {
                        var_a2_2 -= 1;
                        M2C_FIELD(arg0, s32 *, 0x48) = (s32) M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x48) * 0x198) + M2C_FIELD(arg0, s32 *, 0x78)), u16 *, 0x18E);
                    } while (var_a2_2 != 0);
                    var_a4 = 0;
                }
            }
            var_a3 = M2C_FIELD(arg0, s32 *, 0x48);
            temp_a1 = M2C_FIELD(arg0, s32 *, 0x78);
            var_a2_3 = 0x20;
            if (!(M2C_FIELD(((var_a3 * 0x198) + temp_a1), s32 *, 0x18C) & 0x14)) {

            } else {
                var_v0 = var_a3 * 2;
loop_17:
                var_a2_3 -= 1;
                var_a3 = (s32) M2C_FIELD(((var_a4 * 2) + (((var_v0 + var_a3) * 0x88) + temp_a1)), u16 *, 0x18E);
                if (var_a2_3 != 0) {
                    var_v0 = var_a3 * 2;
                    if (!(M2C_FIELD(((var_a3 * 0x198) + temp_a1), s32 *, 0x18C) & 0x14)) {
                        M2C_FIELD(arg0, s32 *, 0x48) = var_a3;
                    } else {
                        goto loop_17;
                    }
                } else {
                    M2C_FIELD(arg0, s32 *, 0x48) = temp_s3;
                }
            }
        }
        if (arg1 != 0) {
            if (arg1 > 0) {
                if (arg1 <= 0) {
                    var_a4_2 = 3;
                } else {
                    var_a1 = arg1;
                    do {
                        var_a1 -= 1;
                        M2C_FIELD(arg0, s32 *, 0x48) = (s32) M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x48) * 0x198) + M2C_FIELD(arg0, s32 *, 0x78)), u16 *, 0x194);
                    } while (var_a1 != 0);
                    var_a4_2 = 3;
                }
            } else {
                var_a4_2 = 2;
                if (arg1 < 0) {
                    var_a1_2 = -arg1;
                    do {
                        var_a1_2 -= 1;
                        M2C_FIELD(arg0, s32 *, 0x48) = (s32) M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x48) * 0x198) + M2C_FIELD(arg0, s32 *, 0x78)), u16 *, 0x192);
                    } while (var_a1_2 != 0);
                    var_a4_2 = 2;
                }
            }
            var_a3_2 = M2C_FIELD(arg0, s32 *, 0x48);
            temp_a1_2 = M2C_FIELD(arg0, s32 *, 0x78);
            var_a2_4 = 0x20;
            if (!(M2C_FIELD(((var_a3_2 * 0x198) + temp_a1_2), s32 *, 0x18C) & 0x14)) {

            } else {
                var_v0_2 = var_a3_2 * 2;
loop_36:
                var_a2_4 -= 1;
                var_a3_2 = (s32) M2C_FIELD(((var_a4_2 * 2) + (((var_v0_2 + var_a3_2) * 0x88) + temp_a1_2)), u16 *, 0x18E);
                if (var_a2_4 != 0) {
                    var_v0_2 = var_a3_2 * 2;
                    if (!(M2C_FIELD(((var_a3_2 * 0x198) + temp_a1_2), s32 *, 0x18C) & 0x14)) {
                        M2C_FIELD(arg0, s32 *, 0x48) = var_a3_2;
                    } else {
                        goto loop_36;
                    }
                } else {
                    M2C_FIELD(arg0, s32 *, 0x48) = temp_s3;
                }
            }
        }
    }
}
