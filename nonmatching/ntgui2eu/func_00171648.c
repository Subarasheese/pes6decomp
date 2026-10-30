/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00172E60(void *, u8 *);                /* extern */
M2C_UNK func_00173078(void *);                      /* extern */
M2C_UNK func_00173A60(void *);                      /* extern */
M2C_UNK func_00173B00(void *);                      /* extern */
M2C_UNK func_001747A0(void *);                      /* extern */

s32 func_00171648(void *arg0, u8 *arg1) {
    if (arg0 != NULL) {
        if (arg1 != NULL) {
            M2C_FIELD(arg0, s32 *, 0xBF0) = 0;
            M2C_FIELD(arg0, s32 *, 0xB8C) = 0;
            M2C_FIELD(arg0, s32 *, 0xB94) = 0;
            M2C_FIELD(arg0, s32 *, 0xD0C) = 0;
            func_00172E60(arg0, arg1);
            func_001747A0(arg0);
            func_00173A60(arg0);
            if (*arg1 == 0) {
                func_00173B00(arg0);
            }
            func_00173078(arg0);
            return 1;
        }
        goto block_4;
    }
block_4:
    return 0;
}
