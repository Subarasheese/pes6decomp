/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002260F0(s32);
void func_00B1C900(s32 arg0) {
    s32 temp_v0;
    s32 var_a5;
    s32 var_a6;
    u8 temp_a0_2;
    u8 temp_a3;
    void *temp_a0;
    void *temp_a4;

    temp_v0 = func_002260F0(arg0);
    if (temp_v0 != 0) {
        var_a6 = 0;
        do {
            temp_a4 = temp_v0 + var_a6;
            temp_a3 = M2C_FIELD(temp_a4, u8 *, 0x4B1);
            if (M2C_FIELD(temp_a4, u8 *, 0x4A6) != temp_a3) {
                var_a5 = 0;
loop_4:
                if ((var_a6 != var_a5) && (temp_a0 = temp_v0 + var_a5, temp_a0_2 = M2C_FIELD(temp_a0, u8 *, 0x4B1), (M2C_FIELD(temp_a4, u8 *, 0x4A6) == temp_a0_2))) {
                    M2C_FIELD(temp_a4, u8 *, 0x4B1) = temp_a0_2;
                    M2C_FIELD(temp_a0, u8 *, 0x4B1) = temp_a3;
                } else {
                    var_a5 += 1;
                    if (var_a5 < 0x20) {
                        goto loop_4;
                    }
                }
            }
            var_a6 += 1;
        } while (var_a6 < 0xB);
    }
}
