/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001768E0(void *, M2C_UNK *, M2C_UNK *, s32, s32); /* extern */
extern char D_00390F60[];
extern char D_00390F98[];
extern char D_003CC140[];
extern M2C_UNK func_00176440;

void *func_001765F0(s32 arg0, s32 arg1) {
    s32 *var_v1;
    s32 var_a0;
    void *temp_s0;
    void *var_v0;

    var_v1 = ((void *)D_00390F98) + 4;
    var_a0 = 0;
    if (M2C_FIELD(((void *)D_00390F98), s32 *, 4) != 0) {
loop_1:
        var_a0 += 1;
        var_v1 += 0x24;
        if (var_a0 < 0x20) {
            if (*var_v1 != 0) {
                goto loop_1;
            }
        }
    }
    var_v0 = NULL;
    if (var_a0 != 0x20) {
        temp_s0 = (var_a0 * 0x24) + (((void *)D_00390F98) + 0xF98);
        M2C_FIELD(temp_s0, s32 *, 4) = 1;
        M2C_FIELD(temp_s0, M2C_UNK **, 0) = ((void *)D_00390F60);
        M2C_FIELD(temp_s0, s32 *, 0x14) = arg0;
        M2C_FIELD(temp_s0, s32 *, 0x18) = arg1;
        M2C_FIELD(temp_s0, M2C_UNK **, 8) = ((void *)D_003CC140);
        M2C_FIELD(temp_s0, M2C_UNK **, 0x1C) = &func_00176440;
        M2C_FIELD(temp_s0, void **, 0x20) = temp_s0;
        func_001768E0(temp_s0, &func_00176440, ((void *)D_003CC140), arg1, arg0);
        var_v0 = temp_s0;
    }
    return var_v0;
}
