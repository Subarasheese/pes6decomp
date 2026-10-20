/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00181C00();                            /* extern */
M2C_UNK func_00181C90();                            /* extern */
M2C_UNK func_00182AD0();                            /* extern */
M2C_UNK func_001864B0(M2C_UNK);                     /* extern */
s32 *func_0019F170(s32 *);                          /* extern */

void func_0019F100(s32 *arg0) {
    s32 *var_s0;

    var_s0 = arg0;
    func_00181C90();
    func_001864B0(0x21CDE);
    func_00182AD0();
    func_00181C00();
loop_1:
    if (*var_s0 != 0xFF000001) {
        var_s0 = func_0019F170(var_s0);
        goto loop_1;
    }
}
