/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001771E8(void *, M2C_UNK *, M2C_UNK *, M2C_UNK *, s32, s32, s32); /* extern */
extern char D_00391448[];
extern char D_00391480[];
extern char D_003CC2A0[];
extern M2C_UNK func_00176E58;

void *func_00177018(s32 arg0, s32 arg1, s32 arg2) {
    s32 *var_v1;
    s32 var_a0;
    void *var_s0;

    var_v1 = ((void *)D_00391480) + 4;
    var_a0 = 0;
    if (M2C_FIELD(((void *)D_00391480), s32 *, 4) != 0) {
        var_a0 = 1;
loop_2:
        var_v1 += 0x40;
        if (var_a0 < 0x100) {
            if (*var_v1 != 0) {
                var_a0 += 1;
                goto loop_2;
            }
        }
    }
    var_s0 = NULL;
    if (var_a0 != 0x100) {
        var_s0 = (var_a0 << 6) + (((void *)D_00391480) + 0x1480);
        M2C_FIELD(var_s0, s32 *, 4) = 1;
        M2C_FIELD(var_s0, M2C_UNK **, 0) = ((void *)D_00391448);
        M2C_FIELD(var_s0, s32 *, 0x1C) = arg0;
        M2C_FIELD(var_s0, s32 *, 0x20) = arg1;
        M2C_FIELD(var_s0, s32 *, 0x24) = arg2;
        M2C_FIELD(var_s0, M2C_UNK **, 8) = ((void *)D_003CC2A0);
        M2C_FIELD(var_s0, M2C_UNK **, 0x38) = &func_00176E58;
        M2C_FIELD(var_s0, void **, 0x3C) = var_s0;
        func_001771E8(var_s0, ((void *)D_003CC2A0), &func_00176E58, ((void *)D_00391480), arg2, arg1, arg0);
    }
    return var_s0;
}
