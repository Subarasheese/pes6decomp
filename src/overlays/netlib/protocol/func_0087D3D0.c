/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_0081CCA0(M2C_UNK);
extern s32 func_00BDA2E0(void);
extern s8 D_003AE983[];

s32 func_0087D3D0(void) {
    if (D_003AE983[0] == 1) {
        func_00BDA2E0();
        func_0081CCA0(0);
    } else {
        func_0081CCA0(0);
    }
    return 1;
}
