/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern f32 func_0011D238(f32);
extern void func_00296330(void *, s32, s32, s32, void *, s32, s32, s32, f32);
extern char D_005A24C0[];

void func_00BA99D0(void **arg0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    f32 sp30[7];
    f32 temp_f1;
    f32 temp_f20;
    f32 var_f0;
    f32 var_f20;
    f32 var_f2;
    f32 var_f4;
    s32 var_a0;
    void *temp_v1;

    temp_v1 = *arg0;
    var_f4 = 8985.0f;
    var_f2 = 10098.75f;
    var_a0 = 0xC000 & 0xFFFF;
    if (M2C_FIELD(temp_v1, f32 *, 0x6C) < 0.0f) {
        var_f2 = 10098.75f * -1.0f;
    }
    if (M2C_FIELD(temp_v1, f32 *, 0x70) < 0.0f) {
        var_a0 = 0x4000;
        var_f4 = 8985.0f * -1.0f;
    }
    *(s32 *)&sp30[1] = 0;
    *(s32 *)&sp30[4] = 0;
    sp30[0] = 0.2f * -var_f2;
    sp30[2] = 0.2f * var_f4;
    if (var_a0 >= 0) {
        var_f0 = (f32) var_a0;
    } else {
        var_f0 = 2.0f * (f32) (((u32) var_a0 >> 1) | (var_a0 & 1));
    }
    temp_f1 = -1.0f * (1.5707964f + ((3.1415927f * (2.0f * var_f0)) / 65536.0f));
    sp30[5] = temp_f1;
    temp_f20 = 0.15915494f * temp_f1;
    var_f20 = temp_f20 - func_0011D238(temp_f20);
    if (!(var_f20 <= 0.5f)) {
        var_f20 -= 1.0f;
    }
    *(s32 *)&sp30[6] = 0;
    sp30[5] = 3.1415927f * (2.0f * var_f20);
    func_00296330((void *)D_005A24C0, 0, 0xFF, 0, sp30, 0, a6, a7, 0.0f);
}
