/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00812BB0(M2C_UNK);                     /* extern */
M2C_UNK func_00825630(M2C_UNK);                     /* extern */
M2C_UNK func_008FB320(s32);                         /* extern */
M2C_UNK func_00CCFD90(M2C_UNK);                     /* extern */
M2C_UNK func_00CD7800(s8);                          /* extern */
M2C_UNK func_00CF6DF0(M2C_UNK);                     /* extern */
extern char D_003AE970[];

s32 func_00CF6A70(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    func_0026E840(0x84028400);
    switch ((*(s8 *)D_003AE970)) {                           /* switch 1; irregular */
    case 10:                                        /* switch 1 */
        func_00812BB0(1);
        break;
    case 7:                                         /* switch 1 */
        func_00CCFD90(1);
        break;
    case 9:                                         /* switch 1 */
        func_00CF6DF0(1);
        break;
    case 6:                                         /* switch 1 */
        func_00825630(1);
        break;
    }
    switch ((*(s8 *)D_003AE970)) {                           /* switch 2; irregular */
    case 7:                                         /* switch 2 */
    case 10:                                        /* switch 2 */
        break;
    case 9:                                         /* switch 2 */
    case 6:                                         /* switch 2 */
        func_00CD7800((*(s8 *)D_003AE970));
        func_0026E840(0x82000002);
        break;
    }
    func_008FB320(arg3);
    return 2;
}
