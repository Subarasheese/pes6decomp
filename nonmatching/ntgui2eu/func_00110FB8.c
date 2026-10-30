/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019B140(s32);                         /* extern */

void func_00110FB8(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0) != 0) && ((M2C_FIELD(arg0, s32 *, 0x1C) - M2C_FIELD(arg0, s32 *, 8)) >= M2C_FIELD(arg0, s32 *, 0))) {
        M2C_FIELD(arg0, s32 *, 0) = 0;
        func_0019B140(M2C_FIELD(arg0, s32 *, 0x14));
    }
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 8) < M2C_FIELD(arg0, s32 *, 4)) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_0019B140(M2C_FIELD(arg0, s32 *, 0x18));
}
