/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern char D_0058CD84[];

void func_002561A0(s32 arg0) {
    M2C_UNK (*temp_v1)(s32);
    s32 temp_a0;

    temp_a0 = arg0 * 4;
    temp_v1 = *(((u8 *)D_0058CD84) + temp_a0);
    if (temp_v1 != NULL) {
        temp_v1(temp_a0);
    }
}
