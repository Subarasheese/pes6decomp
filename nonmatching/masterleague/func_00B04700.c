/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00223C10(void);
s32 func_00B04700(void) {
    s32 temp_v1;
    u8 *temp_v0;

    temp_v0 = func_00223C10();
    if (temp_v0 != NULL) {
        temp_v1 = *temp_v0 & 0xF;
        if ((temp_v1 != 0xA) && (temp_v1 != 9) && (temp_v1 != 8)) {
            return 0;
        }
        return 1;
    }
    return 0;
}
