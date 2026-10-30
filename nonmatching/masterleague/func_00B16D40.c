/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00223C10(void);
M2C_UNK func_0096FB20(u8 *, s32);                   /* extern */

s32 func_00B16D40(s32 arg0) {
    u8 sp1C;
    s32 var_v0;
    void *temp_v0;

    func_0096FB20(&sp1C, arg0);
    if (sp1C != 0xFFFF) {
        temp_v0 = func_00223C10();
        if (temp_v0 != NULL) {
            var_v0 = ((u16) M2C_FIELD(temp_v0, u16 *, 2) >> 1) & 0xFFFF;
            if (var_v0 == 0) {
                var_v0 = 1;
            }
            return var_v0;
        }
        return 1;
    }
    return 0;
}
