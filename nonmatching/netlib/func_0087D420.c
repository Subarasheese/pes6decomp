/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008028E0(s32);                             /* extern */
s32 func_0087F230();                                /* extern */
M2C_UNK func_0087F240(s32);                         /* extern */
extern char D_008B144E[];

s32 func_0087D420(void) {
    if (func_0087F230() == 1) {

    } else if (!(func_008028E0((*(s8 *)D_008B144E) & 1) & 0xFF)) {
        func_0087F240((*(s8 *)D_008B144E) & 1);
    }
    return 0;
}
