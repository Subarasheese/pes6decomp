/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0016A948(void *arg0) {
    s32 temp_a1;
    s32 temp_a3;

    temp_a3 = M2C_FIELD(arg0, s32 *, 0xFD0);
    if (temp_a3 != 0) {
        temp_a1 = M2C_FIELD(arg0, s32 *, 0xFC8);
        M2C_FIELD(arg0, s32 *, 0xFD0) = (s32) (temp_a3 - 1);
        M2C_FIELD(arg0, s32 *, 0xFC8) = (s32) ((s32) (temp_a1 + 1) % 100);
        return (temp_a1 * 0x28) + arg0;
    }
    return NULL;
}
