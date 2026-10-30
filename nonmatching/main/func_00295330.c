/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001CD6B0(s32, s32);                        /* extern */
extern char D_005A24B0[];

f32 func_00295330(void) {
    f32 var_f2;
    s32 temp_v0;

    temp_v0 = func_001CD6B0((s32) (-1000.0f * M2C_FIELD(((void *)D_005A24B0), f32 *, 4)), (s32) (1000.0f * M2C_FIELD(((void *)D_005A24B0), f32 *, 0))) & 0xFFFF;
    if (temp_v0 < 0) {
        var_f2 = 2.0f * (f32) (((u32) temp_v0 >> 1) | (temp_v0 & 1));
    } else {
        var_f2 = (f32) temp_v0;
    }
    return 6.2831855f * (var_f2 / 65536.0f);
}
