/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_002F4E10(s32);
extern s32 D_008A3C78[];
extern s32 D_008A3C80[];
extern s32 D_008A3C88[];
extern s32 D_008A3C90[];
extern s32 D_008A3C98[];

s32 func_00817B80(void) {
    s32 var_v0;

    if (D_008A3C78[0] != 0) {
        D_008A3C88[0] = 1;
        var_v0 = 0;
    } else {
        var_v0 = 1;
    }
    if (var_v0 == 0) {
        func_002F4E10(D_008A3C98[0]);
        D_008A3C98[0] = 0;
        D_008A3C90[0] = 0;
        D_008A3C78[0] = 0;
        D_008A3C80[0] = 0;
        D_008A3C88[0] = 0;
    }
    return 0;
}
