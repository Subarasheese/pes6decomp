/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_00592805[];

u8 func_00C76850(s32 arg0) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 >= 0) && (arg0 < 8)) {
        var_v0 = *(((char *)D_00592805) + (arg0 * 0x28));
    }
    return var_v0;
}
