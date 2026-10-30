/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK sprintf(s32, s32, s8 *);              /* extern */
s32 func_001F08B0(M2C_UNK);                         /* extern */
s32 func_002274D0();                                /* extern */
s32 func_00235960();                                /* extern */

s32 func_0035F370(s32 arg0) {
    s8 sp4C;
    s8 sp4D;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_v0;

    temp_s1 = func_001F08B0(0x360053);
    temp_s0 = func_00235960() & 0xFF;
    if (func_002274D0() != 0) {
        var_v0 = 0x41;
    } else {
        var_v0 = 0x31;
    }
    sp4C = temp_s0 + var_v0;
    sp4D = 0;
    sprintf(arg0, temp_s1, &sp4C);
    return arg0;
}
