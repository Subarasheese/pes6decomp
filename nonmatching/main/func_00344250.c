/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0030F240(void *);
extern int func_003387D0(void *, int);
M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
extern M2C_UNK func_00343F30;

s32 func_00344250(void *arg0) {
    u8 sp2F;

    if (func_0030F240(&sp2F) != 0) {
        func_001C48E8(arg0 + 0x2C, 0, 0x10);
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) sp2F;
        func_003387D0(arg0, (s32) &func_00343F30);
        return 1;
    }
    return 0;
}
