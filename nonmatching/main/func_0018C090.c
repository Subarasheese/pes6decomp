/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00151EA0(u16);                             /* extern */
extern char D_00520130[];

void func_0018C090(void) {
    s32 var_s1;
    void *var_s0;

    if ((*(s32 *)D_00520130) != 0) {
        var_s0 = (*(s32 *)D_00520130) + 4;
        var_s1 = 0;
        do {
            M2C_FIELD(var_s0, s8 *, 2) = 0;
            if (M2C_FIELD(var_s0, u8 *, 3) != 0) {
                if (!(func_00151EA0(M2C_FIELD(var_s0, u16 *, 0)) & 0xFFFF)) {
                    M2C_FIELD(var_s0, s8 *, 2) = 1;
                }
            }
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 4);
    }
}
