/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001C4698(M2C_UNK);                         /* extern */
M2C_UNK func_001C4730(s32, s32, M2C_UNK);           /* extern */
s32 func_00BC5150(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_00C08E40(M2C_UNK);                     /* extern */
extern s32 D_003EB18C;

s32 func_00C06C00(s32 arg0, s32 arg1) {
    M2C_UNK var_s0;
    s32 temp_v0;

    var_s0 = 0;
    if (D_003EB18C == 0) {
        if (arg0 == 0) {
            return 2;
        }
        if (arg1 != 0) {
            if (func_001C4698(0x3E) == 0) {
                return 1;
            }
            D_003EB18C = 1;
            goto block_11;
        }
        return 2;
    }
block_11:
    temp_v0 = func_00BC5150(0xF40005, 0x6C001A);
    switch (temp_v0) {                              /* irregular */
    case 1:
        func_001C4730(arg0, arg1, 0x3E);
        /* fallthrough */
    case 2:
        D_003EB18C = 0;
        var_s0 = 1;
        break;
    }
    func_00C08E40(var_s0);
    return temp_v0;
}
