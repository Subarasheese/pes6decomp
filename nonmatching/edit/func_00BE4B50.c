/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00BF4400(s32, M2C_UNK);                /* extern */
M2C_UNK func_00BF58F0();                            /* extern */
M2C_UNK func_00BF7990();                            /* extern */
M2C_UNK func_00C1B440(M2C_UNK, s32);                /* extern */
M2C_UNK func_00C1B480();                            /* extern */

void func_00BE4B50(s32 arg0) {
    s32 var_s0;

    func_00BF7990();
    func_00BF58F0();
    var_s0 = 0;
    do {
        func_00BF4400(var_s0, 0xE);
        var_s0 += 1;
    } while (var_s0 < 2);
    func_00C1B440(0, arg0);
    func_00C1B480();
}
