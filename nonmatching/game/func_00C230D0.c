/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591BE4[];
extern char D_00CB52A0[];

s32 func_00C230D0(void *arg0) {
    M2C_UNK *var_a2;
    M2C_UNK *var_v1;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_v0;
    s32 var_v0_2;
    u8 temp_a1;
    void *var_a2_3;

    temp_a1 = M2C_FIELD(arg0, u8 *, 0);
    var_a3 = 0;
    var_a2 = ((void *)D_00CB52A0);
loop_1:
    if ((M2C_FIELD(var_a2, u8 *, 0x6CC) == temp_a1) && (M2C_FIELD(var_a2, s32 *, 0x6BC) == 0xC)) {
        var_v0 = 1;
    } else {
        var_a3 += 1;
        var_a2 += 0x40;
        if (var_a3 >= 0x16) {
            var_v0 = 0;
        } else {
            goto loop_1;
        }
    }
    if (var_v0 != 0) {
        return 0;
    }
    var_a2_2 = 0;
    var_v1 = ((void *)D_00CB52A0);
loop_10:
    if (M2C_FIELD(var_v1, s32 *, 0x6BC) != 0) {
        var_a2_2 += 1;
        var_v1 += 0x40;
        if (var_a2_2 >= 0x16) {
            var_a2_3 = NULL;
        } else {
            goto loop_10;
        }
    } else {
        var_a2_3 = ((void *)D_00CB52A0) + (var_a2_2 << 6) + 0x6BC;
    }
    if (var_a2_3 == NULL) {
        return 0;
    }
    M2C_FIELD(var_a2_3, u8 *, 0x10) = temp_a1;
    M2C_FIELD(var_a2_3, s32 *, 0) = 0xC;
    if ((s32) M2C_FIELD(arg0, u8 *, 0x10) >= 0x1F) {
        var_v0_2 = (*(u8 *)D_00591BE4) * 3;
    } else {
        var_v0_2 = (*(u8 *)D_00591BE4) * 2;
    }
    M2C_FIELD(var_a2_3, s32 *, 8) = var_v0_2;
    M2C_FIELD(var_a2_3, s16 *, 0xC) = (s16) (s32) M2C_FIELD(arg0, f32 *, 0xE0);
    M2C_FIELD(var_a2_3, s16 *, 0xE) = (s16) (s32) M2C_FIELD(arg0, f32 *, 0xE8);
    return 1;
}
