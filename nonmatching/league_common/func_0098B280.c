/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002293F0(void);
extern void func_002380F0(s8);
void func_0098B280(void) {
    s32 temp_v0;

    temp_v0 = func_002293F0();
    if (temp_v0 != 0) {
        func_002380F0((s8) M2C_FIELD(temp_v0, u8 *, 0x1365));
    }
}
