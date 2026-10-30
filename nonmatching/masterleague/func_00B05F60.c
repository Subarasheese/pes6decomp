/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F3A20(void *);
extern u32 func_00B06560(void);
s32 func_002F3850(void *);                          /* extern */

void func_00B05F60(void) {
    u32 temp_v0;
    void *temp_a0;

    temp_v0 = func_00B06560();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, void **, 0x28);
        if ((temp_a0 != NULL) && (func_002F3850(temp_a0) == 2)) {
            func_002F3A20(M2C_FIELD(temp_v0, void **, 0x28));
        }
    }
}
