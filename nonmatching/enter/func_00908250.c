/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00226710();                                /* extern */
s32 func_00229A70();                                /* extern */
s32 func_0090A100(M2C_UNK);                         /* extern */
extern char D_00591C09[];
extern char D_0092F0D0[];

s32 func_00908250(void) {
    s32 temp_s0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;

    if (((*(u8 *)D_00591C09) != 0xE) && ((*(u8 *)D_00591C09) != 4) && ((*(u8 *)D_00591C09) != 2) && ((*(u8 *)D_00591C09) != 1)) {
        var_v0 = 0xFF;
    } else {
        var_v0 = func_00226710() & 0xFF;
    }
    switch (var_v0) {                               /* switch 1; irregular */
    case 0x26:                                      /* switch 1 */
        return 1;
    case 0x39:                                      /* switch 1 */
        return 0;
    case 0x38:                                      /* switch 1 */
    case 0x37:                                      /* switch 1 */
    case 0x36:                                      /* switch 1 */
    case 0x35:                                      /* switch 1 */
    case 0x34:                                      /* switch 1 */
    case 0x33:                                      /* switch 1 */
    case 0x32:                                      /* switch 1 */
    case 0x31:                                      /* switch 1 */
    case 0x30:                                      /* switch 1 */
    case 0x2F:                                      /* switch 1 */
    case 0x2E:                                      /* switch 1 */
    case 0x2D:                                      /* switch 1 */
    case 0x2C:                                      /* switch 1 */
    case 0x2B:                                      /* switch 1 */
    case 0x2A:                                      /* switch 1 */
    case 0x29:                                      /* switch 1 */
    case 0x28:                                      /* switch 1 */
        return 0;
    case 0x22:                                      /* switch 1 */
    case 0x1E:                                      /* switch 1 */
    case 0x20:                                      /* switch 1 */
    case 0x1C:                                      /* switch 1 */
        temp_v1 = func_00229A70() & 0xFF;
        switch (temp_v1) {                          /* switch 2; irregular */
        case 3:                                     /* switch 2 */
            return 5;
        case 2:                                     /* switch 2 */
            return 6;
        case 1:                                     /* switch 2 */
            return 4;
        default:                                    /* switch 2 */
            return 2;
        }
        break;
    case 0x25:                                      /* switch 1 */
    case 0x24:                                      /* switch 1 */
        return 1;
    case 0x21:                                      /* switch 1 */
    case 0x1D:                                      /* switch 1 */
        return 8;
    case 0x3A:                                      /* switch 1 */
    case 0x8:                                       /* switch 1 */
    case 0x6:                                       /* switch 1 */
    case 0x5:                                       /* switch 1 */
    case 0x1B:                                      /* switch 1 */
    case 0x19:                                      /* switch 1 */
    case 0x17:                                      /* switch 1 */
    case 0x15:                                      /* switch 1 */
    case 0x13:                                      /* switch 1 */
        if ((*(s32 *)D_0092F0D0) & 0x80000) {
            return 0;
        }
    default:                                        /* switch 1 */
        temp_s0 = func_0090A100(0) & 0xFFFF;
        temp_v1_2 = func_0090A100(1) & 0xFFFF;
        if ((temp_s0 >= 0) && (temp_s0 < 0x39)) {
            var_v0_2 = 1;
        } else {
            var_v0_2 = 0;
        }
        if (var_v0_2 != 0) {
            if ((temp_v1_2 >= 0) && (temp_v1_2 < 0x39)) {
                var_v0_3 = 1;
            } else {
                var_v0_3 = 0;
            }
            if (var_v0_3 != 0) {
                return 0;
            }
            goto block_76;
        }
block_76:
        if ((temp_s0 >= 0x40) && (temp_s0 < 0x54)) {
            return 5;
        }
        if ((temp_s0 >= 0x54) && (temp_s0 < 0x68)) {
            return 7;
        }
        if ((temp_s0 >= 0xA6) && (temp_s0 < 0xA7)) {
            return 2;
        }
        if ((temp_s0 >= 0x68) && (temp_s0 < 0x7C)) {
            return 6;
        }
        if ((temp_s0 >= 0x7C) && (temp_s0 < 0x8E)) {
            return 3;
        }
        if ((temp_s0 >= 0x8E) && (temp_s0 < 0xA2)) {
            return 4;
        }
    case 0x27:                                      /* switch 1 */
        return 8;
    }
}
