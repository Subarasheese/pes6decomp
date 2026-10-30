/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002A8600(s16, void *, s16, s16, s32, void *, M2C_UNK *, s32); /* extern */
extern char D_005E19A0[];
extern char D_005E1D32[];
extern char D_005E1DF4[];
extern char D_005E1F38[];

f32 func_002A84C0(u8 arg0, void *arg1, s16 arg2, s16 arg3, s32 arg4, void *arg5, M2C_UNK *arg6) {
    M2C_UNK *var_a6;
    s16 var_a2;
    s16 var_a3;
    s32 temp_a7;
    s32 temp_v1;
    s32 var_a4;
    s32 var_t0;
    u8 temp_s0;
    u8 temp_v1_3;
    u8 var_a0;
    void *temp_v1_2;
    void *var_a1;
    void *var_a5;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a2 = arg2;
    var_a3 = arg3;
    var_a4 = arg4;
    var_a5 = arg5;
    var_a6 = arg6;
    temp_s0 = var_a0;
    (*(u8 *)D_005E1D32) = temp_s0;
    temp_a7 = (((*(u8 *)D_005E1D32) & 0xF) + 1) & 0xFF;
    var_t0 = 0;
    if (temp_a7 > 0) {
        var_a4 = 0x3F800000;
        var_a6 = ((void *)D_005E19A0);
        do {
            temp_v1 = var_t0 & 0xFF;
            var_a5 = ((void *)D_005E19A0) + (temp_v1 * 0x10);
            temp_v1_2 = ((void *)D_005E19A0) + (temp_v1 * 4);
            var_t0 = (var_t0 + 1) & 0xFF;
            M2C_FIELD(var_a5, f32 *, 0x3E0) = (f32) M2C_FIELD(var_a1, s16 *, 0);
            M2C_FIELD(var_a5, f32 *, 0x3E4) = (f32) M2C_FIELD(var_a1, s16 *, 2);
            M2C_FIELD(var_a5, f32 *, 0x3E8) = (f32) M2C_FIELD(var_a1, s16 *, 4);
            M2C_FIELD(var_a5, s32 *, 0x3EC) = 0x3F800000;
            var_a3 = M2C_FIELD(var_a1, s16 *, 0xA);
            var_a2 = M2C_FIELD(var_a1, s16 *, 8);
            var_a0 = (u8) M2C_FIELD(var_a1, s16 *, 6);
            M2C_FIELD(var_a5, f32 *, 0x3A0) = (f32) var_a0;
            M2C_FIELD(var_a5, f32 *, 0x3A4) = (f32) var_a2;
            M2C_FIELD(var_a5, f32 *, 0x3A8) = (f32) var_a3;
            M2C_FIELD(var_a5, s32 *, 0x3AC) = 0x3F800000;
            M2C_FIELD(temp_v1_2, f32 *, 0x420) = (f32) M2C_FIELD(var_a1, f32 *, 0xC);
            M2C_FIELD(temp_v1_2, f32 *, 0x430) = (f32) M2C_FIELD(var_a1, f32 *, 0x10);
            var_a1 += 0x14;
        } while (var_t0 < temp_a7);
    }
    temp_v1_3 = (temp_s0 & 0xFF & 0xF0) | ((func_002A8600((s16) var_a0, var_a1, var_a2, var_a3, var_a4, var_a5, var_a6, temp_a7) & 0xFF) - 1);
    (*(s32 *)D_005E1DF4) = 0;
    (*(u8 *)D_005E1D32) = temp_v1_3;
    return (*(f32 *)D_005E1F38);
}
