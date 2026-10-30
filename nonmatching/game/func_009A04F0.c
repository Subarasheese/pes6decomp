/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009A00D0(u8, s32);                         /* extern */
extern char D_00591DCD[];
extern char D_00591E0C[];
extern char D_00591EF6[];
extern char D_00591EF7[];
extern char D_00591EFC[];
extern char D_00591F24[];

s32 func_009A04F0(void) {
    s32 var_v0;

    if ((*(u8 *)D_00591F24) != 7) {
        goto block_1;
    }
    if (func_009A00D0((*(u8 *)D_00591DCD), (*(s32 *)D_00591E0C)) == 0) {
        var_v0 = 0;
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return var_v0;
    }
block_1:
    var_v0 = (*(u8 *)D_00591EF6) != 0;
    if (var_v0 == 0) {
        var_v0 = (*(u8 *)D_00591EF7) != 0;
    }
    if (var_v0 == 0) {
        return (*(u8 *)D_00591EFC) != 0;
    }
    return var_v0;
}
