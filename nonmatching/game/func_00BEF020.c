/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0099D490(s32, M2C_UNK);                /* extern */
s32 func_00AFBAB0(u8);                              /* extern */
s32 func_00BEEBD0();                                /* extern */

s32 func_00BEF020(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = func_00BEEBD0() & 0xFF;
    func_0099D490(((temp_s0 & 0xFF) - (func_00AFBAB0(*arg0) & 0xFF)) & 0xFF, 0);
    return temp_s0;
}
