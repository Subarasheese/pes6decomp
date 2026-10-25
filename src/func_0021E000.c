/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003D4550[][8];
extern s32 D_003D79F0[];
s32 func_001CDA50(s32);

s32 func_0021E000(u32 id) {
    s32 slot = func_001CDA50(1);

    if (id >= 0x188) {
        return 0x1DEB9;
    }
    return D_003D4550[id][D_003D79F0[slot]];
}
