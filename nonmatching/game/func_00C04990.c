/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591BE4[];
extern char D_00CB52A0[];
extern char D_00CB5382[];

s32 func_00C04990(void *arg0, s32 arg1, s16 arg2) {
    M2C_UNK *var_v1;
    s32 var_a3;
    u8 var_v0;
    void *var_v1_2;

    if ((s32) (*(u8 *)D_00CB5382) < 2) {
        return 0;
    }
    var_a3 = 0;
    var_v1 = ((void *)D_00CB52A0);
loop_4:
    if (M2C_FIELD(var_v1, s32 *, 0x43C) != 0) {
        var_a3 += 1;
        var_v1 += 0x40;
        if (var_a3 >= 0xA) {
            var_v1_2 = NULL;
        } else {
            goto loop_4;
        }
    } else {
        var_v1_2 = ((void *)D_00CB52A0) + (var_a3 << 6) + 0x43C;
    }
    if (var_v1_2 == NULL) {
        return 0;
    }
    M2C_FIELD(var_v1_2, s16 *, 0x28) = arg2;
    switch (arg1) {                                 /* irregular */
    default:
        M2C_FIELD(var_v1_2, u32 *, 0xC) = (u32) ((*(u8 *)D_00591BE4) * 5);
        break;
    case 5:
        M2C_FIELD(var_v1_2, u32 *, 0xC) = (u32) ((*(u8 *)D_00591BE4) * 2);
        M2C_FIELD(var_v1_2, s16 *, 0x28) = 0xFFFF;
        break;
    case 8:
        M2C_FIELD(var_v1_2, u32 *, 0xC) = (u32) ((u8) (*(u8 *)D_00591BE4) >> 1);
        var_v0 = M2C_FIELD(var_v1_2, u8 *, 9) + 1;
block_20:
        M2C_FIELD(var_v1_2, u8 *, 9) = var_v0;
        break;
    case 7:
        M2C_FIELD(var_v1_2, u32 *, 0xC) = (u32) (*(u8 *)D_00591BE4);
        var_v0 = M2C_FIELD(var_v1_2, u8 *, 9) + 1;
        goto block_20;
    }
    M2C_FIELD(var_v1_2, u8 *, 8) = (u8) M2C_FIELD(arg0, u8 *, 0);
    M2C_FIELD(var_v1_2, s32 *, 0) = 5;
    M2C_FIELD(var_v1_2, s16 *, 4) = (s16) (s32) M2C_FIELD(arg0, f32 *, 0xE0);
    M2C_FIELD(var_v1_2, s16 *, 6) = (s16) (s32) M2C_FIELD(arg0, f32 *, 0xE8);
    M2C_FIELD(var_v1_2, s32 *, 0x24) = arg1;
    return 1;
}
