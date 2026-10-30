/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0024FB20(M2C_UNK, s32, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_00255B70();                            /* extern */
extern s32 D_003E9B58;

s32 func_002518C0(s32 arg0) {
    D_003E9B58 = 0;
    func_0024FB20(0x22000037, arg0, 0, 0);
loop_1:
    func_00255B70();
    if (func_0024FB20(0x22000027, 0, 0, 0) != 7) {
        D_003E9B58 += 1;
        goto loop_1;
    }
    return 1;
}
