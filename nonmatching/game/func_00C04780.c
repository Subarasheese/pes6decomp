/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
extern char D_00CB52A0[];

void func_00C04780(void) {
    M2C_UNK *var_s0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = ((void *)D_00CB52A0);
    do {
        func_001C48E8(var_s0 + 0x43C, 0, 0x40);
        var_s1 += 1;
        var_s0 += 0x40;
    } while (var_s1 < 0xA);
}
