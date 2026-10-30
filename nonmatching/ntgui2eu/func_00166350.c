/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00165AE0(void *);                      /* extern */
M2C_UNK func_00189778(void *);                      /* extern */

void func_00166350(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x504) = arg1;
    if (arg1 != 1) {
        if ((arg1 >= 2) && (arg1 < 4)) {
            M2C_FIELD(arg0, s32 *, 0x50C) = 0;
            M2C_FIELD(arg0, s32 *, 0x508) = 0xFF;
            func_00189778(arg0 + 0x518);
            if (arg1 != 3) {
                M2C_FIELD(arg0, s32 *, 0x510) = 0;
            } else {
                M2C_FIELD(arg0, s32 *, 0x510) = 1;
            }
        } else if (M2C_FIELD(arg0, s32 *, 0x510) != 0) {
            func_00165AE0(arg0);
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x508) = 0;
        M2C_FIELD(arg0, s32 *, 0x50C) = 0xFF;
        func_00189778(arg0 + 0x518);
        M2C_FIELD(arg0, s32 *, 0x510) = 0;
    }
}
