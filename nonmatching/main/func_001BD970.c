/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001BE670(M2C_UNK);                     /* extern */
s32 func_001BE760(M2C_UNK);                         /* extern */
s32 func_001DA3F0(M2C_UNK);                         /* extern */
M2C_UNK func_0020B660(M2C_UNK);                     /* extern */
s32 func_0020BA50();                                /* extern */
M2C_UNK func_0020BC40();                            /* extern */
M2C_UNK func_0020C240();                            /* extern */
s32 func_0020C2C0(M2C_UNK);                         /* extern */
M2C_UNK func_0020C370();                            /* extern */
M2C_UNK func_00266430();                            /* extern */
M2C_UNK func_002667C0();                            /* extern */
M2C_UNK func_002CAE20();                            /* extern */
extern s32 D_003E9924;

s32 func_001BD970(void) {
    s32 var_s0;

    var_s0 = 0;
    switch (D_003E9924) {                           /* irregular */
    case 0:
        if (func_001BE760(2) != 0) {
            func_0020BC40();
            func_002CAE20();
            func_002667C0();
            func_0020B660(0);
            D_003E9924 += 1;
        }
        break;
    case 1:
        if ((func_001DA3F0(2) != 0) && (func_001DA3F0(1) != 0)) {
            func_0020C370();
            D_003E9924 += 1;
        }
        break;
    case 2:
        if ((func_0020C2C0(2) != 0) && (func_0020BA50() != 0)) {
            func_00266430();
            func_0020C240();
            func_001BE670(0);
            func_0020B660(1);
            D_003E9924 += 1;
        }
        break;
    case 3:
        D_003E9924 = 0;
        var_s0 = 1;
        break;
    }
    return var_s0;
}
