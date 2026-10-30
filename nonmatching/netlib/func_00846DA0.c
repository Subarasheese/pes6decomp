/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s16 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_001C8590(s16 *, s32, M2C_UNK, s16);    /* extern */
extern char D_008B09E0[];

s16 *func_00846DA0(s64 arg0, s32 arg1, s32 arg2, s64 arg3, void *arg4) {
    s16 *var_a2;
    s16 *var_a2_2;
    s16 *var_s0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_v1;
    s64 temp_s2;
    s64 var_a3;

    var_a3 = arg3;
    temp_s2 = var_a3;
    if (arg0 != 0) {
        var_a2 = ((void *)D_008B09E0);
        var_a1 = 0;
loop_2:
        if (*var_a2 == ((s64) (arg0 << 0x30) >> 0x30)) {

        } else {
            var_a1 += 1;
            var_a2 += 0x88;
            if (var_a1 >= 8) {
                var_a2 = NULL;
            } else {
                goto loop_2;
            }
        }
        if (var_a2 != NULL) {
            return NULL;
        }
        var_s0 = ((void *)D_008B09E0) + ((arg0 - 1) * 0x88);
        *var_s0 = (s16) arg0;
        goto block_24;
    }
    var_v1 = 0;
    var_s0 = ((void *)D_008B09E0);
loop_9:
    if (*var_s0 == 0) {

    } else {
        var_v1 += 1;
        var_s0 += 0x88;
        if (var_v1 >= 8) {
            var_s0 = NULL;
        } else {
            goto loop_9;
        }
    }
    func_001C48E8(var_s0, 0, 0x88);
    var_a3 = 1;
loop_14:
    var_a2_2 = ((void *)D_008B09E0);
    var_a1_2 = 0;
loop_15:
    if (*var_a2_2 == ((s64) (var_a3 << 0x30) >> 0x30)) {

    } else {
        var_a1_2 += 1;
        var_a2_2 += 0x88;
        if (var_a1_2 >= 8) {
            var_a2_2 = NULL;
        } else {
            goto loop_15;
        }
    }
    if (var_a2_2 != NULL) {
        var_a3 += 1;
        if (var_a3 >= 9) {
            var_a3 = -1;
        } else {
            goto loop_14;
        }
    }
    *var_s0 = (s16) var_a3;
block_24:
    M2C_FIELD(var_s0, M2C_UNK32 *, 8) = (M2C_UNK32) M2C_FIELD(arg4, M2C_UNK32 *, 4);
    M2C_FIELD(var_s0, f32 *, 0xC) = (f32) M2C_FIELD(arg4, f32 *, 0);
    M2C_FIELD(var_s0, M2C_UNK32 *, 0x10) = (M2C_UNK32) M2C_FIELD(arg4, M2C_UNK32 *, 4);
    M2C_FIELD(var_s0, f32 *, 0x14) = (f32) M2C_FIELD(arg4, f32 *, 8);
    M2C_FIELD(var_s0, f32 *, 0x18) = (f32) M2C_FIELD(arg4, f32 *, 0xC);
    M2C_FIELD(var_s0, s8 *, 0x50) = 1;
    M2C_FIELD(var_s0, s8 *, 0x51) = (s8) temp_s2;
    M2C_FIELD(var_s0, s32 *, 4) = arg1;
    func_001C8590(var_s0 + 0x1C, arg2, 0x1F, (s16) var_a3);
    return var_s0;
}
