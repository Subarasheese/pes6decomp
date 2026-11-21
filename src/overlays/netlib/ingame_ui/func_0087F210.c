/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_00B24010(s32);

extern u8 D_00591DCC[];

void func_0087F210(s32 arg0) {
    s32 var_a0;

    if ((arg0 ^ D_00591DCC[0]) != 0) {
        var_a0 = 2;
    } else {
        var_a0 = 0;
    }
    func_00B24010(var_a0);
}
