/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00236630(void);
extern s32 func_00226710(void);
s32 func_002305D0(u8);                              /* extern */
s32 func_00234370();                                /* extern */
extern char D_00591C09[];

s32 func_0023AEC0(void) {
    s32 temp_s1;
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 1;
    switch ((*(u8 *)D_00591C09)) {                           /* irregular */
    case 2:
        var_s0 = 0;
        break;
    case 14:
    case 4:
    case 1:
        if ((func_002305D0((*(u8 *)D_00591C09)) & 0xFF) == 1) {
            goto block_11;
        }
        temp_s1 = func_00236630() & 0xFF;
        temp_v0 = func_00234370() & 0xFF;
        if ((temp_v0 != 0) && (((s32) ((temp_s1 & 0xFF) * 0xA) / (s32) (temp_v0 & 0xFF)) >= 9)) {
block_11:
            var_s0 = 0;
        }
        if (((func_00226710() & 0xFF) == 0x20) || ((func_00226710() & 0xFF) == 0x21)) {
            var_s0 = 1;
        }
        break;
    }
    return var_s0;
}
