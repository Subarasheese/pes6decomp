/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0019EE30(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, s32 *, M2C_UNK, M2C_UNK, s32); /* extern */
extern char D_005CABFC[];
extern char D_01204B40[];
extern char D_01204B80[];
extern char D_01204BC0[];

s32 func_001A3290(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0;
    if ((*(s32 *)D_005CABFC) >= 0) {
        M2C_FIELD(((void *)D_01204BC0), s32 *, 0) = arg1;
        M2C_FIELD(((void *)D_01204BC0), s32 *, 4) = arg0;
        M2C_FIELD(((void *)D_01204BC0), s32 *, 8) = arg2;
        var_v0 = (*(s32 *)D_01204B80);
        if (func_0019EE30(((void *)D_01204B40), 4, 0, ((void *)D_01204BC0), 0xC, ((void *)D_01204B80), 4, 0, 0) < 0) {
            var_v0 = 0;
        }
    }
    return var_v0;
}
