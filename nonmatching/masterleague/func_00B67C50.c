/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B68690(void);
extern void * func_001D5A10(s32);
M2C_UNK func_00B67530(u8);                          /* extern */
M2C_UNK func_00B67990();                            /* extern */

void func_00B67C50(void) {
    u32 temp_v0;

    temp_v0 = func_00B68690();
    if (temp_v0 != 0) {
        M2C_FIELD(temp_v0, void **, 4) = func_001D5A10(0x1033D);
        M2C_FIELD(temp_v0, void **, 0) = func_001D5A10(0x10337);
        func_00B67990();
        func_00B67530(M2C_FIELD(temp_v0, u8 *, 0x144));
    }
}
