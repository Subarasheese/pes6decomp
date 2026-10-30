/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0010CF90(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00113D78(M2C_UNK);                     /* extern */
s32 func_00114B20();                                /* extern */
M2C_UNK func_00114BB8();                            /* extern */
s32 func_00114C70(s32 *);                           /* extern */
M2C_UNK func_00155A30();                            /* extern */
M2C_UNK func_0017E600();                            /* extern */
s32 func_0085AB00();                                /* extern */
extern char D_003DA7D8[];
extern char D_003DA7E0[];
extern s32 D_003E9D60;
extern char D_005E5CFD[];

void func_002CDE30(void) {
    s32 sp2C;
    s32 var_s0;

    var_s0 = 0;
    if ((*(u8 *)D_005E5CFD) != 0) {
        if (D_003E9D60 != 0) {
            do {

            } while (func_0085AB00() == 0);
        }
        func_00155A30();
        func_0017E600();
        func_0010CF90(((void *)D_003DA7D8), 0x5003, 0, 0, 0, 0);
        do {

        } while (func_0010CF90(((void *)D_003DA7E0), 0x4402, 0, 0, 0, 0) < 0);
loop_10:
        if (func_00114C70(&sp2C) == 0) {
block_6:
            var_s0 += 1;
            if (var_s0 >= 0x3D) {
                if (func_00114B20() == 0x13) {
                    func_00114BB8();
                    func_00113D78(0);
                }
                var_s0 = 0;
            }
            goto loop_10;
        }
        if (sp2C != 0) {
            goto block_6;
        }
loop_13:
        goto loop_13;
    }
}
