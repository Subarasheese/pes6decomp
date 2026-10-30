/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00994C60(s32, s32);                      /* extern */

void func_00B20510(void) {
    s32 var_s0;
    s32 var_s1;
    u16 temp_a2;
    u64 temp_a0;
    void *temp_v0;

    var_s1 = 0;
    do {
        var_s0 = 0;
loop_2:
        temp_v0 = func_00994C60(var_s1, var_s0);
        if ((temp_v0 != NULL) && (M2C_FIELD(temp_v0, u16 *, 4) != 0)) {
            temp_a2 = M2C_FIELD(temp_v0, u16 *, 0);
            if (((u64) ((s64) temp_a2 << 0x35) >> 0x3C) != 2) {

            } else {
                temp_a0 = (u64) ((s64) M2C_FIELD(temp_v0, u8 *, 1) << 0x39) >> 0x3C;
                switch (temp_a0) {                  /* irregular */
                case 2:
                    M2C_FIELD(temp_v0, u16 *, 0) = (u16) ((temp_a2 & ~0x780) | 0x200);
                    break;
                case 3:
                    M2C_FIELD(temp_v0, u16 *, 0) = (u16) ((temp_a2 & ~0x780) | 0x280);
                    break;
                }
            }
        }
        var_s0 += 1;
        if (var_s0 < 0x25) {
            goto loop_2;
        }
        var_s1 += 1;
    } while (var_s1 < 0x48);
}
