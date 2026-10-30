/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DE7A0(s32, s32, s32, void *, s32);
s32 func_002DE610(s32, void *, M2C_UNK);            /* extern */

s32 func_0085F470(void *arg0) {
    s32 sp2C;

    if (func_002DE610(M2C_FIELD(arg0, s32 *, 0), arg0 + 4, 0x10) == 0) {
        sp2C = 1;
        func_002DE7A0(M2C_FIELD(arg0, s32 *, 0), 6, 1, &sp2C, 4);
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        return 0;
    }
    return -0x66;
}
