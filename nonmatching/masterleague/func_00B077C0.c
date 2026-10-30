/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B0A1E0(void);
extern s32 func_002F3A20(void *);
s32 func_002F3850(void *);                          /* extern */

void func_00B077C0(void) {
    s32 temp_v0_2;
    u32 temp_v0;
    void *temp_a0;

    temp_v0 = func_00B0A1E0();
    if ((temp_v0 != 0) && (temp_a0 = M2C_FIELD(temp_v0, void **, 0x34), (temp_a0 != NULL)) && (temp_v0_2 = func_002F3850(temp_a0), (temp_v0_2 != 1))) {
        if (temp_v0_2 == 3) {
            return;
        }
        func_002F3A20(M2C_FIELD(temp_v0, void **, 0x34));
    }
}
