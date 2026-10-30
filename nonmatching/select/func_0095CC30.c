/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001B6A30(s32);                             /* extern */
M2C_UNK func_0023B040();                            /* extern */
M2C_UNK func_0023EA10(M2C_UNK);                     /* extern */
s32 func_0023F330(M2C_UNK);                         /* extern */
M2C_UNK func_00263450(s32);                         /* extern */
s32 func_002640B0();                                /* extern */
M2C_UNK func_008C0470(M2C_UNK *);                   /* extern */
M2C_UNK func_008C1700(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0095C590();                            /* extern */
extern char D_0053C300[];
extern char D_0053C309[];
extern char D_0096D2D0[];

s32 func_0095CC30(void) {
    if ((*(s8 *)D_0053C309) == 0xB) {
        if (func_001B6A30(1) == 0) {
            return 0;
        }
        goto block_8;
    }
    if (M2C_FIELD(((void *)D_0053C300), s8 *, 9) == 1) {
        if (func_001B6A30(func_0023F330(1)) == 0) {
            return 0;
        }
        goto block_8;
    }
    if (func_001B6A30(1) == 0) {
        return 0;
    }
block_8:
    func_008C1700(((void *)D_0096D2D0), 0, 3);
    if (M2C_FIELD(((void *)D_0053C300), s8 *, 9) == 2) {
        func_0095C590();
    }
    func_008C0470(((void *)D_0096D2D0));
    if (M2C_FIELD(((void *)D_0053C300), s8 *, 9) == 1) {
        func_00263450(func_002640B0());
    }
    func_0023EA10(0);
    func_0023B040();
    return 1;
}
