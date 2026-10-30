/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00210DF0();                                /* extern */
M2C_UNK func_00937530();                            /* extern */
M2C_UNK func_0094C790(M2C_UNK);                     /* extern */
M2C_UNK func_0095ECF0();                            /* extern */
s32 func_0096C940();                                /* extern */
M2C_UNK func_0096D780();                            /* extern */
M2C_UNK func_0096D830();                            /* extern */
M2C_UNK func_00AFCAF0();                            /* extern */
extern void *D_003E77AC;
extern void *D_003E77B0;
extern u8 *D_003E7B0C;

s32 func_00967FC0(void) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0;
    u8 temp_v1_3;

    temp_v1 = M2C_FIELD(D_003E77AC, s32 *, 4);
    var_s0 = -1;
    switch (temp_v1) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        func_0096D780();
        func_0094C790(2);
        M2C_FIELD(D_003E77B0, u8 *, 0x25) = (u8) ((M2C_FIELD(D_003E77B0, u8 *, 0x25) & ~0x10) | 0x10);
        break;
    case 2:                                         /* switch 1 */
        temp_v1_2 = func_0096C940() & 0xFF;
        switch (temp_v1_2) {                        /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            func_0094C790(3);
            break;
        case 2:                                     /* switch 2 */
            func_00937530();
            func_0094C790(1);
            break;
        }
        break;
    case 1:                                         /* switch 1 */
        func_0096D830();
        func_0094C790(0);
        M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) | 0x100);
        if (func_00210DF0() != 2) {
            var_s0 = 0;
        } else {
            func_00AFCAF0();
            var_s0 = 0;
        }
        break;
    case 3:                                         /* switch 1 */
        func_0095ECF0();
        temp_v1_3 = *D_003E7B0C;
        switch (temp_v1_3) {                        /* switch 3; irregular */
        case 4:                                     /* switch 3 */
            var_s0 = 0x3A;
            break;
        case 3:                                     /* switch 3 */
            var_s0 = 0x38;
            break;
        case 2:                                     /* switch 3 */
            var_s0 = 0x37;
            break;
        case 1:                                     /* switch 3 */
            var_s0 = 0x39;
            break;
        default:                                    /* switch 3 */
            var_s0 = 0x36;
            break;
        }
        break;
    }
    if (var_s0 != -1) {
        func_0094C790(0);
    }
    return var_s0;
}
