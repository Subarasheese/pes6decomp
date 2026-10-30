/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BBB990(u16, s32);                        /* extern */
s32 func_00BBB9C0(u16, s32);                        /* extern */
extern char D_00591BE4[];
extern char D_00591BEC[];

void func_00B35970(void **arg0, void *arg1, f32 fparg0) {
    f32 temp_f1;
    f32 var_f0;
    s32 var_s2;
    void *temp_a0;

    temp_a0 = *arg0;
    if ((s32) (*(u8 *)D_00591BE4) >= 0) {
        var_f0 = (f32) (*(u8 *)D_00591BE4);
    } else {
        var_f0 = 2.0f * (f32) (((u8) (*(u8 *)D_00591BE4) >> 1) | ((*(u8 *)D_00591BE4) & 1));
    }
    temp_f1 = (f32) (M2C_FIELD(temp_a0, s32 *, 0x1C) * (s32) (var_f0 * fparg0)) / (*(f32 *)D_00591BEC);
    if (temp_f1 >= 2.1474836e9f) {
        var_s2 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
    } else {
        var_s2 = (s32) temp_f1;
    }
    M2C_FIELD(arg1, f32 *, 0) = (f32) (M2C_FIELD(*arg0, f32 *, 0xE0) + (f32) func_00BBB990(M2C_FIELD(temp_a0, u16 *, 0x28), var_s2));
    M2C_FIELD(arg1, f32 *, 4) = (f32) (M2C_FIELD(*arg0, f32 *, 0xE8) + (f32) func_00BBB9C0(M2C_FIELD(*arg0, u16 *, 0x28), var_s2));
}
