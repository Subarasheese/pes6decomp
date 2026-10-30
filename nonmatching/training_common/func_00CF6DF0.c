/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00262FF0(void);
extern u32 func_00CF6DD0(void);
M2C_UNK func_008F62A0(void *, s32);                 /* extern */

void func_00CF6DF0(s32 arg0) {
    void *temp_v0;

    if (func_00262FF0() != 0) {
        temp_v0 = func_00CF6DD0();
        if (M2C_FIELD(temp_v0, s32 *, 0x28) == 0) {
            func_008F62A0(temp_v0 + 0x2C, arg0);
        }
    }
}
