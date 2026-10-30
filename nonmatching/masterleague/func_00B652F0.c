/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001B9030(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0096C940();                                /* extern */
M2C_UNK func_0096CAA0();                            /* extern */
M2C_UNK func_00B65030(M2C_UNK);                     /* extern */
extern s32 D_003EAEDC;

s32 func_00B652F0(void) {
    switch (D_003EAEDC) {                           /* irregular */
    case 0:
        func_0026E840(0x84028400);
        func_00B65030(0);
        func_0096CAA0();
        D_003EAEDC = 1;
block_10:
    default:
        return 0;
    case 1:
        if ((u32) ((func_0096C940() & 0xFF) - 1) < 2U) {
            D_003EAEDC = 2;
        }
        goto block_10;
    case 2:
        D_003EAEDC = 0;
        func_001B9030(3, 0x1A0080, 1);
        return 1;
    }
}
