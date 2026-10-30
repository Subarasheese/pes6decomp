/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_008CC830(void);
extern void func_0022F900(s8);
M2C_UNK func_002F2ED0(s32);                         /* extern */

s32 func_008CEA40(void) {
    s32 temp_a0;
    s32 temp_v0_2;
    s32 var_v0;
    u32 temp_v0;

    temp_v0 = func_008CC830();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, s32 *, 0xE4);
        if (temp_a0 != 0) {
            func_002F2ED0(temp_a0);
        }
        if ((M2C_FIELD(temp_v0, s32 *, 0xA8) == 6) && (M2C_FIELD(temp_v0, u8 *, 0xA4) == 1)) {
            temp_v0_2 = M2C_FIELD(temp_v0, s32 *, 0xB8);
            switch (temp_v0_2) {                    /* irregular */
            case 2:
                func_0022F900(2);
                break;
            case 0:
                func_0022F900(0);
                break;
            default:
                func_0022F900(1);
                break;
            }
            return 1;
        }
        var_v0 = 1;
        if (M2C_FIELD(temp_v0, u8 *, 0xA4) != 1) {
            var_v0 = 0;
        }
        return var_v0;
    }
    return 1;
}
