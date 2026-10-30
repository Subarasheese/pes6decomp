/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B0A1E0(void);
extern void func_002F4CE0(void *, s8);
void func_00B07780(s32 arg0) {
    u32 temp_v0;
    void *temp_a0;

    temp_v0 = func_00B0A1E0();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, void **, 0x34);
        if (temp_a0 != NULL) {
            func_002F4CE0(temp_a0, arg0 & 0xFF);
        }
    }
}
