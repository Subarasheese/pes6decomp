/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_001DF820(s32, s8 *);
s8 *func_001F08B0(s32);
extern char D_00A03220[];

s32 func_009E3D80(void *arg0, s32 arg1) {
    s32 var_a0;
    s8 *var_v0;

    if (arg1 != 0) {
        var_a0 = 0x6C000A;
    } else {
        var_a0 = 0x6C000B;
    }
    var_v0 = func_001F08B0(var_a0);
    if (arg0 == NULL) {
        return 0;
    }
    if ((var_v0 == NULL) || (*var_v0 == 0)) {
        var_v0 = ((void *)D_00A03220);
    }
    func_001DF820(M2C_FIELD(arg0, s32 *, 0xC), var_v0);
    return 1;
}
