/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00338AA0(s32, s32);
extern s32 func_003389F0(void *, s32, s32);
void *func_00338AD0(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
s32 func_00341910(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
extern char D_003E1510[];
extern M2C_UNK func_00319D50;
extern M2C_UNK func_0031B230;

s32 func_0031B510(s32 arg0) {
    void *var_s0;

    if (func_00341910(1, 5, 0xA) != 0) {
        var_s0 = func_00338AD0(0x10, &func_0031B230, 7, ((void *)D_003E1510));
    } else {
        var_s0 = func_00338AD0(0x10, &func_00319D50, 7, ((void *)D_003E1510));
        func_003389F0(var_s0, 0, 0xFF);
        func_003389F0(var_s0, 1, 0xFF);
    }
    func_00338AA0((s32) var_s0, arg0);
    return 1;
}
