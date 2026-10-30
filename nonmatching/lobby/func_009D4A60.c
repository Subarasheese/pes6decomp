/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00A7DE20[];
extern char D_00A7DE80[];
extern char D_00A7DE84[];
extern char D_00A7DE88[];

s32 func_009D4A60(s32 arg0) {
    s32 temp_v0;
    s32 var_a0;
    s32 var_a1;
    void *temp_v0_2;

    var_a1 = 0;
loop_10:
    if (var_a1 < 8) {
        if (arg0 != M2C_FIELD((((void *)D_00A7DE20) + (var_a1 * 0xC)), s32 *, 0xC)) {
            var_a1 += 1;
            goto loop_10;
        }
        var_a0 = var_a1 + 1;
loop_6:
        if (var_a0 < 8) {
            temp_v0 = var_a0 * 0xC;
            var_a0 += 1;
            temp_v0_2 = ((void *)D_00A7DE20) + temp_v0;
            M2C_FIELD(temp_v0_2, f32 *, 0) = (f32) M2C_FIELD(temp_v0_2, f32 *, 0xC);
            M2C_FIELD(temp_v0_2, f32 *, 4) = (f32) M2C_FIELD(temp_v0_2, f32 *, 0x10);
            M2C_FIELD(temp_v0_2, f32 *, 8) = (f32) M2C_FIELD(temp_v0_2, f32 *, 0x14);
            goto loop_6;
        }
        (*(s32 *)D_00A7DE80) = 0;
        (*(s32 *)D_00A7DE84) = 0;
        (*(s32 *)D_00A7DE88) = 0;
        return 1;
    }
    return 0;
}
