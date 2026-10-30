/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001190E8(s32, s32);                    /* extern */
M2C_UNK func_00119120(s32);                         /* extern */
M2C_UNK func_00119180();                            /* extern */
s32 func_00119370(void *, s32, M2C_UNK);            /* extern */
M2C_UNK func_00199DD0(s32, s32);                    /* extern */
s32 func_00199DF0(s32);                             /* extern */
M2C_UNK func_00199EA0(s32, M2C_UNK);                /* extern */
extern s32 D_00602008;
extern f32 D_0060200C;
extern s32 D_00602010;

s32 func_00100388(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 *arg5, f32 fparg0) {
    s32 temp_a0;
    s32 var_v0;
    u8 *var_s4;
    u8 var_s5;
    void *temp_s2;

    var_v0 = 0;
    var_s4 = NULL;
    var_s5 = 0;
    if ((arg5 != NULL) && (*arg5 != 0)) {
        if (D_0060200C != fparg0) {
            func_00119180();
            D_0060200C = fparg0;
        }
        if (D_00602010 != arg2) {
            func_00119120(arg2 >> 4);
            D_00602010 = arg2;
        }
        func_001190E8(arg0 >> 4, (s32) (arg1 - 0x20) >> 4);
        temp_s2 = arg5 + arg3;
        if ((u32) (arg4 + 0x80000002) >= 2U) {
            if (arg4 != 0) {
                var_s4 = temp_s2 + arg4;
                if (var_s4 != NULL) {
                    var_s5 = *var_s4;
                    *var_s4 = 0;
                }
            }
        }
        func_00199DD0(0x602680, D_00602008);
        temp_a0 = func_00119370(temp_s2, 0x602680, 0x300000);
        if (arg4 != 0) {
            if (var_s5 != 0) {
                if (var_s4 != NULL) {
                    *var_s4 = var_s5;
                }
            }
        }
        var_v0 = 0;
        if (temp_a0 != -1) {
            func_00199EA0(0x602680, 0);
            D_00602008 = func_00199DF0(0x602680);
            var_v0 = 0x602680;
        }
    }
    return var_v0;
}
