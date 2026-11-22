/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_002F4E10(s32);
extern s32 func_00817930(void);
extern s32 D_008A3CA0[];
extern s32 D_008A3CA8[];
extern s32 D_008A3CB0[];
extern s32 D_008A3CB8[];
extern s32 D_008A3CC0[];

s32 func_00818750(void) {
    s32 var_v0;

    if (D_008A3CA0[0] != 0) {
        D_008A3CA8[0] = 1;
        var_v0 = 0;
    } else {
        var_v0 = 1;
    }
    if (var_v0 == 0) {
        D_008A3CB8[0] = 0;
        func_002F4E10(D_008A3CC0[0]);
        D_008A3CC0[0] = 0;
        func_00817930();
        D_008A3CA0[0] = 0;
        D_008A3CB0[0] = 0;
        D_008A3CA8[0] = 0;
    }
    return 0;
}
