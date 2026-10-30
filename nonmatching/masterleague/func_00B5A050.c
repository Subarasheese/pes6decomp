/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B59340(void);
M2C_UNK func_00B565E0(M2C_UNK);                     /* extern */
M2C_UNK func_00B56630(M2C_UNK);                     /* extern */
s32 func_00B56890();                                /* extern */
s32 func_00B568D0();                                /* extern */

s32 func_00B5A050(void) {
    u32 temp_v0;

    temp_v0 = func_00B59340();
    if (temp_v0 == 0) {

    } else if (!(func_00B56890() & 0xFF)) {
        if (M2C_FIELD(temp_v0, s32 *, 0x70) != 0) {
            if (M2C_FIELD(temp_v0, u8 *, 0x8C) != 8) {
                M2C_FIELD(temp_v0, u8 *, 0x8C) = 8U;
                goto block_16;
            }
        } else if ((func_00B568D0() & 0xFF) == 8) {

        } else {
            func_00B56630(8);
block_16:
            func_00B565E0(2);
        }
    }
    return 0;
}
