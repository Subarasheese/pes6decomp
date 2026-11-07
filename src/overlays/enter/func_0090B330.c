/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00900430(s32);
s8 func_0090F520();
extern M2C_UNK (*D_0092F0A0[])();
void func_0090B330(void) {
    s32 t;
    if (D_0092F0A0[0] != NULL) {
        D_0092F0A0[0]();
    }
    t = func_0090F520();
    if (t == 1) {
        func_00900430(t);
    }
}
