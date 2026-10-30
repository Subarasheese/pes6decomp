/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AF0980(void);
M2C_UNK func_00972040(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_00AEEA80(s32);                         /* extern */

void func_00AEEBA0(s32 arg0) {
    s32 var_s1;
    u32 temp_v0;

    temp_v0 = func_00AF0980();
    if (temp_v0 != 0) {
        func_00AEEA80(arg0);
        if (M2C_FIELD(temp_v0, s32 *, 0x2D0) == 0) {
            var_s1 = (arg0 + 1) & 0xFF;
        } else {
            var_s1 = 0;
        }
        func_00972040(M2C_FIELD(temp_v0, s32 *, 0x180), 0, var_s1 & 0xFF);
    }
}
