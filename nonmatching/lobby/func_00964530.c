/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009641B0(s32, s32, s32, s32, s32, s32, s32, s32, s64, s64); /* extern */
M2C_UNK func_009C3110();                            /* extern */

s32 func_00964530(void *arg0) {
    if (arg0 == NULL) {
        func_009C3110();
        return 1;
    }
    return func_009641B0(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0x1C), (s64) M2C_FIELD(arg0, s32 *, 0x20), (s64) M2C_FIELD(arg0, s32 *, 0x24));
}
