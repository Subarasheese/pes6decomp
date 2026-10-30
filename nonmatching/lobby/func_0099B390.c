/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
M2C_UNK func_001D7A20(void *, s32, u16);            /* extern */
void *func_0081D850(M2C_UNK, M2C_UNK, M2C_UNK);     /* extern */

void func_0099B390(M2C_UNK arg0, M2C_UNK arg1, u16 *arg2, s32 arg3, s32 arg4) {
    s32 var_s1;
    s32 var_s3;
    u16 *var_s4;
    void *temp_s0;

    var_s4 = arg2;
    var_s3 = arg3;
    temp_s0 = func_0081D850(2, 0, 0);
    var_s1 = 0;
    if (arg4 > 0) {
        do {
            func_001D7A20(temp_s0, var_s3, *var_s4);
            var_s1 += 1;
            var_s4 += 2;
            var_s3 += 0x10;
        } while (var_s1 < arg4);
    }
    func_001D7F10(temp_s0);
}
