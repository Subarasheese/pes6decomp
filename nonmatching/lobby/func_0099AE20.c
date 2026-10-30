/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK sprintf(s32, M2C_UNK *, s32);         /* extern */
extern char D_00A02508[];
extern char D_00A02510[];

void func_0099AE20(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        if (arg0 != 0) {
            sprintf(arg1, ((void *)D_00A02510), arg0);
        } else {
            sprintf(arg1, ((void *)D_00A02508), arg0);
        }
    }
}
