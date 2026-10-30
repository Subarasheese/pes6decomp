/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001063D8(unsigned int);
extern int func_00115ED8(int, void *, void *);
M2C_UNK func_0021C7F0(s32, s32 *, void *);          /* extern */
M2C_UNK func_0021C9B0(s32, void *, s32 *, s32, void *); /* extern */
extern char D_00537B30[];
extern char D_00538224[];

void func_0021CA90(s32 arg0, void *arg1, s32 *arg2, s32 arg3, void *arg4) {
    s32 *var_v1;
    s32 temp_s0;
    s32 var_v0;

    temp_s0 = func_00115ED8(arg0, arg1, arg2);
    func_001063D8(1U);
    if (arg3 == 1) {
        if (*arg2 != 0) {
            var_v1 = ((void *)D_00537B30) + ((M2C_FIELD(arg4, s16 *, 0xE) + (M2C_FIELD(arg4, s16 *, 0xC) * 4)) * 4);
            var_v0 = *var_v1 | 1;
            goto block_7;
        }
    } else if (*arg2 < -0xA) {
        var_v1 = ((void *)D_00537B30) + ((M2C_FIELD(arg4, s16 *, 0xE) + (M2C_FIELD(arg4, s16 *, 0xC) * 4)) * 4);
        var_v0 = *var_v1 | 1;
block_7:
        *var_v1 = var_v0;
    }
    if ((*(s32 *)D_00538224) != 0) {
        func_0021C7F0(temp_s0, arg2, arg4);
        return;
    }
    func_0021C9B0(temp_s0, arg1, arg2, arg3, arg4);
}
