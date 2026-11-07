/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_002CF640(s32, void *, s32);            /* extern */
M2C_UNK func_002D07A0(s32, void *, s32, s32);       /* extern */
void *func_002F82B0(s32, s32);                      /* extern */

void func_002CF5C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_v0;

    temp_v0 = func_002F82B0(arg1, arg2);
    if (M2C_FIELD(temp_v0, u8 *, 0x3A) == 0) {
        func_002CF640(arg0, temp_v0, arg3);
        return;
    }
    func_002D07A0(arg0, temp_v0, arg1, arg2);
}
