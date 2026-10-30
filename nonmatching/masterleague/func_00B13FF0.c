/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00226940(void);
s32 func_0094C7B0();                                /* extern */
extern void *D_003EADF0;

s32 func_00B13FF0(void) {
    void *temp_s0;

    temp_s0 = D_003EADF0;
    if (temp_s0 == NULL) {
        return 0;
    }
    if (func_00226940() < 4) {
        if (M2C_FIELD(temp_s0, s32 *, 0xC34) == 3) {
            return 0;
        }
        return func_0094C7B0() != 0x12;
    }
    return 0;
}
