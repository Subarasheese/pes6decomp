/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B14800(void);
extern void * func_001D5A10(s32);
M2C_UNK func_00B12850();                            /* extern */

void func_00B12DC0(void) {
    u32 temp_v0;
    void *temp_v0_2;

    temp_v0 = func_00B14800();
    if (temp_v0 != 0) {
        temp_v0_2 = func_001D5A10(0x102A7);
        M2C_FIELD(temp_v0, void **, 0x760) = temp_v0_2;
        if (temp_v0_2 != NULL) {
            func_00B12850();
        }
    }
}
