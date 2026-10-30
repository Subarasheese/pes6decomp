/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00147ED0(s32);
extern char D_00521680[];

void func_001A6FC0(void) {
    M2C_UNK *var_s0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = ((void *)D_00521680);
    do {
        if (M2C_FIELD(var_s0, u8 *, 1) == 2) {
            func_00147ED0(M2C_FIELD(var_s0, u8 *, 3) + 0x834);
        }
        var_s1 += 1;
        var_s0 += 0x40;
    } while (var_s1 < 0x17);
}
