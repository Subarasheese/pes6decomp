/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009B84D0(void);
M2C_UNK func_002F5A50(s32);                         /* extern */

s32 func_009B87D0(void) {
    u32 temp_v0;
    u32 temp_v0_2;

    temp_v0 = func_009B84D0();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x28) != 0) {

        } else {
            temp_v0_2 = func_009B84D0();
            if ((temp_v0_2 != 0) && (M2C_FIELD(temp_v0_2, u8 *, 0x28) == 0)) {
                func_002F5A50(M2C_FIELD(temp_v0_2, s32 *, 0x3C));
            }
        }
    }
    return 0;
}
