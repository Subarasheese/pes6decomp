/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0012A760();                            /* extern */
M2C_UNK func_0012DF30(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_0012E650();                                /* extern */
M2C_UNK memclr(M2C_UNK *, M2C_UNK);          /* extern */
extern char D_003FB640[];
extern char D_003FB644[];
extern char D_003FB648[];
extern char D_003FB64C[];

void func_0012E0B0(s32 arg0) {
    s32 var_s0;

    var_s0 = arg0;
    if (arg0 >= 2) {
        var_s0 = 1;
    }
    memclr(((void *)D_003FB640), 0x18);
    (*(s32 *)D_003FB644) = -1;
    (*(s32 *)D_003FB648) = var_s0;
    func_0012DF30(((void *)D_003FB64C), 1, 0xC);
    if (func_0012E650() != 0) {
        do {
            func_0012A760();
        } while (func_0012E650() != 0);
    }
}
