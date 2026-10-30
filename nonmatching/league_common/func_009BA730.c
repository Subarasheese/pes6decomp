/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009BC8E0(void);
extern void * func_001D5A10(s32);
M2C_UNK func_009BA140();                            /* extern */

void func_009BA730(void) {
    u32 temp_v0;

    temp_v0 = func_009BC8E0();
    if (temp_v0 != 0) {
        M2C_FIELD(temp_v0, void **, 0xF4) = func_001D5A10(0x102A7);
        func_009BA140();
    }
}
