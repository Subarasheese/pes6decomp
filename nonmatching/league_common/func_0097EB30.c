/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00230380(void);
s32 func_0094C770();                                /* extern */
M2C_UNK func_0094C790(M2C_UNK);                     /* extern */
s32 func_0097E080();                                /* extern */
M2C_UNK func_0097E9B0();                            /* extern */
extern char D_00591C09[];

s32 func_0097EB30(void) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    temp_v0 = func_0094C770();
    switch (temp_v0) {                              /* irregular */
    case 2:
        var_s0 = 1;
        func_0094C790(0);
        break;
    default:
        func_0094C790(0);
        /* fallthrough */
    case 0:
        if (func_00230380() == 1) {
            func_0094C790(1);
        } else if ((*(u8 *)D_00591C09) != 0xE) {
            func_0094C790(2);
        } else {
            func_0094C790(1);
        }
        break;
    case 1:
        if (func_0097E080() == 1) {
            func_0097E9B0();
        }
        func_0094C790(2);
        break;
    }
    return var_s0;
}
