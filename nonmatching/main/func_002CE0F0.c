/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK sprintf(s32 *, M2C_UNK *, s32);       /* extern */
extern char D_003DA7E8[];
extern char D_005E5D00[];
extern char D_005E5D40[];
extern s32 *D_005E5D44;

void func_002CE0F0(void) {
    s32 *var_s0;
    s32 var_s1;

    func_001C48E8(((void *)D_005E5D40), 0, 8);
    func_001C48E8(((void *)D_005E5D00), 0, 0x3C);
    var_s1 = 0;
    var_s0 = ((void *)D_005E5D00);
    do {
        (*(s32 *)D_005E5D40) = var_s1;
        D_005E5D44 = var_s0;
        sprintf(var_s0, ((void *)D_003DA7E8), var_s1);
        var_s1 += 1;
        var_s0 += 6;
    } while (var_s1 < 0xA);
    (*(s32 *)D_005E5D40) = 0;
    D_005E5D44 = ((void *)D_005E5D00);
}
