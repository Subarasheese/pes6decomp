/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00A7A650[];

void *func_00994670(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a2;

    if (((void *)D_00A7A650) != NULL) {
        temp_a2 = arg0 & 0xFF;
        if (temp_a2 < 0x48) {
            temp_a0 = arg1 & 0xFF;
            if (temp_a0 < 0x25) {
                return ((void *)D_00A7A650) + (temp_a2 * 0x151A) + (temp_a0 * 0x92) + 0x29F4;
            }
            return NULL;
        }
        return NULL;
    }
    return NULL;
}
