/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00847FA0(void);
M2C_UNK func_00856ED0(u32, void *, s32, s32);       /* extern */
M2C_UNK func_00857130(u32, s32, void *, s32);       /* extern */

s32 func_00856B90(s32 arg0, void *arg1, s32 arg2) {
    s16 temp_a0;
    u32 temp_v0;

    temp_v0 = func_00847FA0();
    temp_a0 = M2C_FIELD(arg1, s16 *, 2);
    switch (temp_a0) {                              /* irregular */
    case 2:
    case 1:
        break;
    case 3:
        func_00857130(temp_v0, arg0, arg1, arg2);
        break;
    case 0:
        func_00856ED0(temp_v0, arg1, arg2, arg0);
        break;
    }
    return 0;
}
