/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_001454C0(s32);                             /* extern */
M2C_UNK func_00145590(s32);                         /* extern */
M2C_UNK func_00147010(s32, M2C_UNK);                /* extern */
extern char D_0051FFF0[];
extern char D_0051FFF2[];
extern char D_0051FFF3[];

void func_001873C0(void) {
    u8 *var_s0;
    s32 temp_v0;
    s32 var_s1;

    var_s1 = 0;
    (*(s8 *)D_0051FFF3) = 0;
    var_s0 = ((void *)D_0051FFF0);
    (*(s8 *)D_0051FFF2) = 0;
    (*(s16 *)D_0051FFF0) = 0;
    do {
        temp_v0 = func_001454C0(var_s1 + 0x2748);
        M2C_FIELD(var_s0, s32 *, 4) = temp_v0;
        if (temp_v0 != 0) {
            func_00145590(temp_v0);
            func_00147010(temp_v0, 0x274B);
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 4);
}
