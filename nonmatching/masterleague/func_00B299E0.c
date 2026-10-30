/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B2A1C0(void);
extern void * func_001D5A10(s32);
M2C_UNK func_00B28AF0(u8);                          /* extern */
M2C_UNK func_00B29060();                            /* extern */
M2C_UNK func_00B29500();                            /* extern */

void func_00B299E0(void) {
    u32 temp_v0;

    temp_v0 = func_00B2A1C0();
    if (temp_v0 != 0) {
        M2C_FIELD(temp_v0, void **, 0) = func_001D5A10(0x10336);
        func_00B29500();
        func_00B29060();
        func_00B28AF0(M2C_FIELD(temp_v0, u8 *, 0xD0));
    }
}
