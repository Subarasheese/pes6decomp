/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00841F40(void);
M2C_UNK func_0026E840(s32);                         /* extern */
M2C_UNK func_00841F50(s32);                         /* extern */

s32 func_00822640(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_00841F40();
    if (arg0 == 0) {
        func_00841F50(0);
    } else if (temp_v0 != arg0) {
        func_0026E840(arg0);
        func_00841F50(arg0);
    }
    return 1;
}
