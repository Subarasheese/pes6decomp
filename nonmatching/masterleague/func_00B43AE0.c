/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EAE6C;

void func_00B43AE0(s16 arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;

    if (D_003EAE6C != 0) {
        temp_v1 = arg2 & 0xFF;
        if (temp_v1 >= 0x10) {
            M2C_FIELD(((temp_v1 * 2) + D_003EAE6C), s16 *, 0x680) = arg0;
        } else {
            M2C_FIELD(((temp_v1 * 2) + (((arg1 & 0xFF) << 5) + D_003EAE6C)), s16 *, 0x620) = arg0;
        }
    }
}
