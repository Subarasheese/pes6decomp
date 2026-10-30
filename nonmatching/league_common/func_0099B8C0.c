/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_0099B910(void);
extern void func_001D7D80(void *, s16);
void func_0099B8C0(s32 arg0) {
    u32 temp_v0;
    void *temp_a0;

    temp_v0 = func_0099B910();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, void **, 0x14);
        if (temp_a0 != NULL) {
            func_001D7D80(temp_a0, (arg0 & 0xFF) == 0);
        }
    }
}
