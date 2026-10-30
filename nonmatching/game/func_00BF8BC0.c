/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001A7250(s32);                         /* extern */
M2C_UNK func_001A9970(s32);                         /* extern */
M2C_UNK func_001AB960(s32, s32);                    /* extern */
s32 func_00BA9430(M2C_UNK);                         /* extern */
extern s32 *D_0058E5B4;

s32 func_00BF8BC0(void) {
    s32 temp_s0;

    temp_s0 = *D_0058E5B4;
    func_001AB960(temp_s0, func_00BA9430(3));
    func_001A7250(temp_s0);
    func_001A9970(temp_s0);
    return 1;
}
