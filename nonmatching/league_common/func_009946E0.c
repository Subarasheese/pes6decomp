/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00A7A650[];

void *func_009946E0(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_v1;

    if (((void *)D_00A7A650) != NULL) {
        temp_a0 = arg0 & 0xFF;
        if (temp_a0 < 0x48) {
            temp_v1 = arg1 & 0xFF;
            if (temp_v1 < 0x25) {
                return ((void *)D_00A7A650) + (temp_a0 * 0x94) + (temp_v1 * 4) + 0xC;
            }
            return NULL;
        }
        return NULL;
    }
    return NULL;
}
