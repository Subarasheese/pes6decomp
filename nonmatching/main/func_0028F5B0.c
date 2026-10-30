/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002937A0(u8);
M2C_UNK func_0028F230(s32, s32, u8, s32 *, s32, s32); /* extern */
extern char D_003D9D60[];
extern char D_003D9DA0[];
extern char D_003D9DE0[];

void func_0028F5B0(s32 arg0, s32 arg1, u8 arg2, s32 arg3) {
    s32 sp50;
    s32 *temp_a1;
    s32 *temp_a2;
    s32 *temp_a3;
    s32 *var_a4;
    s32 temp_a0;
    s32 var_a5;
    s32 var_v0;

    temp_a0 = (func_002937A0(arg2) & 0xFF) * 4;
    temp_a3 = ((void *)D_003D9DE0) + temp_a0;
    var_a5 = 0;
    temp_a2 = ((void *)D_003D9D60) + temp_a0;
    var_a4 = &sp50;
    temp_a1 = ((void *)D_003D9DA0) + temp_a0;
    do {
        switch (var_a5) {                           /* irregular */
        case 1:
            var_v0 = *temp_a3;
            break;
        case 2:
            var_v0 = *temp_a2;
            break;
        default:
            var_v0 = *temp_a1;
            break;
        }
        *var_a4 = var_v0;
        var_a5 += 1;
        var_a4 += 4;
    } while (var_a5 < 3);
    func_0028F230(arg0, arg1, arg2, &sp50, arg3, var_a5);
}
