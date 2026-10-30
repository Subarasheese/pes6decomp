/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0096F810();                                /* extern */
s32 func_00994750();                                /* extern */
void *func_00994C60(u8, u8);                        /* extern */
extern s32 D_003EADF0;

s32 func_00B14D20(s32 arg0) {
    s32 temp_s0;
    s32 temp_s6;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    void *temp_s1;
    void *temp_v0;

    if (D_003EADF0 == 0) {
        return 0;
    }
    temp_s0 = func_0096F810() & 0xFF;
    var_s4 = 0;
    var_s5 = 0;
    temp_s6 = func_00994750() + ((temp_s0 & 0xFF) * 0x151A);
    do {
        var_s3 = 0;
        temp_s1 = temp_s6 + ((var_s5 & 0xFF) * 0x92);
loop_4:
        if (M2C_FIELD((temp_s1 + ((var_s3 & 0xFF) * 2)), u8 *, 0x29F4) != 0xFF) {
            temp_v0 = func_00994C60(M2C_FIELD(temp_s1, u8 *, 0x2A84), M2C_FIELD((temp_s1 + 0x2A84), u8 *, 1));
            if ((temp_v0 != NULL) && (M2C_FIELD(temp_v0, u16 *, 4) == (arg0 & 0xFFFF))) {
                var_s4 = (var_s4 + 1) & 0xFF;
            }
        }
        var_s3 = (var_s3 + 1) & 0xFF;
        if (var_s3 < 0x48) {
            goto loop_4;
        }
        var_s5 = (var_s5 + 1) & 0xFF;
    } while (var_s5 < 0x25);
    return var_s4;
}
