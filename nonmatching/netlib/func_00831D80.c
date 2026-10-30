/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0082C2A0(void);
M2C_UNK func_00827B70(s32);                         /* extern */
s32 func_00828140();                                /* extern */
extern char D_008AA13C[];

void func_00831D80(void) {
    M2C_UNK *var_v0;
    M2C_UNK *var_v0_2;
    s32 var_s0;
    s32 var_s1;

    if (func_0082C2A0() == 0) {
        var_v0 = NULL;
    } else {
        var_v0 = ((void *)D_008AA13C);
    }
    if (var_v0 == NULL) {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        var_s1 = M2C_FIELD(var_v0, s32 *, 8);
    } else {
        var_s1 = 0;
    }
    if (func_0082C2A0() == 0) {
        var_v0_2 = NULL;
    } else {
        var_v0_2 = ((void *)D_008AA13C);
    }
    if (var_v0_2 == NULL) {
        var_v0_2 = NULL;
    }
    if (var_v0_2 != NULL) {
        var_s0 = M2C_FIELD(var_v0_2, s32 *, 0x20);
    } else {
        var_s0 = 0;
    }
    func_00827B70((var_s1 - (var_s0 * 0x3C)) + func_00828140());
}
