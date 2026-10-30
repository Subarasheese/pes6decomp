/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591BE4[];
extern char D_00CB52A0[];
extern char D_00CB5374[];
extern char D_00CB5375[];
extern char D_00CB5376[];
extern char D_00CB5377[];
extern char D_00CB5378[];
extern char D_00CB5379[];
extern char D_00CB537A[];
extern char D_00CB537B[];

s32 func_00C04E00(void *arg0, s32 arg1) {
    M2C_UNK *var_a3;
    M2C_UNK *var_v1;
    s32 var_a2;
    s32 var_a4;
    s32 var_v0;
    void *var_v1_2;

    var_a4 = 0;
    var_a3 = ((void *)D_00CB52A0);
loop_1:
    if ((M2C_FIELD(var_a3, u8 *, 0x444) == M2C_FIELD(arg0, u8 *, 0)) && (M2C_FIELD(var_a3, s32 *, 0x43C) == 3) && (M2C_FIELD(var_a3, s32 *, 0x460) == arg1)) {
        var_v0 = 1;
    } else {
        var_a4 += 1;
        var_a3 += 0x40;
        if (var_a4 >= 0xA) {
            var_v0 = 0;
        } else {
            goto loop_1;
        }
    }
    if (var_v0 != 0) {
        return 0;
    }
    var_a2 = 0;
    var_v1 = ((void *)D_00CB52A0);
loop_11:
    if (M2C_FIELD(var_v1, s32 *, 0x43C) != 0) {
        var_a2 += 1;
        var_v1 += 0x40;
        if (var_a2 >= 0xA) {
            var_v1_2 = NULL;
        } else {
            goto loop_11;
        }
    } else {
        var_v1_2 = ((void *)D_00CB52A0) + (var_a2 << 6) + 0x43C;
    }
    if (var_v1_2 == NULL) {
        return 0;
    }
    M2C_FIELD(var_v1_2, s32 *, 0xC) = (s32) ((*(u8 *)D_00591BE4) * 5);
    M2C_FIELD(var_v1_2, u8 *, 9) = (u8) (M2C_FIELD(var_v1_2, u8 *, 9) + 1);
    M2C_FIELD(var_v1_2, u16 *, 0x30) = (u16) M2C_FIELD(arg0, u16 *, 0x120);
    M2C_FIELD(var_v1_2, u8 *, 8) = (u8) M2C_FIELD(arg0, u8 *, 0);
    M2C_FIELD(var_v1_2, s32 *, 0) = 3;
    M2C_FIELD(var_v1_2, s16 *, 4) = (s16) (s32) M2C_FIELD(arg0, f32 *, 0xE0);
    M2C_FIELD(var_v1_2, s16 *, 6) = (s16) (s32) M2C_FIELD(arg0, f32 *, 0xE8);
    M2C_FIELD(var_v1_2, s32 *, 0x24) = arg1;
    M2C_FIELD(var_v1_2, u8 *, 0x28) = (u8) (*(u8 *)D_00CB5374);
    M2C_FIELD(var_v1_2, u8 *, 0x29) = (u8) (*(u8 *)D_00CB5375);
    M2C_FIELD(var_v1_2, u8 *, 0x2A) = (u8) (*(u8 *)D_00CB5376);
    M2C_FIELD(var_v1_2, u8 *, 0x2B) = (u8) (*(u8 *)D_00CB5377);
    M2C_FIELD(var_v1_2, u8 *, 0x2C) = (u8) (*(u8 *)D_00CB5378);
    M2C_FIELD(var_v1_2, u8 *, 0x2D) = (u8) (*(u8 *)D_00CB5379);
    M2C_FIELD(var_v1_2, u8 *, 0x2E) = (u8) (*(u8 *)D_00CB537A);
    M2C_FIELD(var_v1_2, u8 *, 0x2F) = (u8) (*(u8 *)D_00CB537B);
    return 1;
}
