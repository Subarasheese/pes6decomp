/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern s32 func_002260F0(s32);
s32 func_00224D90(s32, u8);                         /* extern */
M2C_UNK func_00B1BEA0(s32);                         /* extern */
M2C_UNK func_00B1C0D0(s32);                         /* extern */
M2C_UNK func_00B1C340(s32);                         /* extern */
M2C_UNK func_00B1C5F0(s32);                         /* extern */
M2C_UNK func_00B1C6B0(s32);                         /* extern */
M2C_UNK func_00B1C900(s32);                         /* extern */
M2C_UNK func_00B1C9A0(s32);                         /* extern */
M2C_UNK func_00B2F780(s32);                         /* extern */

void func_00B1CC10(s32 arg0) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;
    s32 var_s2;
    s8 temp_v1;
    s8 var_a2;
    void *temp_a1;

    if (((arg0 & 0xFF) == (func_00225820() & 0xFF)) && (temp_v0 = func_002260F0(arg0), (temp_v0 != 0))) {
        var_s1 = 0;
        var_s2 = 0;
        do {
            temp_a0 = func_00224D90(arg0, M2C_FIELD((temp_v0 + var_s2), u8 *, 0x4B1)) & 0xFFFF;
            if ((temp_a0 == 0) && !(var_s1 & 0xFF)) {
                var_s1 = 1;
            }
            if ((temp_a0 != 0) && ((var_s1 & 0xFF) == 1)) {
                var_s1 = 2;
            }
            var_s2 += 1;
        } while (var_s2 < 0x20);
        if ((var_s1 & 0xFF) == 2) {
            goto block_11;
        }
    } else {
block_11:
        func_00B2F780(arg0);
        func_00B1C9A0(arg0);
        func_00B1C900(arg0);
        func_00B1C6B0(arg0);
        func_00B1C5F0(arg0);
        func_00B1C340(arg0);
        func_00B1C0D0(arg0);
        func_00B1BEA0(arg0);
        temp_v0_2 = func_002260F0(arg0);
        if (temp_v0_2 != 0) {
            var_a2 = 0;
            do {
                temp_a1 = temp_v0_2 + var_a2;
                M2C_FIELD(temp_a1, s8 *, 0x52) = var_a2;
                M2C_FIELD(temp_a1, s8 *, 0x53) = (s8) (var_a2 + 1);
                M2C_FIELD(temp_a1, s8 *, 0x54) = (s8) (var_a2 + 2);
                M2C_FIELD(temp_a1, s8 *, 0x55) = (s8) (var_a2 + 3);
                M2C_FIELD(temp_a1, s8 *, 0x56) = (s8) (var_a2 + 4);
                M2C_FIELD(temp_a1, s8 *, 0x57) = (s8) (var_a2 + 5);
                temp_v1 = var_a2 + 7;
                M2C_FIELD(temp_a1, s8 *, 0x58) = (s8) (var_a2 + 6);
                var_a2 += 8;
                M2C_FIELD(temp_a1, s8 *, 0x59) = temp_v1;
            } while (var_a2 < 0x20);
        }
    }
}
