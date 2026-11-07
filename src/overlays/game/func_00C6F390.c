/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


M2C_UNK func_00C6E900(u8);                          /* extern */
extern s32 D_003EA814;
extern char D_00CCBBF0[];
extern char D_00CCBC00[];

void func_00C6F390(void) {
    s32 var_s2;
    s32 *var_s1;
    u8 *var_s0;
    u8 temp_a0;

    var_s2 = 0;
    var_s1 = ((void *)D_00CCBBF0);
    var_s0 = (u8 *)D_00CCBC00;
    do {
        D_003EA814 = var_s2;
        if ((*var_s1 != 0) && ((temp_a0 = M2C_FIELD(var_s0, u8 *, 0x21), (((u64) ((s64) temp_a0 << 0x3E) >> 0x3F) != 0)) || (((u64) ((s64) temp_a0 << 0x3D) >> 0x3F) != 0))) {
            func_00C6E900(temp_a0);
        }
        var_s2 += 1;
        var_s1 += 1;
        var_s0 += 0x40;
    } while (var_s2 < 2);
}
