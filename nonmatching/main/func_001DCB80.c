/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0052ABF0[];
extern char D_0052ABF8[];

void func_001DCB80(void) {
    s32 var_a0;
    s32 var_v0;
    void *temp_a1;

    var_v0 = (*(s32 *)D_0052ABF8);
loop_1:
    temp_a1 = ((void *)D_0052ABF0) + (var_v0 - 0x6784);
    if (M2C_FIELD(temp_a1, u8 *, 0xC) & 1) {
        var_v0 += 1;
        if (var_v0 < 0x6978) {
            if (var_v0 < 0x6784) {
                var_v0 = 0x6977;
            }
        } else {
            var_v0 = 0x6784;
        }
        goto loop_1;
    }
    var_a0 = var_v0 + 1;
    if (var_a0 < 0x6978) {
        if (var_a0 < 0x6784) {
            var_a0 = 0x6977;
        }
    } else {
        var_a0 = 0x6784;
    }
    (*(s32 *)D_0052ABF8) = var_a0;
    M2C_FIELD(temp_a1, u8 *, 0xC) = (u8) (M2C_FIELD(temp_a1, u8 *, 0xC) | 1);
}
