/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK SD_call(M2C_UNK);                     /* extern */
M2C_UNK func_00812BB0(M2C_UNK);                     /* extern */
M2C_UNK func_00825630(M2C_UNK);                     /* extern */
M2C_UNK func_008FB320(s32);                         /* extern */
M2C_UNK func_00CCFD90(M2C_UNK);                     /* extern */
M2C_UNK func_00CD7800(s8);                          /* extern */
M2C_UNK func_00CF6DF0(M2C_UNK);                     /* extern */
extern char D_003AE970[];

s32 func_00CF6A70(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    SD_call(0x84028400);
    switch ((*(s8 *)D_003AE970)) {
    case 6:
        func_00825630(1);
        break;
    case 9:
        func_00CF6DF0(1);
        break;
    case 7:
        func_00CCFD90(1);
        break;
    case 10:
        func_00812BB0(1);
        break;
    }
    switch ((*(s8 *)D_003AE970)) {
    case 6:
    case 9:
        func_00CD7800((*(s8 *)D_003AE970));
        SD_call(0x82000002);
        break;
    case 10:
    case 7:
        break;
    }
    func_008FB320(arg3);
    return 2;
}
