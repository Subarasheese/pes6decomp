/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern u8 D_00CCD971[];

void func_00C949E0(int param_1) {
    if (param_1 != 0) {
        D_00CCD971[0] = D_00CCD971[0] | 8;
        return;
    }
    D_00CCD971[0] = D_00CCD971[0] & 0xf7;
}
