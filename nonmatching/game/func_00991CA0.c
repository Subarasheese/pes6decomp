/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B3070(u16, u16);                        /* extern */
extern s32 D_003E7A08;

s32 func_00991CA0(void *arg0) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    void *temp_a0;

    var_s2 = 0;
    var_s1 = 0;
    var_s0 = 0;
    do {
        temp_a0 = D_003E7A08 + var_s0;
        if ((M2C_FIELD(temp_a0, u8 *, 8) == M2C_FIELD(arg0, u8 *, 0)) && (M2C_FIELD(temp_a0, s32 *, 4) == 4)) {
            temp_v0 = func_009B3070(M2C_FIELD(arg0, u16 *, 0x2A), M2C_FIELD(temp_a0, u16 *, 0x26)) & 0xFFFF;
            if ((temp_v0 >= 0x5001) && (var_s2 == 0)) {
                var_s2 = 1;
            }
            if (temp_v0 < 0x3000) {
                var_s2 = 0;
            }
        }
        var_s1 += 1;
        var_s0 += 0x40;
    } while (var_s1 < 0xA);
    return 0;
}
