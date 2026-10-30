/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002260F0(s32);
extern char D_00B8C440[];

void func_00B1C5F0(s32 arg0) {
    s32 temp_v0;
    s32 var_a6;
    s32 var_a7;
    u8 *var_a5;
    u8 temp_a1;
    u8 temp_a4;
    u8 temp_v1_3;
    void *temp_v1;
    void *temp_v1_2;

    temp_v0 = func_002260F0(arg0);
    if (temp_v0 != 0) {
        var_a7 = 0xB;
        var_a5 = ((void *)D_00B8C440) + ((arg0 & 0xFF) * 0xB);
        do {
            temp_a4 = *var_a5;
            if (temp_a4 != 0xFF) {
                temp_v1 = temp_v0 + var_a7;
                temp_a1 = M2C_FIELD(temp_v1, u8 *, 0x4B1);
                if (temp_a1 != temp_a4) {
                    var_a6 = 0;
loop_5:
                    if ((var_a7 != var_a6) && (temp_v1_2 = temp_v0 + var_a6, temp_v1_3 = M2C_FIELD(temp_v1_2, u8 *, 0x4B1), (temp_v1_3 == temp_a4))) {
                        M2C_FIELD(temp_v1, u8 *, 0x4B1) = temp_v1_3;
                        M2C_FIELD(temp_v1_2, u8 *, 0x4B1) = temp_a1;
                    } else {
                        var_a6 += 1;
                        if (var_a6 < 0x20) {
                            goto loop_5;
                        }
                    }
                }
            }
            var_a7 += 1;
            var_a5 += 1;
        } while (var_a7 < 0x16);
    }
}
