/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009C2520();                                /* extern */
M2C_UNK func_009C2A10(void *, M2C_UNK);             /* extern */
M2C_UNK func_009C2B50(M2C_UNK);                     /* extern */
s32 func_009C2C90();                                /* extern */
M2C_UNK func_009C2D90();                            /* extern */
extern void *D_00A68D90;

s32 func_0097B480(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    if (M2C_FIELD(D_00A68D90, u8 *, 0x38) != 0) {
        func_009C2D90();
    }
    temp_v0 = func_009C2C90();
    switch (temp_v0) {                              /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        func_009C2A10(D_00A68D90, 0x31);
        temp_v0_2 = func_009C2520();
        var_v1 = 1;
        switch (temp_v0_2) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
block_10:
            M2C_FIELD(D_00A68D90, s32 *, 0x34) = var_v1;
            break;
        case 1:                                     /* switch 2 */
            var_v1 = 2;
            goto block_10;
        }
        func_009C2B50(0);
        M2C_FIELD(D_00A68D90, s8 *, 0x39) = 2;
        break;
    case 2:                                         /* switch 1 */
        M2C_FIELD(D_00A68D90, s8 *, 0x39) = 7;
        M2C_FIELD(D_00A68D90, s8 *, 0x3B) = 1;
        break;
    }
    return 0;
}
