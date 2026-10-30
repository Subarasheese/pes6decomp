/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BD70F0(void **arg0, s32 arg1) {
    s32 temp_a0_2;
    u16 temp_a0;
    void *temp_a3;
    void *temp_a5;

    temp_a3 = *arg0;
    temp_a5 = M2C_FIELD(temp_a3, void **, 4);
    temp_a0 = M2C_FIELD(temp_a5, u16 *, 0x30);
    switch (temp_a0) {                              /* switch 1; irregular */
    case 0x4B8:                                     /* switch 1 */
        switch (arg1) {                             /* switch 4; irregular */
        case 2:                                     /* switch 4 */
            if (M2C_FIELD(temp_a3, s32 *, 0x1C) < 0x681) {
                return 0x4B9;
            }
            return 0x4BA;
        case 1:                                     /* switch 4 */
        case 0:                                     /* switch 4 */
            if (M2C_FIELD(temp_a3, s32 *, 0x1C) < 0x681) {
                return 0x4BB;
            }
            return 0x4BC;
        default:                                    /* switch 4 */
            return 0;
        }
        break;
    case 0x253:                                     /* switch 1 */
        temp_a0_2 = (((M2C_FIELD(temp_a3, u16 *, 0x26) - M2C_FIELD(temp_a3, u16 *, 0x2C)) + 0x10000) & 0xFFFF) < 0x8001;
        switch (arg1) {                             /* switch 3; irregular */
        case 1:                                     /* switch 3 */
        case 0:                                     /* switch 3 */
            if (M2C_FIELD(temp_a5, u8 *, 0x2D) != (temp_a0_2 & 0xFF)) {
                return 0x51D;
            }
            return 0x4CC;
        case 2:                                     /* switch 3 */
            if (M2C_FIELD(temp_a5, u8 *, 0x2D) != (temp_a0_2 & 0xFF)) {
                return 0x51C;
            }
            return 0x4CA;
        default:                                    /* switch 3 */
            return 0;
        }
        break;
    case 0x385:                                     /* switch 1 */
    case 0x2A1:                                     /* switch 1 */
    case 0x29F:                                     /* switch 1 */
    case 0x2A0:                                     /* switch 1 */
    case 0x29E:                                     /* switch 1 */
        switch (arg1) {                             /* switch 2; irregular */
        case 2:                                     /* switch 2 */
            return 0x506;
        case 1:                                     /* switch 2 */
        case 0:                                     /* switch 2 */
            return 0x507;
        default:                                    /* switch 2 */
            return 0;
        }
        break;
    case 0x2C6:                                     /* switch 1 */
        return 0x4E8;
    default:                                        /* switch 1 */
        return 0;
    }
}
