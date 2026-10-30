/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00C137F0();                            /* extern */
s32 func_00C18DC0();                                /* extern */
extern char D_00CCB350[];

void func_00C32B50(s32 arg0) {
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = arg0 & 0xFF;
    if (temp_v1 != 0xFF) {
        if ((temp_v1 >> 7) == 0) {
            var_v0 = M2C_FIELD((((temp_v1 & 0x7F) * 4) + ((void *)D_00CCB350)), s32 *, 4);
        } else {
            var_v0 = M2C_FIELD((((func_00C18DC0() & 0xFF) * 4) + ((void *)D_00CCB350)), s32 *, 0x1E8);
        }
        if (var_v0 == -1) {
            func_00C137F0();
        }
    } else {
        func_00C137F0();
    }
}
