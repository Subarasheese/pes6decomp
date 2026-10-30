/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00154490(s32, s32);
s32 func_0081EE40();                                /* extern */
extern char D_008A4250[];

s32 func_0081EC20(s32 arg0) {
    if (func_0081EE40() == 1) {
        return 1;
    }
    if ((*(s32 *)D_008A4250) != 1) {
        return func_00154490(0, arg0);
    }
    return 0;
}
