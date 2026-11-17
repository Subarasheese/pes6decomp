/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CCBDE0[];
extern char D_00CCBDE8[];
extern char D_00CCBDEC[];

u8 func_00C76A90(void) {
    s32 var_a2;
    u8 var_v0;

    var_v0 = 0;
    var_a2 = 0;
    if ((*(s32 *)D_00CCBDE8 != -1) && (M2C_FIELD(D_00CCBDE0, s32 *, 4) != -1)) {
        var_a2 = 1;
    }
    if (var_a2 == 1) {
        var_v0 = M2C_FIELD(*(void **)D_00CCBDEC, u8 *, 0x11);
    }
    return var_v0;
}
