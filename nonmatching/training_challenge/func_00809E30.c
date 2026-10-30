/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002643F0(void);
M2C_UNK func_00809EC0(s32, s32);                    /* extern */
s32 func_00CDCCB0();                                /* extern */

void func_00809E30(s32 arg0, s32 arg1) {
    if (func_00CDCCB0() == 1) {
        func_002643F0();
    }
    func_00809EC0(arg0, arg1);
}
