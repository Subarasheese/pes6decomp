/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 Pes6Team_GetPlayerId(s32, s32, s32);
M2C_UNK func_00256440(s32, s16);                    /* extern */
extern char D_00510FD0[];
extern char D_0058CE10[];
extern char D_00591BB0[];

void func_00256330(void) {
    s16 *var_v0;
    s16 var_a1;
    s32 var_a0;
    s32 var_s1;
    s32 var_s2;
    u16 *var_s0;

    var_s2 = 0;
    var_s0 = ((void *)D_00591BB0);
    do {
        var_s1 = 0;
loop_2:
        if ((*(s32 *)D_00510FD0) == 0xC) {
            var_a1 = Pes6Team_GetPlayerId((s32) *var_s0, var_s1 & 0xFF, 2) & 0xFFFF;
            var_a0 = (var_s2 & 1) << 6;
            var_v0 = ((var_s1 % 32) * 2) + (((void *)D_0058CE10) + var_a0);
        } else {
            var_a1 = Pes6Team_GetPlayerId((s32) *var_s0, var_s1 & 0xFF, 0) & 0xFFFF;
            var_a0 = (var_s2 & 1) << 6;
            var_v0 = ((var_s1 % 32) * 2) + (((void *)D_0058CE10) + var_a0);
        }
        *var_v0 = var_a1;
        var_s1 += 1;
        if (var_s1 < 0x20) {
            goto loop_2;
        }
        var_s2 += 1;
        var_s0 += 2;
    } while (var_s2 < 2);
    func_00256440(var_a0, var_a1);
}
