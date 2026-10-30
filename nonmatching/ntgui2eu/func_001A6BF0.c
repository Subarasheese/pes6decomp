/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019ADD0(s32, M2C_UNK *, s32);         /* extern */
M2C_UNK func_0019ADE0(s32, M2C_UNK *, s32);         /* extern */
extern char D_001A7300[];
extern char D_005CBEF8[];

s32 func_001A6BF0(s32 arg0, s32 arg1) {
    s32 *temp_v1;
    s32 temp_s0;
    u32 temp_a0;

    temp_a0 = arg0 - 1;
    if (temp_a0 >= 0xDU) {
        return 0xFFFFFFFF;
    }
    temp_v1 = (arg0 * 4) + ((void *)D_005CBEF8);
    temp_s0 = *temp_v1;
    *temp_v1 = arg1;
    if (temp_a0 < 3U) {
        func_0019ADD0(arg0, ((void *)D_001A7300), arg0);
    } else {
        func_0019ADE0(arg0, ((void *)D_001A7300), arg0);
    }
    return temp_s0;
}
