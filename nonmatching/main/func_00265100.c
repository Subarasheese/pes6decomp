/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DB2E0(int, int, int);
void func_00265100(u32 arg0, M2C_UNK arg1, s32 arg2) {
    s32 var_a0;
    u32 var_a1;

    var_a1 = arg0;
    if (arg0 >= 0x73U) {
        var_a1 = 0;
    }
    var_a0 = 1;
    if (arg2 == 1) {
        var_a0 = 2;
    }
    func_001DB2E0(var_a0, (s32) var_a1, arg2);
}
