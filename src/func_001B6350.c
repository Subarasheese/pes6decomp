/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_005228F0[];
extern char D_00522960[];

u64 func_001B6350(void) {
    u64 var_v0;

    var_v0 = 0;
    if (((void *)D_005228F0) != NULL) {
        var_v0 = (u64) ((s64) (*(u8 *)D_00522960) << 0x3E) >> 0x3F;
    }
    return var_v0;
}
