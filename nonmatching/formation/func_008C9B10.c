/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008D21D0(s32, u8 *, u8);               /* extern */
extern u8 D_003E78FC;
extern u8 D_003E78FD;
extern u8 D_003E78FE;

void func_008C9B10(s32 arg0) {
    u8 sp1C;
    u8 sp1D;
    u8 sp1E;

    sp1C = D_003E78FC;
    sp1D = D_003E78FD;
    sp1E = D_003E78FE;
    func_008D21D0(arg0 + 0x480, &sp1C, D_003E78FC);
}
