/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00256140(void);
extern s32 func_00263070(void);
M2C_UNK func_0026E840(s32);                         /* extern */
s32 func_009B45F0();                                /* extern */
s32 func_009B4650();                                /* extern */
s32 func_00B29C50();                                /* extern */

void func_002D4C40(s32 arg0) {
    s32 temp_s0;
    s32 var_v1;

    temp_s0 = func_00256140();
    if (func_00263070() != 0) {
        if (func_00B29C50() == 0) {
            var_v1 = 1;
        } else {
            goto block_4;
        }
    } else {
block_4:
        var_v1 = 0;
    }
    if ((var_v1 != 0) && (arg0 != 1) && (arg0 != 0)) {
        return;
    }
    if (((func_009B45F0() == 0) || ((func_009B4650() & 0xFF) != 4)) && (M2C_FIELD(temp_s0, u8 *, 1) != 0)) {
        func_0026E840(M2C_FIELD(((arg0 * 4) + temp_s0), s32 *, 0x568));
    }
}
