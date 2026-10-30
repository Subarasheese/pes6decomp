/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00223A80(void);
M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_002EF110(void) {
    s32 temp_a1;
    s32 temp_a4;
    s32 temp_v0;
    s32 var_a2;
    s32 var_a3;
    s32 var_a5_2;
    s32 var_a6;
    s8 var_a5;
    u8 temp_a2;
    void *temp_s0;
    void *var_a4;

    temp_s0 = func_00223A80() + 0xA4;
    temp_v0 = func_00223A80();
    func_001C48E8(temp_v0 + 6, 0x99, 0x96);
    var_a3 = 0;
    do {
        temp_a1 = var_a3 + 0x124;
        if (var_a3 < 0x32) {
            temp_a2 = M2C_FIELD(temp_v0, u8 *, 4);
            var_a5 = 0;
            if ((s32) temp_a2 > 0) {
                var_a4 = temp_s0;
loop_4:
                if (temp_a1 == M2C_FIELD(var_a4, s32 *, 4)) {
                    M2C_FIELD((temp_v0 + var_a3), s8 *, 6) = var_a5;
                } else {
                    var_a5 += 1;
                    var_a4 += 0x1440;
                    if (var_a5 >= (s32) temp_a2) {

                    } else {
                        goto loop_4;
                    }
                }
            }
        } else {
            var_a2 = 0;
            if ((s32) M2C_FIELD(temp_v0, u8 *, 5) > 0) {
                do {
                    temp_a4 = 0x63 - var_a2;
                    var_a6 = temp_a4 >> 1;
                    if (temp_a4 < 0) {
                        var_a6 = (s32) (temp_a4 + 1) >> 1;
                    }
                    var_a5_2 = var_a2 & 1;
                    if ((var_a2 < 0) && (var_a5_2 != 0)) {
                        var_a5_2 -= 2;
                    }
                    if (temp_a1 == M2C_FIELD((temp_s0 + (var_a6 * 0x1440) + (var_a5_2 * 0x880)), s32 *, 4)) {
                        M2C_FIELD((temp_v0 + var_a3), s8 *, 6) = (s8) (var_a2 + 0x32);
                    }
                    var_a2 += 1;
                } while (var_a2 < (s32) M2C_FIELD(temp_v0, u8 *, 5));
            }
        }
        var_a3 += 1;
    } while (var_a3 < 0x96);
}
