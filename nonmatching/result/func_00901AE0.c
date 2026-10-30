/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0090F820();                                /* extern */
s32 func_0091A7D0();                                /* extern */
extern char D_00921D44[];
extern char D_00921DB8[];

s32 func_00901AE0(void) {
    if (func_0090F820() != 0) {
        return 0;
    }
    if (func_0091A7D0() == 0) {
        return 0;
    }
    if ((*(s32 *)D_00921D44) == 1) {
        func_0026E840(0x84028400);
        (*(s32 *)D_00921DB8) = 6;
        (*(s32 *)D_00921D44) = 8;
        return 0;
    }
    return 0;
}
