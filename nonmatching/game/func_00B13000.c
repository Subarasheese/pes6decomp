/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_00207390(void *, M2C_UNK);
M2C_UNK func_00209A00(void *, s32, s32);
M2C_UNK func_00A9D570(void *);
M2C_UNK func_00AADED0(void *, s16, M2C_UNK, s32);
s16 func_00AB3B70(void *, s16, s32);
f32 func_00AB3C60(void *, s32);
extern void *Pes6Ball_Current;

s32 func_00B13000(void *arg0, s32 arg1, s16 arg2, s32 arg3, s32 arg4, s8 arg5, s32 arg6) {
    s16 var_v0_2;
    s32 temp_v0;
    s32 var_v0;

    func_00209A00(M2C_FIELD(arg0, void **, 4), arg1, arg3 & 0xFFFF);
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 0x28) = func_00AB3C60(arg0, arg4);
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x2D) = arg5;
    M2C_FIELD(arg0, s16 *, 0x2C) = arg2;
    func_00AADED0(arg0, arg2, 0, arg4);
    func_00A9D570(arg0);
    M2C_FIELD(arg0, s8 *, 0x16) = 0xE;
    var_v0 = arg6 - M2C_FIELD(arg0, s32 *, 0x1C);
    if (var_v0 <= 0) {
        var_v0 = -var_v0;
    }
    M2C_FIELD(arg0, s32 *, 0x90) = var_v0;
    temp_v0 = arg1 & 0xFFFF;
    if (temp_v0 == 0x314) {
        M2C_FIELD(arg0, s16 *, 0x26) = (s16) (M2C_FIELD(Pes6Ball_Current, u16 *, 0x58) + 0x7FFF + 1);
        var_v0_2 = 0x10;
    } else if (temp_v0 == 0x164 || temp_v0 == 0x1E6) {
        var_v0_2 = 8;
    } else if (temp_v0 == 0x37F) {
        var_v0_2 = 0x82;
    } else if (temp_v0 == 0x319 || temp_v0 == 0x163 || temp_v0 == 0x2F) {
        var_v0_2 = 0x70;
    } else if (temp_v0 == 0x34B || temp_v0 == 0x34A) {
        var_v0_2 = 0x12;
    } else if (temp_v0 == 0x341 || temp_v0 == 0x33A || temp_v0 == 0x33C || temp_v0 == 0x33E || temp_v0 == 0x33D || temp_v0 == 0x33F) {
        var_v0_2 = 0xA0;
    } else if (temp_v0 == 0x34E || temp_v0 == 0x356 || temp_v0 == 0x355) {
        var_v0_2 = 8;
    } else {
        var_v0_2 = 0x10;
    }
    M2C_FIELD(arg0, s16 *, 0x18) = var_v0_2;
    M2C_FIELD(arg0, s16 *, 0x38) = func_00AB3B70(arg0, arg2, arg4);
    func_00207390(M2C_FIELD(arg0, void **, 4), 2);
    M2C_FIELD(arg0, s8 *, 0x66) = 0;
    return 1;
}
