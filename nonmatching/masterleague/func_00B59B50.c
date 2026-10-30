/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B59340(void);
extern void func_00B59CA0(s32);
s32 func_00B56890();                                /* extern */
M2C_UNK func_00B59BE0(M2C_UNK);                     /* extern */

s32 func_00B59B50(void) {
    u32 temp_v0;

    temp_v0 = func_00B59340();
    if (temp_v0 == 0) {

    } else if (!(func_00B56890() & 0xFF)) {
        if (M2C_FIELD(temp_v0, s32 *, 0x6C) != 1) {
            if (M2C_FIELD(temp_v0, s32 *, 0x70) != 0) {
                func_00B59BE0(-1);
            } else {
                func_00B59CA0(-1);
            }
        }
    }
    return 0;
}
