/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_008F8EC0();                            /* extern */
extern char D_008FA9E0[];
extern char D_008FA9E8[];

s32 func_008F8940(void) {
    s32 var_s0;

    var_s0 = 1;
    switch ((*(s32 *)D_008FA9E0)) {                           /* irregular */
    case 0x200:
        func_0026E840(0x84008401);
        func_008F8EC0();
        var_s0 = 0;
        break;
    case 0x100:
        func_0026E840(0x84028400);
        func_008F8EC0();
        var_s0 = 0;
        break;
    case 0x8000:
        func_0026E840(0x84028400);
        func_008F8EC0();
        (*(s32 *)D_008FA9E8) = 0;
        break;
    }
    return var_s0;
}
