/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0051FF48[];
extern char D_0051FF49[];
extern char D_0051FF51[];
extern void *D_00520090;

s32 func_00188AC0(s32 arg0, s32 *arg1) {
    s32 *var_v1;
    u8 var_v0;

    if (arg0 == 0) {
        var_v0 = (*(u8 *)D_0051FF49);
    } else {
        var_v0 = (*(u8 *)D_0051FF48);
    }
    if (var_v0 == 0) {
        return 0;
    }
    if (arg0 == 1) {
        if ((*(u8 *)D_0051FF51) != 0) {
            var_v1 = M2C_FIELD(D_00520090, s32 **, 0x30);
        } else {
            var_v1 = M2C_FIELD(D_00520090, s32 **, 0x28);
        }
    } else {
        var_v1 = M2C_FIELD(D_00520090, s32 **, 0x2C);
    }
    *arg1 = var_v1 + 4;
    return *var_v1;
}
