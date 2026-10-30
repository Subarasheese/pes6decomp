/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00979480();                            /* extern */
M2C_UNK func_009794A0();                            /* extern */
s32 func_009794E0();                                /* extern */
M2C_UNK func_00979FF0(M2C_UNK);                     /* extern */
extern s8 *D_00A68D58;

s32 func_00977D90(void) {
    s32 temp_v0;

    if (M2C_FIELD(D_00A68D58, u8 *, 1) != 0) {
        func_00979480();
    }
    temp_v0 = func_009794E0();
    switch (temp_v0) {                              /* irregular */
    case 0:
        break;
    case 1:
        func_009794A0();
        func_00979FF0(1);
        if (M2C_FIELD(D_00A68D58, u8 *, 1) == 0) {
            M2C_FIELD(D_00A68D58, s8 *, 3) = 1;
block_16:
            M2C_FIELD(D_00A68D58, s8 *, 0) = 0;
        } else {
            M2C_FIELD(D_00A68D58, s8 *, 0) = 1;
        }
        break;
    case 2:
        func_009794A0();
        if (M2C_FIELD(D_00A68D58, u8 *, 1) == 0) {
            M2C_FIELD(D_00A68D58, s8 *, 3) = 0xA;
            goto block_16;
        }
        M2C_FIELD(D_00A68D58, s8 *, 0) = 1;
        break;
    }
    return 0;
}
