/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u8 *func_00224520();                                /* extern */

void func_0094E4A0(s32 arg0, s32 arg1) {
    u8 *temp_v0;

    if (((arg0 & 0xFF) < 0x50) && ((arg1 & 0xFF) < 0x20)) {
        temp_v0 = func_00224520();
        if (temp_v0 != NULL) {
            *temp_v0 = (*temp_v0 & ~0xF) | 2;
        }
    }
}
