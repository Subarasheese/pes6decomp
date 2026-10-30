/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0019EE30(M2C_UNK *, M2C_UNK, M2C_UNK, s32 *, M2C_UNK, s32 *, M2C_UNK, M2C_UNK, s32); /* extern */
extern char D_005CABFC[];
extern char D_01204B40[];
extern char D_01204B80[];
extern char D_01204BC0[];

s32 func_001A3310(s32 arg0) {
    s32 var_v0;

    if ((*(s32 *)D_005CABFC) < 0) {
        return 0;
    }
    (*(s32 *)D_01204BC0) = arg0;
    var_v0 = (*(s32 *)D_01204B80);
    if (func_0019EE30(((void *)D_01204B40), 2, 0, ((void *)D_01204BC0), 4, ((void *)D_01204B80), 4, 0, 0) < 0) {
        var_v0 = -1;
    }
    return var_v0;
}
