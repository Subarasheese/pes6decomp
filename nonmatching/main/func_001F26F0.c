/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001F26F0(s32 arg0, void *arg1) {
    s32 temp_a2;
    s32 var_a6;
    void *temp_a5;

    if ((arg0 != 0) && (arg1 != NULL)) {
        var_a6 = 0;
        do {
            if ((arg0 != 0) && (arg1 != NULL)) {
                temp_a2 = var_a6 & 0xFF;
                if (temp_a2 < 2) {
                    temp_a5 = arg0 + (temp_a2 * 0x110);
                    M2C_FIELD(temp_a5, u8 *, 0x58) = (u8) M2C_FIELD(arg1, u8 *, 0);
                    M2C_FIELD(temp_a5, u8 *, 0x59) = (u8) M2C_FIELD(arg1, u8 *, 1);
                    M2C_FIELD(temp_a5, u8 *, 0x5A) = (u8) M2C_FIELD(arg1, u8 *, 2);
                    M2C_FIELD(temp_a5, u8 *, 0x5B) = (u8) M2C_FIELD(arg1, u8 *, 3);
                }
            }
            var_a6 += 1;
        } while (var_a6 < 2);
    }
}
