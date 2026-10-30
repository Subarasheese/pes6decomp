/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0081EC20(M2C_UNK);                         /* extern */
s32 func_009DF6E0();                                /* extern */
M2C_UNK func_009DF7B0();                            /* extern */
M2C_UNK func_009DFFA0(M2C_UNK);                     /* extern */
extern u8 *D_00A7DEE0;

u8 func_009E02A0(void) {
    u8 temp_v0;

    if (D_00A7DEE0 != NULL) {
        temp_v0 = *D_00A7DEE0;
        if (temp_v0 != 0) {
            return temp_v0;
        }
        func_009DF7B0();
        if ((func_009DF6E0() != 0) && (func_0081EC20(0x4000) != 0)) {
            func_009DFFA0(0);
            *D_00A7DEE0 = 1;
            goto block_13;
        }
        if (func_0081EC20(0x1000) == 0) {
            return 0U;
        }
        func_0026E840(0x84008401);
        func_009DFFA0(0);
        *D_00A7DEE0 = 2;
block_13:
        return *D_00A7DEE0;
    }
    return 2U;
}
