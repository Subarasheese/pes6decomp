/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00305E60(s32, M2C_UNK *);              /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
s32 func_00BD9DF0();                                /* extern */
extern M2C_UNK func_00301E70;

s32 func_00301D20(s32 arg0) {
    s32 var_v0;

    if ((func_009E1C90(0) & 0xFF) != 4) {
        var_v0 = 0;
    } else if (func_00BD9DF0() == 0) {
        var_v0 = 0;
    } else {
        var_v0 = 1;
    }
    if (var_v0 != 0) {
        return 0;
    }
    func_00305E60(arg0, &func_00301E70);
    return 1;
}
