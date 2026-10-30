/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
s32 func_00825640(s32, s32 *);                      /* extern */
s32 func_0082B290();                                /* extern */
s32 func_00862110(void *, s32);                     /* extern */
extern void *D_008A4398;
extern char D_008A43B0[];

s32 func_0082A590(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 sp50;
    s32 temp_v0;
    s32 var_a1;
    s32 var_v0;

    if (D_008A4398 == NULL) {
        return 2;
    }
    temp_v0 = func_0082B290();
    if (temp_v0 == -0x96) {
        var_a1 = 1;
    } else if (D_008A4398 == NULL) {
        var_a1 = 1;
    } else {
        var_a1 = 1;
        if ((*(s8 *)D_008A43B0) == 1) {

        } else if ((temp_v0 != -0x3E) && (temp_v0 != -0x49)) {
            if (func_00862110(D_008A4398, arg0) == 0) {
                var_a1 = 1;
            } else {
                var_a1 = 0;
            }
        }
    }
    if (var_a1 == 1) {
        return 2;
    }
    if (arg0 < 0) {
        return 2;
    }
    if (arg0 >= 9) {
        return 2;
    }
    func_001C48E8(&sp40, 0, 0x48);
    sp48 = arg2;
    sp40 = 0x107;
    sp44 = 0xC;
    sp4C = arg1;
    if (D_008A4398 == NULL) {
        var_v0 = 0;
    } else {
        var_v0 = M2C_FIELD(D_008A4398, s32 *, 0x49E8);
    }
    sp50 = var_v0;
    return func_00825640(arg0, &sp40);
}
