/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern void * func_00229460(void);
u8 func_00235E30(s32 arg0) {
    s32 temp_v1;
    void *temp_s0;

    temp_s0 = func_00229460();
    if (func_00231240() == 1) {
        return 0U;
    }
    if (temp_s0 != NULL) {
        temp_v1 = arg0 & 0xFF;
        if (temp_v1 < 0x71) {
            return M2C_FIELD(((temp_v1 * 0xC) + temp_s0), u8 *, 0x4BAD);
        }
        return 0U;
    }
    return 0U;
}
