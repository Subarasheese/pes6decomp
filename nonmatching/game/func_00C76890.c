/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

s32 func_00292F00(u8, M2C_UNK *, s32);              /* extern */
extern char D_00CCBDE0[];

s32 func_00C76890(void) {
    s32 var_a2;
    s32 var_v0;
    void *p;

    var_v0 = 0;
    var_a2 = 0;
    if ((M2C_FIELD(D_00CCBDE0, s32 *, 8) != -1) && (M2C_FIELD(D_00CCBDE0, s32 *, 4) != -1)) {
        var_a2 = 1;
    }
    p = M2C_FIELD(D_00CCBDE0, void **, 0xC);
    if ((var_a2 == 1) && (p != NULL)) {
        var_v0 = func_00292F00(M2C_FIELD(p, u8 *, 0x10), (void *)D_00CCBDE0, var_a2) & 0xFF;
    }
    return var_v0;
}
