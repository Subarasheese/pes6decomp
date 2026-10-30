/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00C99A40();                            /* extern */
M2C_UNK func_00C99AD0(s32, s32);                    /* extern */
extern void *D_003AE9D0;
extern char D_0058D7A7[];
extern char D_00591DB4[];
extern char D_00591DD8[];

s32 func_0092C780(M2C_UNK arg0, void *arg1, s32 arg2) {
    func_00C99A40();
    if ((M2C_FIELD(arg1, s16 *, 0x12) == 2) && (M2C_FIELD(arg1, s16 *, 0x10) == 1) && (M2C_FIELD(D_003AE9D0, s16 *, 0) != 1)) {
        func_00C99AD0(M2C_FIELD(D_003AE9D0, s32 *, 4), -1);
        (*(s8 *)D_0058D7A7) = 5;
    } else {
        func_00C99AD0(M2C_FIELD(D_003AE9D0, s32 *, 4), arg2);
        (*(s8 *)D_00591DB4) = 0;
        (*(s8 *)D_00591DD8) = 1;
    }
    return 2;
}
