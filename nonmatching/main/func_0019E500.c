/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00145380(M2C_UNK);                     /* extern */
s32 func_00145440(s32);                             /* extern */
s32 func_001454C0(M2C_UNK);                         /* extern */
M2C_UNK func_0014E2F0(s32, s32, s16, s16, s16);     /* extern */
s32 func_00150110(s32);                             /* extern */
M2C_UNK func_00188820(s16 *, s16 *, s16 *);         /* extern */

void func_0019E500(void) {
    s16 sp2A;
    s16 sp2C;
    s16 sp2E;
    s32 temp_s0;
    s32 temp_v0;

    temp_v0 = func_001454C0(0x2710);
    if (temp_v0 != 0) {
        func_00188820(&sp2E, &sp2C, &sp2A);
        temp_s0 = func_00145440(temp_v0);
        func_0014E2F0(temp_s0, func_00150110(temp_v0), sp2E, sp2C, sp2A);
        func_00145380(0x2710);
    }
}
