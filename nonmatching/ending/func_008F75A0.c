/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0027A880(int);
extern void func_00271EC0(void);
extern s32 func_0017F900(void);
M2C_UNK func_00271FB0();                            /* extern */
M2C_UNK func_00272170(u8);                          /* extern */
extern char D_009083B2[];

s32 func_008F75A0(void) {
    u8 var_v1;

    switch ((*(u8 *)D_009083B2)) {                           /* irregular */
    case 3:
        return 1;
    case 0:
        (*(u8 *)D_009083B2) = 1;
        /* fallthrough */
    case 1:
        func_00272170((*(u8 *)D_009083B2));
        var_v1 = (*(u8 *)D_009083B2) + 1;
block_11:
        (*(u8 *)D_009083B2) = var_v1;
block_12:
    default:
        return 0;
    case 2:
        if (func_0017F900() != 0) {
            func_00271FB0();
            func_0027A880(0);
            func_00271EC0();
            var_v1 = (*(u8 *)D_009083B2) + 1;
            goto block_11;
        }
        goto block_12;
    }
}
