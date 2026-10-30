/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00235B60(void);
extern int func_00309420(void);
extern s32 func_00226710(void);
u8 *func_00229280(s32);                             /* extern */

s32 func_00231010(void) {
    s32 temp_v1;
    u8 *temp_v0;

    if ((func_00309420() != 0) == 1) {
        goto block_22;
    }
    temp_v1 = func_00226710() & 0xFF;
    if ((temp_v1 != 0x38) && (temp_v1 != 0x33) && (temp_v1 != 0x32) && (temp_v1 != 0x2F) && (temp_v1 != 0x2C) && (temp_v1 != 0x29) && (temp_v1 != 0x28) && (temp_v1 != 0x25) && (temp_v1 != 0x24) && (temp_v1 != 0x10) && (temp_v1 != 7) && (temp_v1 != 1) && (temp_v1 != 0)) {
        goto block_22;
    }
    temp_v0 = func_00229280(func_00235B60() & 0xFF);
    if (temp_v0 != NULL) {
        if (*temp_v0 == 0) {
            return 1;
        }
        goto block_22;
    }
block_22:
    return 0;
}
