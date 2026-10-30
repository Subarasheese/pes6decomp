/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BF6270();                                /* extern */
extern char D_00591E4E[];
extern char D_00CBCDE2[];
extern char D_00CBCDE3[];

s32 func_00310A50(u8 *arg0, s32 arg1) {
    s32 temp_v1;
    u8 var_a0;

    switch (arg1) {                                 /* irregular */
    case 1:
        var_a0 = (*(u8 *)D_00CBCDE2);
        break;
    case 2:
        var_a0 = (*(u8 *)D_00CBCDE3);
        break;
    case 3:
    case 4:
        var_a0 = func_00BF6270() & 0xFF;
        break;
    case 10:
        var_a0 = (*(u8 *)D_00591E4E);
        break;
    default:
        var_a0 = *(u8 *)0x591E4D;
        break;
    }
    temp_v1 = var_a0 & 0xFF;
    if ((temp_v1 == 0) || (temp_v1 == 0xFF)) {
        var_a0 = 3;
    }
    *arg0 = var_a0;
    return var_a0 & 0xFF;
}
