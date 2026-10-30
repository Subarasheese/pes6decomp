/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0096B650(f32 *, void *, s32, s32, s32, u8, M2C_UNK *, s32); /* extern */
extern char Pes6MatchPlayers[];
extern char D_00CBBE48[];

void func_0096B500(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4, u8 arg5, M2C_UNK *arg6, s32 arg7) {
    f32 sp40;
    f32 sp48;
    M2C_UNK *var_a6;
    f32 temp_f0_3;
    f32 var_f0;
    f32 var_f3;
    s32 temp_f0;
    s32 temp_f0_2;
    s32 var_a2;
    s32 var_a3;
    s32 var_a4;
    s32 var_a7;
    s32 var_s1;
    s32 var_t0;
    u8 var_a5;
    void *temp_a0;

    var_a3 = arg3;
    var_a4 = arg4;
    var_a5 = arg5;
    var_a6 = arg6;
    var_a7 = arg7;
    var_s1 = 0;
loop_1:
    func_0096B650(&sp40, arg0, var_s1, var_a3, var_a4, var_a5, var_a6, var_a7);
    var_a7 = 1;
    var_t0 = 0;
    var_a6 = ((void *)D_00CBBE48);
    var_a3 = 0x17;
    var_a4 = 0xFF;
loop_2:
    var_a5 = M2C_FIELD(var_a6, u8 *, 9);
    if (var_a5 != 0xFF) {
        if (var_a5 == 0xFF) {
            var_a2 = 1;
        } else {
            var_a2 = (s32) var_a5 % 23;
        }
        temp_a0 = ((void *)Pes6MatchPlayers) + (var_a2 * 0x240);
        if (var_a5 == M2C_FIELD(arg0, u8 *, 0)) {
            var_f0 = M2C_FIELD(arg0, f32 *, 0xE0);
            var_f3 = M2C_FIELD(arg0, f32 *, 0xE8);
        } else {
            var_f3 = M2C_FIELD(temp_a0, f32 *, 0x78);
            var_f0 = M2C_FIELD(temp_a0, f32 *, 0x74);
        }
        temp_f0 = (s32) (var_f0 - sp40);
        temp_f0_2 = (s32) (var_f3 - sp48);
        if ((u32) ((s64) (((temp_f0 * temp_f0) + (temp_f0_2 * temp_f0_2)) << 0x20) >> 0x20) < 0x64001U) {
            var_a7 = 0;
        } else {
            goto block_11;
        }
    } else {
block_11:
        var_t0 += 1;
        var_a6 += 1;
        if (var_t0 < 3) {
            goto loop_2;
        }
    }
    if (var_a7 != 1) {
        var_s1 += 1;
        if (var_s1 < 3) {
            goto loop_1;
        }
    }
    M2C_FIELD(arg0, s32 *, 0x1E8) = var_s1;
    M2C_FIELD(arg0, f32 *, 0x74) = sp40;
    M2C_FIELD(arg0, f32 *, 0x6C) = sp40;
    temp_f0_3 = sp48;
    M2C_FIELD(arg0, f32 *, 0x78) = temp_f0_3;
    M2C_FIELD(arg0, f32 *, 0x70) = temp_f0_3;
}
