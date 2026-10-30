/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0081EC20(M2C_UNK);                         /* extern */
s32 func_009D9FC0();                                /* extern */
extern u8 *D_00A7DEC0;

s32 func_009DDA50(void) {
    if (D_00A7DEC0 != NULL) {
        if (*D_00A7DEC0 != 0) {
            return 2;
        }
        if ((func_009D9FC0() != 0) && (func_0081EC20(0x4000) != 0)) {
            func_0026E840(0x84028400);
            return 1;
        }
        return 0;
    }
    return 2;
}
