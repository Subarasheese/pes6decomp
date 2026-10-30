/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00213540(s32, M2C_UNK);                /* extern */
M2C_UNK func_009D5600(M2C_UNK);                     /* extern */
s32 func_009D5810();                                /* extern */
M2C_UNK func_009D5BA0(M2C_UNK);                     /* extern */
extern s8 *D_00A7DD60;

s32 func_009C5790(void) {
    s32 temp_v0;
    s8 var_v1;

    if ((M2C_FIELD(D_00A7DD60, u8 *, 2) != 0) || (M2C_FIELD(D_00A7DD60, u8 *, 4) != 0)) {
        M2C_FIELD(D_00A7DD60, s8 *, 3) = 6;
        M2C_FIELD(D_00A7DD60, s8 *, 0) = 0x1E;
        return 0;
    }
    temp_v0 = func_009D5810();
    switch (temp_v0) {                              /* irregular */
    case 2:
        func_009D5BA0(0);
        func_009D5600(0x11);
        M2C_FIELD(D_00A7DD60, s8 *, 0xA) = 1;
        if (M2C_FIELD(D_00A7DD60, u8 *, 8) != 0) {
            func_00213540(M2C_FIELD(D_00A7DD60, s32 *, 0xC), 0);
        }
        var_v1 = 1;
block_12:
        M2C_FIELD(D_00A7DD60, s8 *, 0) = var_v1;
        break;
    case 1:
        var_v1 = 0xC;
        goto block_12;
    }
    return 0;
}
