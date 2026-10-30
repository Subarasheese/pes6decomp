/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00223C10(void);
M2C_UNK func_0096FB20(u8 *, s32);                   /* extern */
s32 func_00B05280(s32);                             /* extern */

s32 func_00B16DB0(s32 arg0) {
    u8 sp2C;
    s32 temp_s0;
    s32 temp_v1;
    s64 var_v0;
    void *temp_v0;

    func_0096FB20(&sp2C, arg0);
    if (sp2C != 0xFFFF) {
        temp_v0 = func_00223C10();
        if (temp_v0 != NULL) {
            temp_s0 = ((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 1) << 0x38) >> 0x3A) + 1;
            temp_v1 = func_00B05280(arg0) & 0xFFFF;
            var_v0 = (s64) ((((temp_s0 * temp_v1) / 10) + ((u32) (temp_s0 * temp_v1) >> 0x1F)) << 0x30) >> 0x30;
            if (var_v0 == 0) {
                var_v0 = 1;
            }
            return var_v0 & 0xFFFF;
        }
        return 1;
    }
    return 0;
}
