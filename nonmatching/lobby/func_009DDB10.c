/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0093DEC0(s32);                             /* extern */
u8 func_0093DED0();                                 /* extern */
M2C_UNK func_0093DEF0();                            /* extern */
s32 func_0093DF10();                                /* extern */
s32 func_009D9F80();                                /* extern */
M2C_UNK func_009DA090();                            /* extern */
M2C_UNK func_009DA600(u8, s32);                     /* extern */
extern void *D_00A7DEC0;

s32 func_009DDB10(void) {
    s32 temp_s2;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;
    u8 temp_a0;

    if (D_00A7DEC0 != NULL) {
        if (M2C_FIELD(D_00A7DEC0, u8 *, 0) != 0) {
            return 2;
        }
        if (func_0093DF10() != 0) {
            func_0093DEF0();
            var_s0 = -1;
            var_s1 = 0;
            M2C_FIELD(D_00A7DEC0, u8 *, 1) = func_0093DED0();
loop_11:
            temp_a0 = M2C_FIELD(D_00A7DEC0, u8 *, 1);
            if (var_s1 < (s32) temp_a0) {
                temp_s2 = M2C_FIELD(D_00A7DEC0, s32 *, 4);
                if (temp_s2 == func_0093DEC0(var_s1)) {
                    var_s0 = var_s1;
                }
                var_s1 += 1;
                goto loop_11;
            }
            func_009DA600(temp_a0, var_s0);
        }
        func_009DA090();
        if (D_00A7DEC0 == NULL) {
            var_v0 = 0;
        } else {
            var_v0 = func_0093DEC0(func_009D9F80());
        }
        M2C_FIELD(D_00A7DEC0, s32 *, 4) = var_v0;
        return 0;
    }
    return 2;
}
