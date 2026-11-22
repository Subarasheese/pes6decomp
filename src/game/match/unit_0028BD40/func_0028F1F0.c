/* compiler: mwcc-3.0.1b151 */
#include "types.h"

s32 func_0028F1F0(s32 arg0) {
    s32 var_a2;
    s32 var_v0;

    var_v0 = 0;
    var_a2 = 0;
    do {
        if (arg0 & (1 << var_a2)) {
            var_v0 += 1;
        }
        var_a2 += 1;
    } while (var_a2 < 0x19);
    return var_v0;
}
