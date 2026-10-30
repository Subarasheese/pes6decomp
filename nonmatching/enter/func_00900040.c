/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00226710();                                /* extern */
s32 func_0022FF20();                                /* extern */
s32 func_002305D0();                                /* extern */
s32 func_002306D0();                                /* extern */
s32 func_00231130();                                /* extern */
s32 func_00292AA0();                                /* extern */
s32 func_00292B10();                                /* extern */
extern char D_0092F0D0[];

s32 func_00900040(void) {
    s32 temp_v1;
    s32 var_s0;

    var_s0 = 0;
    if ((func_002306D0() & 0xFF) != 0xFF) {
        if (func_00292B10() == 1) {
            if (func_00292AA0() == 1) {
                var_s0 = 0xB;
            }
        } else if ((func_00226710() & 0xFF) == 0x2E) {

        } else {
            temp_v1 = func_002305D0() & 0xFF;
            switch (temp_v1) {                      /* irregular */
            case 1:
                break;
            case 2:
                if (!((*(s32 *)D_0092F0D0) & 0x40000)) {
                    var_s0 = 9;
                }
                break;
            case 3:
            case 0:
                if (func_00231130() == 1) {
                    var_s0 = 0;
                } else if (func_0022FF20() == 1) {
                    var_s0 = 0;
                } else if (((*(s32 *)D_0092F0D0) & 0x20000) && !((*(s32 *)D_0092F0D0) & 0x40000)) {
                    var_s0 = 0xA;
                } else if (((*(s32 *)D_0092F0D0) & 0x80000) && !((*(s32 *)D_0092F0D0) & 0x200000)) {
                    var_s0 = 0xA;
                } else {
                    var_s0 = 0xE;
                }
                break;
            }
        }
    }
    return var_s0;
}
