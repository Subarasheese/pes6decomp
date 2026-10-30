/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00173858(void *);
M2C_UNK func_00173B00(void *);                      /* extern */
M2C_UNK func_00174380(void *);                      /* extern */
M2C_UNK func_001744B8();                            /* extern */

s32 func_00173A60(void *arg0) {
    s32 temp_v1;

    if (M2C_FIELD(arg0, s32 *, 0xB8C) < M2C_FIELD(arg0, s32 *, 0xB94)) {
        func_001744B8();
        func_00173B00(arg0);
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
    }
    temp_v1 = M2C_FIELD(arg0, s32 *, 0xBF0);
    if (M2C_FIELD(arg0, s32 *, 0xB8C) < temp_v1) {
        M2C_FIELD(arg0, s32 *, 0xB8C) = temp_v1;
        func_00173B00(arg0);
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        if (M2C_FIELD(arg0, s32 *, 0xD10) == 0) {
            func_00173858(arg0);
        } else {
            func_00174380(arg0);
        }
        return 1;
    }
    return 0;
}
