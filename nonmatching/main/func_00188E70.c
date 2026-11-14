/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern char D_00397150[];
extern char D_0051FF48[];
extern char D_0051FF49[];
extern char D_005200B0[];

u8 func_00188E70(s32 arg0) {
    u8 var_v1;

    if (!(*(((u8 *)D_005200B0) + arg0) & 8)) {
        return 0U;
    }
    if (arg0 == 0) {
        var_v1 = (*(u8 *)D_0051FF49);
    } else {
        var_v1 = (*(u8 *)D_0051FF48);
    }
    return *(((u8 *)D_00397150) + var_v1);
}
