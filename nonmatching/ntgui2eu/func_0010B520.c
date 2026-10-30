/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0010BB50();                                /* extern */
extern char D_011B5C80[];

s32 func_0010B520(s32 *arg0, s32 arg1) {
    s32 temp_v0;

    *arg0 = arg1;
    temp_v0 = func_0010BB50();
    if (temp_v0 == 0) {
        (*(s32 *)D_011B5C80) += 1;
        return temp_v0;
    }
    return 1;
}
