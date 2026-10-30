/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00263070(void);
extern u32 func_00CDC590(void);
M2C_UNK func_00812BA0(void *, s32);                 /* extern */

void func_00CCFD90(s32 arg0) {
    void *temp_v0;

    if (func_00263070() != 0) {
        temp_v0 = func_00CDC590();
        if (M2C_FIELD(temp_v0, s32 *, 0x28) == 3) {
            func_00812BA0(temp_v0 + 0x2C, arg0);
        }
    }
}
