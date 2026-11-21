/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 func_00154160(s32, s32);
M2C_UNK func_002DB540(s32);
extern s32 D_008A4250[];

void func_0081E450(void) {
    u8 var_v0;

    if (D_008A4250[0] != 1) {
        var_v0 = 0;
    } else {
        var_v0 = func_00154160(0, 0x13);
    }
    func_002DB540(var_v0 & 0xFF);
}
