/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00985C60(u32);
extern s32 func_00985C70(void);
M2C_UNK func_009F49E0(s32);                         /* extern */
M2C_UNK func_009F4A20(s32);                         /* extern */

void func_009E68B0(void) {
    s32 temp_v0;

    temp_v0 = func_00985C70();
    if (temp_v0 != 0) {
        func_009F49E0(temp_v0);
        func_009F4A20(temp_v0);
        func_00985C60(0U);
    }
}
