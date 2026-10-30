/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001737F8(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(((arg1 * 0x24) + M2C_FIELD(arg0, s32 *, 0xB80)), s32 *, 4) & 0x50;
    if (temp_v0 != arg2) {
        if (temp_v0 == 0) {
            if (arg2 != 0) {
                M2C_FIELD(arg0, s32 *, 0xD0C) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0C) + 1);
            }
        } else if (arg2 == 0) {
            M2C_FIELD(arg0, s32 *, 0xD0C) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0C) - 1);
        }
    }
}
