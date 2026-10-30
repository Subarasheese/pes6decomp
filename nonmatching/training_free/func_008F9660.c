/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00C99AD0(s32, s32);                    /* extern */
M2C_UNK func_00CD7800();                            /* extern */
extern s32 *D_003AE9D0;

s32 func_008F9660(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    func_0026E840(0x84028400);
    func_00CD7800();
    func_0026E840(0x82000002);
    func_00C99AD0(*D_003AE9D0, arg2);
    return 2;
}
