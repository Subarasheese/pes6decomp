/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009A0270();                                /* extern */
M2C_UNK func_00C18760(s32, s32);                    /* extern */
s32 func_00C18EE0();                                /* extern */
extern char D_00591E0C[];
extern char D_00591F13[];
extern char D_00CCAF50[];

void func_00C189A0(void) {
    s32 temp_a0;
    s32 temp_a1;
    s32 var_s1;

    if (func_00C18EE0() == 0) {

    } else {
        var_s1 = (*(s32 *)D_00591E0C) == 0;
        M2C_FIELD(((void *)D_00CCAF50), s32 *, 0) = (s32) (M2C_FIELD(((void *)D_00CCAF50), s32 *, 0) + 1);
        if (var_s1 == 0) {
            var_s1 = (*(u8 *)D_00591F13) != 0;
        }
        temp_a1 = func_009A0270() & 0xFF & 0x7F;
        temp_a0 = ((var_s1 << 7) | temp_a1) & 0xFF;
        if (temp_a0 != M2C_FIELD(((void *)D_00CCAF50), u8 *, 4)) {
            func_00C18760(temp_a0, temp_a1);
        }
    }
}
