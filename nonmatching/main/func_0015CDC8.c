/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0015B8B8(M2C_UNK, M2C_UNK, s32, s32, M2C_UNK); /* extern */
s32 func_0015CAB0();                                /* extern */
s32 func_0015CCE0(s32, s32, s32, s32, s32);         /* extern */
M2C_UNK func_0015D0E8(s32);                         /* extern */

s32 func_0015CDC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a0;
    s32 var_s2;

    func_0015B8B8(1, 0, arg0, arg1, -1);
    var_s2 = func_0015CAB0();
    if (var_s2 != 0) {
        if (func_0015CCE0(var_s2, arg0, arg1, arg2, arg3) < 0) {
            temp_a0 = var_s2;
            var_s2 = 0;
            func_0015D0E8(temp_a0);
        }
    }
    func_0015B8B8(1, 1, arg0, arg1, -1);
    return var_s2;
}
