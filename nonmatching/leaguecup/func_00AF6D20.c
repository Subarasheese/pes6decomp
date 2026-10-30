/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(s32, M2C_UNK *, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_00220240(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_00362580(M2C_UNK *, s32);              /* extern */
extern char D_0052FF80[];
extern char D_00530CEC[];
extern char D_00B41CF0[];

void func_00AF6D20(void) {
    M2C_UNK *var_a1;
    M2C_UNK *var_s0;
    s32 var_a2;
    s32 var_a3;
    s32 var_a4;
    s32 var_s1;

    func_00220240(((void *)D_00B41CF0), 0x12);
    var_s1 = 0;
    var_s0 = ((void *)D_00B41CF0);
    do {
        func_00362580(var_s0, (var_s1 + 0xCC) & 0xFFFF);
        var_s1 += 1;
        var_s0 += 0x16C;
    } while (var_s1 < 0x11);
    var_a2 = 0;
    var_a1 = ((void *)D_0052FF80);
    do {
        var_a4 = 0;
loop_4:
        var_a3 = var_a4 + 1;
        if (var_a3 < 0xA) {
loop_6:
            if (*(var_a1 + var_a4) == *(var_a1 + var_a3)) {
                var_a4 = 0xA;
            } else {
                var_a3 += 1;
                if (var_a3 < 0xA) {
                    goto loop_6;
                }
            }
        }
        var_a4 += 1;
        if (var_a4 < 0xA) {
            goto loop_4;
        }
        var_a2 += 1;
        var_a1 += 0x34;
    } while (var_a2 < 0x11);
    func_001C4730((*(s32 *)D_00530CEC), ((void *)D_00B41CF0), 0x182C, var_a3, var_a4);
}
