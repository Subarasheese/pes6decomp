/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009A0430(void);
extern void func_001D7D60(void *, s8);
void func_009A2320(s8 arg0) {
    u32 temp_v0;

    temp_v0 = func_009A0430();
    if (temp_v0 != 0) {
        func_001D7D60(M2C_FIELD(temp_v0, void **, 0x1BC), arg0);
        if (!(arg0 & 0xFF)) {
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x1C0), arg0);
        }
        M2C_FIELD(temp_v0, s8 *, 0x1B0) = arg0;
    }
}
