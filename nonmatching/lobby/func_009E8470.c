/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0099C730(M2C_UNK);                     /* extern */
s32 func_009E9F00(void *, s32);                     /* extern */

s32 func_009E8470(void *arg0) {
    s32 temp_v0;

    temp_v0 = func_009E9F00(arg0 + 0x10, M2C_FIELD(arg0, s32 *, 0x50));
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, s32 *, 0x54) = temp_v0;
        func_0099C730(0x01F70099);
        return 1;
    }
    return 0;
}
