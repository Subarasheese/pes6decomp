/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_0023A380();
M2C_UNK func_00333320(M2C_UNK);
s32 func_00338790(M2C_UNK);
M2C_UNK Pes6Job_SetField4(s32, char *, char *);
M2C_UNK func_003388B0(M2C_UNK);
M2C_UNK Pes6Job_SetDone(s32);
s32 func_00BC8D30();
extern char D_003E70F0[];
extern char func_0036C270[];

s32 func_0036C410(s32 arg0) {
    if (func_0023A380() != 0) {
        func_00333320(1);
        func_003388B0(3);
        Pes6Job_SetDone(arg0);
        return 1;
    }
    if (func_00BC8D30() == 0) {
        return 0;
    }
    if (func_00338790(3) != 0) {
        Pes6Job_SetField4(arg0, func_0036C270, D_003E70F0);
    }
    return 1;
}
