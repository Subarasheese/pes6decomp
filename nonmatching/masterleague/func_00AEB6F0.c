/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00223E00();                              /* extern */
s32 func_0096E440(s32);                             /* extern */
s32 func_0096E890(s32);                             /* extern */
s32 func_0096F7D0(s32);                             /* extern */
s32 func_00B02890(s32);                             /* extern */
s32 func_00B04A90(s32);                             /* extern */
s32 func_00B04D40(s32);                             /* extern */
s32 func_00B04DF0(s32);                             /* extern */

s32 func_00AEB6F0(s32 arg0) {
    s32 temp_v1;
    void *temp_v0;

    temp_v0 = func_00223E00();
    if (temp_v0 != NULL) {
        if (func_0096F7D0(arg0) != 1) {
            if (func_0096E440(arg0) != 0) {
                if ((func_00B02890(arg0) & 0xFF) != 1) {
                    temp_v1 = arg0 & 0xFFFF;
                    if ((temp_v1 >= 0x11F5) && (temp_v1 < 0x12A6) && ((M2C_FIELD(temp_v0, u8 *, 6) & 0x3F) <= 0)) {
                        return 0;
                    }
                    if ((func_0096E890(arg0) == 1) && (func_00B04A90(arg0) != 1)) {
                        return 0;
                    }
                    if ((func_00B04DF0(arg0) == 1) && (func_00B04D40(arg0) != 1)) {
                        return 0;
                    }
                    return 1;
                }
                return 0;
            }
            return 0;
        }
        return 0;
    }
    return 0;
}
