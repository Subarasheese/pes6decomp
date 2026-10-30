/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA40(void);
M2C_UNK func_0085E560(s32, s32);                    /* extern */
M2C_UNK func_0085E6A0(s32, s32);                    /* extern */
extern s32 D_003EA358;

s32 func_0085E4F0(s32 arg0, s32 arg1) {
    if (D_003EA358 == 0) {

    } else if (func_002DCA40() == 0) {
        func_0085E6A0(arg0, arg1);
    } else {
        func_0085E560(arg0, arg1);
    }
    return 0;
}
