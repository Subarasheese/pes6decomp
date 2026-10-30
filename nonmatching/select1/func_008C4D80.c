/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001B68B0();                                /* extern */
M2C_UNK func_002DED00(s32);                         /* extern */
s32 func_00815100(M2C_UNK *);                       /* extern */
s32 func_00821570();                                /* extern */
s32 func_008223F0();                                /* extern */
s8 func_008C43B0();                                 /* extern */
s8 func_008C48A0();                                 /* extern */
M2C_UNK func_008C4980();                            /* extern */
M2C_UNK func_008C4B50();                            /* extern */
extern s32 D_003EA478;
extern s32 D_003EA484;
extern char D_00510FD0[];
extern char D_0053C300[];
extern char D_008DA930[];

s8 func_008C4D80(void) {
    s32 var_v0;
    s8 var_s1;

    var_s1 = 0;
    switch (D_003EA478) {                           /* irregular */
    case 0:
        func_008C4B50();
        D_003EA478 += 1;
        break;
    case 1:
        if ((*(s32 *)D_00510FD0) == 0xF) {
            if (func_008223F0() == 1) {
                if (func_00821570() == 0) {
                    var_v0 = 0;
                } else {
                    goto block_13;
                }
            } else if (func_001B68B0() == 0) {
                var_v0 = 0;
            } else {
block_13:
                if (func_00815100(((void *)D_008DA930)) == 0) {
                    var_v0 = 0;
                } else {
                    var_v0 = 1;
                }
            }
        } else {
            var_v0 = func_001B68B0();
        }
        if (var_v0 != 0) {
            D_003EA478 = 2;
        }
        func_008C4980();
        break;
    case 2:
        var_s1 = func_008C48A0();
        func_008C4980();
        if ((var_s1 != 1) && (var_s1 != 2)) {

        } else {
            M2C_FIELD(((void *)D_0053C300), s8 *, 9) = var_s1;
            D_003EA478 = 4;
            var_s1 = 0;
        }
        break;
    case 4:
        var_s1 = func_008C43B0();
        if (var_s1 == 2) {
            func_002DED00(D_003EA484);
        }
        break;
    }
    return var_s1;
}
