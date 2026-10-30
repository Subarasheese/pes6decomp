/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BFE830(s32, s32, s32);
extern s32 func_002210F0(s32);
M2C_UNK func_001C4730(M2C_UNK *, s32, M2C_UNK);     /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern s32 D_003EB0E8;
extern char D_00CEB920[];

s32 func_00BFE770(s32 arg0) {
    s32 temp_s0;
    s32 var_s2;

    var_s2 = 0;
    temp_s0 = func_002210F0(arg0);
    switch (D_003EB0E8) {                           /* irregular */
    case 0:
        func_001C48E8(((void *)D_00CEB920), 0, 0x3D);
        func_001C4730(((void *)D_00CEB920), temp_s0, 0x3D);
        D_003EB0E8 = 1;
        /* fallthrough */
    case 1:
        if (func_00BFE830(arg0, (s32) ((void *)D_00CEB920), temp_s0) != 0) {
            D_003EB0E8 = 0;
            var_s2 = 1;
        }
        break;
    }
    return var_s2;
}
