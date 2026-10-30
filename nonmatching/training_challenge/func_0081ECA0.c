/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00154410(s32, s32);
M2C_UNK func_0081D5A0(void *);                      /* extern */
M2C_UNK func_0081EC30(void *, u8 *, u8, s32, s32);  /* extern */

void func_0081ECA0(void *arg0) {
    s32 temp_a0;
    s32 var_a3;
    s32 var_a4;
    s32 var_v1;
    u8 *temp_a1;
    u8 temp_a2;
    u8 temp_v0_2;
    u8 temp_v1_2;
    void *temp_v0;
    void *temp_v1;

    if (func_00154410(0, 0x80) != 0) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x3C) + arg0;
        temp_v0_2 = M2C_FIELD(temp_v0, u8 *, 0x40);
        if ((s32) temp_v0_2 > 0) {
            M2C_FIELD(temp_v0, u8 *, 0x40) = (u8) (temp_v0_2 - 1);
            M2C_FIELD(arg0, s32 *, 0x17078) = 1;
            func_0081D5A0(arg0);
        }
    }
    if (func_00154410(0, 0x20) != 0) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x3C) + arg0;
        temp_v1_2 = M2C_FIELD(temp_v1, u8 *, 0x40);
        if ((s32) temp_v1_2 < (*M2C_FIELD(arg0, u8 **, 0x6C) - 2)) {
            M2C_FIELD(temp_v1, u8 *, 0x40) = (u8) (temp_v1_2 + 1);
            M2C_FIELD(arg0, s32 *, 0x17078) = 1;
            func_0081D5A0(arg0);
        }
    }
    if (func_00154410(0, 0x8000) != 0) {
        var_a4 = 0;
        temp_a1 = M2C_FIELD(arg0, u8 **, 0x6C);
        temp_a2 = M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x3C) + arg0), u8 *, 0x40);
        temp_a0 = *temp_a1 - 1;
        var_a3 = 0;
        if (temp_a0 > 0) {
            do {
                if (M2C_FIELD((temp_a1 + var_a3), s8 *, 0x12E) != 0) {
                    var_a4 += 1;
                }
                var_a3 += 1;
            } while (var_a3 < temp_a0);
        }
        var_v1 = var_a4 >= 2;
        if (var_v1 != 0) {
            var_v1 = M2C_FIELD((temp_a2 + temp_a1), s8 *, 0x12E) != 0;
        }
        if (var_v1 != 0) {
            func_0081EC30(arg0, temp_a1, temp_a2, var_a3, var_a4);
            M2C_FIELD(arg0, s32 *, 0x1707C) = 1;
        }
    }
}
