/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7C20(void *, s32);
extern u32 func_00B447A0(void);
void func_00B3DCE0(void) {
    u32 temp_v0;

    temp_v0 = func_00B447A0();
    if (temp_v0 != 0) {
        func_001D7C20(M2C_FIELD(temp_v0, void **, 0x524), 1);
        M2C_FIELD(temp_v0, s8 *, 0x6C0) = 0;
    }
}
