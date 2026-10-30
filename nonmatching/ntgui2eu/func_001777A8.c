/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001777A8(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0xE84);
    switch (temp_v1) {                              /* irregular */
    case 19:
        M2C_FIELD(arg0, s32 *, 0xE74) = 1;
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 0xE74) = temp_v1;
        return;
    case 1:
        M2C_FIELD(arg0, s32 *, 0xE74) = 3;
        return;
    default:
        M2C_FIELD(arg0, s32 *, 0xE74) = 4;
        return;
    }
}
