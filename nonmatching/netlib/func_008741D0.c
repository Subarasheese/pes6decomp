/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(void *);                      /* extern */

s32 func_008741D0(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x454);
    if ((0x400 - arg2) < temp_v1) {
        return -0x1F5;
    }
    func_001C4730(arg0 + temp_v1 + 0x40);
    M2C_FIELD(arg0, s32 *, 0x454) = (s32) (M2C_FIELD(arg0, s32 *, 0x454) + arg2);
    return 0;
}
