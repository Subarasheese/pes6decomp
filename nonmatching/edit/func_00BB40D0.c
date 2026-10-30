/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00BB40D0(void *arg0) {
    s32 temp_a4;
    s8 var_a1;

    temp_a4 = M2C_FIELD(arg0, s32 *, 0x40);
    var_a1 = 0xD;
    switch (temp_a4) {                              /* switch 1; irregular */
    case 9:                                         /* switch 1 */
        M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
        M2C_FIELD(arg0, s8 *, 0x10) = 6;
        break;
    case 8:                                         /* switch 1 */
        M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
        M2C_FIELD(arg0, s8 *, 0x10) = 0xF;
        break;
    case 6:                                         /* switch 1 */
        M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
block_31:
        M2C_FIELD(arg0, s8 *, 0x10) = var_a1;
        break;
    default:                                        /* switch 1 */
        var_a1 = 5;
        switch (temp_a4) {                          /* switch 2; irregular */
        case 5:                                     /* switch 2 */
            M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
            M2C_FIELD(arg0, s8 *, 0x10) = 0xC;
            break;
        case 4:                                     /* switch 2 */
            M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
            M2C_FIELD(arg0, s8 *, 0x10) = 0xB;
            break;
        case 3:                                     /* switch 2 */
            M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
            M2C_FIELD(arg0, s8 *, 0x10) = 0xA;
            break;
        case 2:                                     /* switch 2 */
            M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
            M2C_FIELD(arg0, s8 *, 0x10) = 9;
            break;
        default:                                    /* switch 2 */
            M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
            goto block_31;
        }
        break;
    case 13:                                        /* switch 1 */
    case 12:                                        /* switch 1 */
        M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
        M2C_FIELD(arg0, s8 *, 0x10) = 0x12;
        break;
    }
    M2C_FIELD(arg0, s8 *, 0x14) = 5;
}
