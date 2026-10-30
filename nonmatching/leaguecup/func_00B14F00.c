/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B155F0(void);
extern void * func_001D5A10(s32);
M2C_UNK func_00B149B0();                            /* extern */

void func_00B14F00(void) {
    u32 temp_v0;
    void *temp_v0_2;

    temp_v0 = func_00B155F0();
    if (temp_v0 != 0) {
        temp_v0_2 = func_001D5A10(0x10305);
        M2C_FIELD(temp_v0, void **, 4) = temp_v0_2;
        if (temp_v0_2 != NULL) {
            func_00B149B0();
        }
    }
}
