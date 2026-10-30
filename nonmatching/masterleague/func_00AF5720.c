/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void *func_00223E00(s32);                           /* extern */
M2C_UNK func_00937FD0();                            /* extern */
s32 func_00970770(s32, u8);                         /* extern */
void *func_00970870(s32);                           /* extern */
M2C_UNK func_00AF54A0(s32, void *, s32);            /* extern */
M2C_UNK func_00AFF3C0();                            /* extern */

void func_00AF5720(void) {
    s32 temp_s1_2;
    s32 temp_s1_4;
    s32 var_s0;
    s32 var_s0_2;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_a0_3;
    u8 var_a1;
    u8 var_a1_2;
    void *temp_s1;
    void *temp_s1_3;
    void *temp_v0;
    void *temp_v0_2;

    var_s0 = 1;
    do {
        temp_s1 = func_00223E00(var_s0);
        temp_v0 = func_00970870(var_s0);
        if ((temp_s1 != NULL) && (temp_v0 != NULL)) {
            if (((u64) ((s64) M2C_FIELD(temp_s1, u8 *, 6) << 0x39) >> 0x3F) == 0) {
                temp_a0 = M2C_FIELD(temp_v0, u8 *, 0x3D);
                var_a1 = M2C_FIELD(temp_s1, u8 *, 0xC);
                M2C_FIELD(temp_v0, u8 *, 0x3D) = (u8) ((temp_a0 & ~0x3E) | (((((u64) ((s64) temp_a0 << 0x3A) >> 0x3B) + var_a1) & 0x1F) * 2));
            } else {
                var_a1 = (s8) M2C_FIELD(temp_s1, u8 *, 0xC) + 2;
                M2C_FIELD(temp_v0, u8 *, 0x3D) = (u8) ((M2C_FIELD(temp_v0, u8 *, 0x3D) & ~0x3E) | ((var_a1 & 0x1F) * 2));
            }
            temp_s1_2 = func_00970770(var_s0, var_a1);
            func_00AF54A0(temp_s1_2, func_00970870(var_s0), var_s0);
        }
        var_s0 = (var_s0 + 1) & 0xFFFF;
    } while (var_s0 < 0x12B0);
    var_s0_2 = 0x7000;
    do {
        temp_s1_3 = func_00223E00(var_s0_2);
        temp_v0_2 = func_00970870(var_s0_2);
        if ((temp_s1_3 != NULL) && (temp_v0_2 != NULL)) {
            temp_a0_2 = M2C_FIELD(temp_s1_3, u8 *, 6);
            if (temp_a0_2 & 0x3F) {
                if (((u64) ((s64) temp_a0_2 << 0x39) >> 0x3F) == 0) {
                    temp_a0_3 = M2C_FIELD(temp_v0_2, u8 *, 0x3D);
                    var_a1_2 = M2C_FIELD(temp_s1_3, u8 *, 0xC);
                    M2C_FIELD(temp_v0_2, u8 *, 0x3D) = (u8) ((temp_a0_3 & ~0x3E) | (((((u64) ((s64) temp_a0_3 << 0x3A) >> 0x3B) + var_a1_2) & 0x1F) * 2));
                } else {
                    var_a1_2 = (s8) M2C_FIELD(temp_s1_3, u8 *, 0xC) + 2;
                    M2C_FIELD(temp_v0_2, u8 *, 0x3D) = (u8) ((M2C_FIELD(temp_v0_2, u8 *, 0x3D) & ~0x3E) | ((var_a1_2 & 0x1F) * 2));
                }
                temp_s1_4 = func_00970770(var_s0_2, var_a1_2);
                func_00AF54A0(temp_s1_4, func_00970870(var_s0_2), var_s0_2);
            }
        }
        var_s0_2 = (var_s0_2 + 1) & 0xFFFF;
    } while (var_s0_2 < 0x7020);
    func_00AFF3C0();
    func_00937FD0();
}
