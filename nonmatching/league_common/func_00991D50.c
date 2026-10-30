/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00993A80(void);
extern void func_001D7D60(void *, s8);
void func_00991D50(s8 arg0) {
    u32 temp_v0;

    temp_v0 = func_00993A80();
    if (temp_v0 != 0) {
        func_001D7D60(M2C_FIELD(temp_v0, void **, 0x124), arg0);
    }
}
