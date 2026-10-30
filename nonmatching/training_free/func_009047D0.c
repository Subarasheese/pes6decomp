/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CB5301[];
extern char D_00CB5302[];
extern char D_00CB5303[];

s32 func_009047D0(u8 *arg0) {
    u8 temp_v1;

    temp_v1 = *arg0;
    if ((temp_v1 != (*(u8 *)D_00CB5301)) && (temp_v1 != (*(u8 *)D_00CB5302)) && (temp_v1 != (*(u8 *)D_00CB5303))) {
        return 0;
    }
    return 1;
}
