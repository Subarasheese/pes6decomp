/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_0022C1E0(void);
extern u8 func_00239C20(s32);
void *func_0022BFF0(u8, s32);                       /* extern */

s32 func_0099C2F0(void) {
    u8 temp_s0;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0_2 = func_0022C1E0();
    if (temp_v0_2 != NULL) {
        temp_s0 = M2C_FIELD(temp_v0_2, u8 *, 1);
        temp_v0 = func_0022BFF0(temp_s0, func_00239C20((s32) temp_s0) & 0xFF);
        if (temp_v0 != NULL) {
            return (M2C_FIELD(temp_v0, u8 *, 0x16) & 1) == 1;
        }
        return 0;
    }
    return 0;
}
