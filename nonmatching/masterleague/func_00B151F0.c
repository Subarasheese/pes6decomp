/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EADF0;

void func_00B151F0(void) {
    s32 temp_a0;

    if (D_003EADF0 != NULL) {
        temp_a0 = (s32) (M2C_FIELD(D_003EADF0, u16 *, 0xC08) - 1) % 32;
        if (temp_a0 < 0xB) {
            M2C_FIELD(D_003EADF0, u8 *, 0xC0E) = (u8) temp_a0;
            M2C_FIELD(D_003EADF0, s8 *, 0xC1A) = 0;
        } else {
            M2C_FIELD(D_003EADF0, u8 *, 0xC0E) = 0xAU;
            M2C_FIELD(D_003EADF0, s8 *, 0xC1A) = (s8) (temp_a0 - M2C_FIELD(D_003EADF0, u8 *, 0xC0E));
        }
    }
}
