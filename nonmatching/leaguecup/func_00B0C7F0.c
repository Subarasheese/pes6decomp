/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EAD68;

void func_00B0C7F0(s32 arg0, s16 arg1) {
    s32 temp_v1;

    if (D_003EAD68 != NULL) {
        temp_v1 = arg0 & 0xFF;
        if (temp_v1 < (s32) M2C_FIELD(D_003EAD68, u8 *, 0xE05)) {
            M2C_FIELD(((temp_v1 * 2) + D_003EAD68), s16 *, 0x1380) = arg1;
        }
    }
}
