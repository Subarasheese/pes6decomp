/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005CBBBC[];
extern char D_012073C8[];

s32 func_001A6858(s32 arg0) {
    M2C_UNK *var_a1;
    s32 var_a0;
    u32 var_v0;

    var_a0 = arg0;
    if (var_a0 >= 0) {
        var_a1 = *(M2C_UNK **)0x5CBBB8;
        var_v0 = (*(u32 *)D_005CBBBC);
    } else {
        var_a1 = ((void *)D_012073C8);
        var_a0 &= 0x7FFFFFFF;
        var_v0 = 0x20;
    }
    if ((u32) var_a0 >= var_v0) {
        return -0x69;
    }
    *((var_a0 * 0x10) + var_a1) = 0;
    return 0;
}
