/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_0022F150(void);
void func_00983D40(void) {
    s32 temp_a3;
    s32 temp_a4;
    s32 var_a6;
    s32 var_a7;
    void *var_a4;
    void *var_a5;

    var_a5 = func_0022F150();
    if (var_a5 != NULL) {
        temp_a4 = 0 & 1;
        var_a7 = 0;
        temp_a3 = 0 & 0x3F;
        do {
            var_a6 = 0;
            var_a4 = var_a5;
loop_3:
            var_a6 += 1;
            M2C_FIELD(var_a4, u8 *, 0x7D0) = (u8) ((M2C_FIELD(var_a4, u8 *, 0x7D0) & ~0x3F) | temp_a3);
            M2C_FIELD(var_a4, u8 *, 0x7D0) = (u8) ((M2C_FIELD(var_a4, u8 *, 0x7D0) & ~0xC0) | ((0 & 3) << 6));
            M2C_FIELD(var_a4, s8 *, 0x7D1) = 0xFF;
            M2C_FIELD(var_a4, u8 *, 0x7D2) = (u8) ((M2C_FIELD(var_a4, u8 *, 0x7D2) & ~0x3F) | temp_a3);
            M2C_FIELD(var_a4, u8 *, 0x7D2) = (u8) ((M2C_FIELD(var_a4, u8 *, 0x7D2) & ~0x40) | (temp_a4 << 6));
            M2C_FIELD(var_a4, u8 *, 0x7D2) = (u8) ((M2C_FIELD(var_a4, u8 *, 0x7D2) & ~0x80) | (temp_a4 << 7));
            M2C_FIELD(var_a4, s8 *, 0x7D3) = 0xFF;
            var_a4 += 4;
            if (var_a6 < 0x58) {
                goto loop_3;
            }
            var_a7 += 1;
            var_a5 += 0x160;
        } while (var_a7 < 2);
    }
}
