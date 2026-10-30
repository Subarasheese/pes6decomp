/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00235B60(void);
extern int func_00309420(void);
extern s32 func_00226710(void);
void *func_00229280(s32);                           /* extern */

s32 func_00230EF0(void) {
    s32 temp_v1;
    void *temp_v0;

    if ((func_00309420() != 0) == 1) {
        goto block_21;
    }
    temp_v1 = func_00226710() & 0xFF;
    if ((temp_v1 != 0x36) && (temp_v1 != 0x34) && (temp_v1 != 0x20) && (temp_v1 != 0x1C) && (temp_v1 != 0x1A) && (temp_v1 != 0x18) && (temp_v1 != 0x16) && (temp_v1 != 0x14) && (temp_v1 != 0x12) && (temp_v1 != 0xF) && (temp_v1 != 0xD) && (temp_v1 != 0xB)) {
        goto block_21;
    }
    temp_v0 = func_00229280(func_00235B60() & 0xFF);
    if (temp_v0 != NULL) {
        if ((M2C_FIELD(temp_v0, u8 *, 4) - 1) == M2C_FIELD(temp_v0, u8 *, 0)) {
            return 1;
        }
        goto block_21;
    }
block_21:
    return 0;
}
