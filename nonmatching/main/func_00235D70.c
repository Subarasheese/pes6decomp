/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern void * func_00229460(void);
extern s32 func_00228ED0(s32, s32);
u8 func_00235D70(s32 arg0, s32 arg1) {
    s32 temp_s1;
    void *temp_s0;

    if (func_00231240() != 1) {
        temp_s1 = func_00228ED0(arg0, arg1) & 0xFF;
        if (temp_s1 == 0xFF) {
            return 0U;
        }
        temp_s0 = func_00229460();
        if (func_00231240() == 1) {
            return 0U;
        }
        if (temp_s0 != NULL) {
            if (temp_s1 < 0x71) {
                return M2C_FIELD((((temp_s1 & 0xFF) * 0xC) + temp_s0), u8 *, 0x4BAD);
            }
            return 0U;
        }
        return 0U;
    }
    return 0U;
}
