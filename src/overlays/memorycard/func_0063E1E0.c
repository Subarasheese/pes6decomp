/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern char D_0065D870[];

u8 func_0063E1E0(s32 arg0) {
    u8 var_v0;

    var_v0 = 0xE;
    if ((arg0 >= 0) && (arg0 < 0x24)) {
        var_v0 = *(((char *)D_0065D870) + arg0);
    }
    return var_v0;
}
