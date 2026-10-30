/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s16 func_00BC5DF0(M2C_UNK, s32, s32);               /* extern */
M2C_UNK func_00BF4F00(void *, s32, s32);            /* extern */
M2C_UNK func_00BF51C0(void *, s32);                 /* extern */
M2C_UNK func_00BF5660(void *, M2C_UNK);             /* extern */

void func_00BF4DA0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;
    s32 temp_v1;
    s32 var_s1_2;
    s32 var_s2;
    void *var_s1;
    void *var_s2_2;

    temp_s0 = arg1 & 0xFFFF;
    if (temp_s0 != 0xFFFF) {
        M2C_FIELD(arg0, s32 *, 0x1430) = 0;
        var_s2 = 0;
        M2C_FIELD(arg0, s32 *, 0x1434) = 0;
        var_s1 = arg0;
        M2C_FIELD(arg0, s32 *, 0x1438) = 0;
        M2C_FIELD(arg0, s32 *, 0x143C) = 0;
        M2C_FIELD(arg0, s32 *, 0x1440) = 0;
        do {
            M2C_FIELD(var_s1, s16 *, 0x80) = 0;
            M2C_FIELD(var_s1, s32 *, 0x7C) = 1;
            func_00BF5660(var_s1, 0xFFFF);
            var_s2 += 1;
            var_s1 += 0x88;
        } while (var_s2 < 0x25);
        switch (temp_s0) {                          /* irregular */
        case 0x11C:
            var_s1_2 = 0;
            var_s2_2 = arg0;
            do {
                temp_v1 = var_s1_2 + (arg2 * 0xD);
                if (temp_v1 < 0x98) {
                    M2C_FIELD(var_s2_2, s16 *, 0x80) = func_00BC5DF0(0x11C, temp_v1 & 0xFF, arg3);
                    func_00BF5660(var_s2_2, 0x11C);
                } else {
                    M2C_FIELD(var_s2_2, s32 *, 0x7C) = 0;
                }
                var_s1_2 += 1;
                var_s2_2 += 0x88;
            } while (var_s1_2 < 0xD);
            M2C_FIELD(arg0, s32 *, 0x144C) = 0xD;
            M2C_FIELD(arg0, s32 *, 0x1454) = arg2;
            M2C_FIELD(arg0, s32 *, 0x1458) = 0xC;
            return;
        case 0x11A:
            func_00BF51C0(arg0, arg2);
            return;
        default:
            func_00BF4F00(arg0, arg1, arg3);
            break;
        }
    }
}
