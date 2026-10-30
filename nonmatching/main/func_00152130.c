/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0013B6A0(M2C_UNK);                     /* extern */
M2C_UNK func_0013B720(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern char D_0050D480[];
extern char D_0050D484[];
extern char D_0050D488[];
extern char D_0050D48A[];

s32 func_00152130(s32 arg0, s8 arg1) {
    s32 var_s0;

    (*(s8 *)D_0050D48A) = arg1;
    var_s0 = 0;
    if ((*(s32 *)D_0050D480) != arg0) {
        (*(s32 *)D_0050D484) = 0;
    }
    switch ((*(s32 *)D_0050D484)) {                           /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        break;
    case 2:                                         /* switch 1 */
        var_s0 = 1;
        break;
    case 0:                                         /* switch 1 */
        (*(s32 *)D_0050D480) = arg0;
        (*(s32 *)D_0050D484) = 1;
        func_0013B720(1, 0, 0, 0, 0);
        switch (arg0) {                             /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            (*(s16 *)D_0050D488) = 0;
            func_0013B6A0(0x43000000);
            break;
        case 0:                                     /* switch 2 */
            (*(s16 *)D_0050D488) = 0xFF;
            func_0013B6A0(0);
            break;
        }
        break;
    }
    return var_s0;
}
