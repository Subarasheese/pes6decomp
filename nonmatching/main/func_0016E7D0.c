/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0016E4E8(s8 *);                        /* extern */
extern char D_0038593C[];
extern char D_00385940[];

void func_0016E7D0(void) {
    s32 temp_v0;
    s32 var_s1;
    s8 *var_s0;

    temp_v0 = (*(s32 *)D_0038593C) - 1;
    (*(s32 *)D_0038593C) = temp_v0;
    if (temp_v0 == 0) {
        var_s0 = ((void *)D_00385940);
        var_s1 = 0xF;
        do {
            if (*var_s0 == 1) {
                func_0016E4E8(var_s0);
            }
            var_s1 -= 1;
            var_s0 += 0x44;
        } while (var_s1 >= 0);
    }
}
