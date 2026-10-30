/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0012DD30(M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK, s32); /* extern */
s32 func_00135080(M2C_UNK, M2C_UNK);                /* extern */

void func_00137E88(s32 arg0) {
    M2C_UNK var_a0;
    s32 var_a3;
    s32 var_v0;

    var_a3 = 0;
    switch (arg0) {                                 /* irregular */
    case 11:
        var_a0 = 0x69;
block_7:
        var_v0 = func_00135080(var_a0, 0);
block_9:
        var_a3 = var_v0;
        break;
    case 10:
        var_a0 = 0x6A;
        goto block_7;
    case -1:
        var_v0 = func_00135080(0x6B, 0);
        goto block_9;
    }
    func_0012DD30(2, 0x1F4, 0xFA, var_a3, 0x137CB0, *(s32 *)0x5B3744);
}
