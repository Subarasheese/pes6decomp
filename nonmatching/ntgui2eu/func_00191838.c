/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern M2C_UNK *D_005C8DEC;
extern char D_005CA940[];

s32 func_00191838(s32 arg0, M2C_UNK **arg1) {
    M2C_UNK *var_v0;

    switch (arg0) {                                 /* irregular */
    default:
        var_v0 = NULL;
        break;
    case 0x8014:
        var_v0 = ((void *)D_005CA940);
        break;
    case 0x8012:
        var_v0 = (M2C_UNK *)0x5CA400;
        break;
    case 0x8013:
        var_v0 = (M2C_UNK *)0x5C9FC0;
        break;
    case 0x8011:
        var_v0 = D_005C8DEC;
        break;
    case 0x8004:
        var_v0 = (M2C_UNK *)0x5C9F90;
        break;
    case 0x8002:
        var_v0 = (M2C_UNK *)0x5C8EC0;
        break;
    case 0x8003:
        var_v0 = (M2C_UNK *)0x5C8E40;
        break;
    case 0x8001:
        var_v0 = *(M2C_UNK **)0x5C8DE8;
        break;
    }
    *arg1 = var_v0;
    return 1;
}
