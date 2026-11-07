/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00129DE0(s64, s64);                    /* extern */
s64 func_001404F0();                                /* extern */
s64 func_00140500();                                /* extern */
M2C_UNK func_001536D0();                            /* extern */
M2C_UNK func_00155A30();                            /* extern */
M2C_UNK func_00155A60();                            /* extern */
M2C_UNK func_0017FD90();                            /* extern */
M2C_UNK func_0017FE20();                            /* extern */
s32 func_001CDA90();                                /* extern */
s32 func_001CDAA0();                                /* extern */
M2C_UNK func_001CDAB0(s32, s32);                    /* extern */
M2C_UNK func_001D4D90(s64, s64);                    /* extern */
M2C_UNK func_001E5650();                            /* extern */
M2C_UNK func_0026ED70();                            /* extern */
extern s32 D_003E9DBC;

s32 func_002DB190(s32 arg0) {
    s32 var_s0;
    s64 temp_s0;
    s64 temp_s0_2;

    var_s0 = 0;
    switch (D_003E9DBC) {                           /* irregular */
    case 0:
        if (arg0 == func_001CDAA0()) {
block_9:
            var_s0 = 1;
        } else {
            func_001CDAB0(arg0, func_001CDA90());
            func_0017FD90();
            func_00155A30();
            D_003E9DBC += 1;
        }
        break;
    case 1:
        func_001536D0();
        D_003E9DBC += 1;
        break;
    case 2:
        func_0026ED70();
        func_0017FE20();
        func_00155A60();
        func_001E5650();
        temp_s0 = (s64) (func_00140500() << 0x30) >> 0x30;
        func_001D4D90(temp_s0, (s64) (func_001404F0() << 0x30) >> 0x30);
        temp_s0_2 = (s64) (func_00140500() << 0x30) >> 0x30;
        func_00129DE0(temp_s0_2, (s64) (func_001404F0() << 0x30) >> 0x30);
        D_003E9DBC = 0;
        goto block_9;
    }
    return var_s0;
}
