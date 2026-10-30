/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001051F0(u32, s32, s32, s32);              /* extern */
M2C_UNK func_001059C8(s32);                         /* extern */
M2C_UNK func_001059D8(s32);                         /* extern */
M2C_UNK func_001059E8(s32);                         /* extern */
extern s32 D_006025E4;

s32 func_001059F8(u32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    u32 var_a0;

    var_a0 = arg0;
    var_a2 = arg2;
    var_a3 = arg3;
    switch (var_a0) {                               /* irregular */
    case 0x2200000C:
        func_001059E8(arg1);
        var_a1 = arg1;
        var_a0 = 0x82000006;
        var_a2 = 0;
        var_a3 = 0;
block_17:
        temp_v0 = func_001051F0(var_a0, var_a1, var_a2, var_a3);
        D_006025E4 = temp_v0;
        return temp_v0;
    case 0x2200000D:
        func_001059C8(arg1);
        var_a1 = arg1;
        var_a0 = 0x82000007;
        var_a2 = 0;
        var_a3 = 0;
        goto block_17;
    case 0x8200000E:
        func_001059D8(arg1);
        return 0;
    case 0x22000101:
        func_001051F0(0x22000039U, 0, 0x32, 0);
        func_001051F0(0x22000039U, 1, 0x32, 0);
        return 0;
    case 0x22000029:
        var_a1 = 0xF;
        var_a2 = 0;
        var_a3 = 0;
        goto block_17;
    default:
        var_a1 = arg1;
        goto block_17;
    }
}
