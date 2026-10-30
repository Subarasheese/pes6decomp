/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005926FD[];
extern char D_005926FE[];
extern char D_005926FF[];
extern char D_00CBBE44[];

u8 func_00BF0530(void) {
    u8 var_v0;

    var_v0 = 0;
    if (((*(u8 *)D_005926FD) == 1) && ((*(u8 *)D_005926FE) == 4) && ((*(u8 *)D_005926FF) == 4)) {
        var_v0 = (*(u8 *)D_00CBBE44);
    }
    return var_v0;
}
