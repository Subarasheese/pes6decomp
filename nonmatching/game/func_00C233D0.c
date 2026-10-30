/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591BE4[];
extern char D_00CB52A0[];

s32 func_00C233D0(void *arg0) {
    M2C_UNK *var_v1;
    s32 var_a1;
    u8 temp_v0;
    u8 var_v0;
    void *var_a2;

    var_a1 = 0;
    var_v1 = ((void *)D_00CB52A0);
loop_1:
    if (M2C_FIELD(var_v1, s32 *, 0x6BC) != 0) {
        var_a1 += 1;
        var_v1 += 0x40;
        if (var_a1 >= 0x16) {
            var_a2 = NULL;
        } else {
            goto loop_1;
        }
    } else {
        var_a2 = ((void *)D_00CB52A0) + (var_a1 << 6) + 0x6BC;
    }
    if (var_a2 == NULL) {
        return 0;
    }
    M2C_FIELD(var_a2, u8 *, 0x10) = (u8) M2C_FIELD(arg0, u8 *, 0);
    M2C_FIELD(var_a2, s32 *, 0) = 7;
    M2C_FIELD(var_a2, s32 *, 8) = (s32) ((*(u8 *)D_00591BE4) * 3);
    M2C_FIELD(var_a2, s16 *, 0xC) = (s16) (s32) M2C_FIELD(arg0, f32 *, 0xE0);
    M2C_FIELD(var_a2, s16 *, 0xE) = (s16) (s32) M2C_FIELD(arg0, f32 *, 0xE8);
    M2C_FIELD(var_a2, u8 *, 0x11) = (u8) (M2C_FIELD(var_a2, u8 *, 0x11) + 1);
    temp_v0 = M2C_FIELD(arg0, u8 *, 0x1D9);
    if (temp_v0 == 0) {
        var_v0 = M2C_FIELD((((M2C_FIELD(arg0, u8 *, 0x13) ^ 1) * 0xB) + arg0), u8 *, 0x1B4);
    } else {
        var_v0 = temp_v0 & 0xFF;
    }
    M2C_FIELD(var_a2, s32 *, 0x28) = (s32) var_v0;
    return 1;
}
