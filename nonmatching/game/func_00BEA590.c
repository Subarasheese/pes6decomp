/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009E1D30(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00B78E60(M2C_UNK, s32);                /* extern */
s32 func_00B7B850();                                /* extern */
M2C_UNK func_00B7B890();                            /* extern */
s32 func_00BE9B70();                                /* extern */
extern char D_00591BE4[];
extern char D_00591DC4[];

void func_00BEA590(M2C_UNK arg0, s32 arg1) {
    s32 var_a1;
    s32 var_s1;
    s32 var_s2;
    u8 temp_s0;

    var_a1 = arg1;
    temp_s0 = (*(u8 *)D_00591BE4);
    var_s1 = 0;
    if ((s32) temp_s0 > 0) {
loop_2:
        func_00B78E60(0, var_a1);
        var_s2 = 0;
        if (func_00BE9B70() == 0) {
            var_s2 = 1;
        }
        if (func_00B7B850() != 0) {
            var_s2 = 1;
        }
        if (var_s2 == 1) {
            func_009E1D30(2, 0xE);
        } else {
            func_00B7B890();
            var_s1 += 1;
            var_a1 = (*(s32 *)D_00591DC4) + 1;
            (*(s32 *)D_00591DC4) = var_a1;
            if (var_s1 >= (s32) temp_s0) {

            } else {
                goto loop_2;
            }
        }
    }
}
