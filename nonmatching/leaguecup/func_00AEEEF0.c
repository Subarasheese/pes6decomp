/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EAD44;

void func_00AEEEF0(s32 arg0, s16 arg1) {
    s32 temp_v1;

    if (D_003EAD44 != NULL) {
        temp_v1 = arg0 & 0xFF;
        if (temp_v1 < (s32) M2C_FIELD(D_003EAD44, u8 *, 0x21CC)) {
            M2C_FIELD(((temp_v1 * 2) + D_003EAD44), s16 *, 0x208A) = arg1;
        }
    }
}
