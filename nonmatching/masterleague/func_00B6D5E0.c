/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B6DB70(void);
extern void * func_001D5A10(s32);
M2C_UNK func_00B6D150(u8);                          /* extern */
M2C_UNK func_00B6D2E0();                            /* extern */

void func_00B6D5E0(void) {
    u32 temp_v0;

    temp_v0 = func_00B6DB70();
    if (temp_v0 != 0) {
        M2C_FIELD(temp_v0, void **, 4) = func_001D5A10(0x10337);
        M2C_FIELD(temp_v0, void **, 8) = func_001D5A10(0x1033D);
        func_00B6D2E0();
        func_00B6D150(M2C_FIELD(temp_v0, u8 *, 0x5C));
    }
}
