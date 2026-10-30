/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0017A700(s32, s32);
s32 func_00360DE0(M2C_UNK, u8);                     /* extern */
s32 func_003612D0(M2C_UNK, u8);                     /* extern */
s32 func_00361630(M2C_UNK, u8);                     /* extern */
extern s8 D_003E9FD4;
extern u8 D_003E9FD8;
extern u8 D_003E9FDC;
extern s8 D_003E9FE4;
extern s16 D_003E9FF0;

void func_003618F0(void) {
    s32 temp_v1;
    s32 var_v1;

    if (D_003E9FDC == 3) {
        var_v1 = 2;
        D_003E9FD4 = 2;
    } else {
        var_v1 = 2;
        switch (D_003E9FDC) {                       /* switch 1; irregular */
        case 2:                                     /* switch 1 */
            var_v1 = 1;
            D_003E9FD4 = 1;
            break;
        case 1:                                     /* switch 1 */
            D_003E9FD4 = 2;
            break;
        case 0:                                     /* switch 1 */
            D_003E9FD4 = 0;
            var_v1 = 0;
            break;
        default:                                    /* switch 1 */
            D_003E9FDC = 0;
            var_v1 = 3;
            D_003E9FD4 = 3;
            break;
        }
    }
    temp_v1 = var_v1 & 0xFF;
    switch (temp_v1) {                              /* switch 2; irregular */
    case 0:                                         /* switch 2 */
        if (!(func_00361630(3, D_003E9FDC) & 0xFF)) {
            return;
        }
    default:                                        /* switch 2 */
block_27:
        D_003E9FE4 = 0;
        D_003E9FF0 = 0;
        D_003E9FDC += 1;
        D_003E9FDC &= 3;
        func_0017A700(0, 3);
        return;
    case 1:                                         /* switch 2 */
        if (!(func_003612D0(3, D_003E9FDC) & 0xFF)) {
            return;
        }
        goto block_27;
    case 2:                                         /* switch 2 */
        if (func_00360DE0(3, D_003E9FDC) & 0xFF) {
            D_003E9FD8 += 1;
            goto block_27;
        }
        break;
    }
}
