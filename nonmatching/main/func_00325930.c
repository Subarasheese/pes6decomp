/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00325930(void *arg0) {
    s32 temp_a1;
    s32 temp_a3;
    s32 var_v0;

    var_v0 = 0;
    if (M2C_FIELD(arg0, s32 *, 0) == 0xB) {
        return 0;
    }
    temp_a1 = M2C_FIELD(arg0, s32 *, 0x2C);
    switch (temp_a1) {                              /* switch 1; irregular */
    case 0x8:                                       /* switch 1 */
        temp_a3 = M2C_FIELD(arg0, s32 *, 0x1C);
        switch (temp_a3) {                          /* switch 2; irregular */
        case 4:                                     /* switch 2 */
            if (M2C_FIELD(arg0, s32 *, 0x14) == 1) {
block_31:
                var_v0 = 1;
            }
            return var_v0;
        case 3:                                     /* switch 2 */
            if (M2C_FIELD(arg0, s32 *, 0x14) == 3) {
                return 1;
            }
            /* Duplicate return node #32. Try simplifying control flow for better match */
            return var_v0;
        case 2:                                     /* switch 2 */
            if (M2C_FIELD(arg0, s32 *, 0x14) == 4) {
                return 1;
            }
            /* Duplicate return node #32. Try simplifying control flow for better match */
            return var_v0;
        default:                                    /* switch 2 */
            return 0;
        }
        break;
    case 0xA:                                       /* switch 1 */
    case 0x11:                                      /* switch 1 */
        if (M2C_FIELD(arg0, s32 *, 0x14) == 3) {
            return 1;
        }
        /* Duplicate return node #32. Try simplifying control flow for better match */
        return var_v0;
    case 0x9:                                       /* switch 1 */
    case 0x39:                                      /* switch 1 */
    case 0x2D:                                      /* switch 1 */
    case 0x26:                                      /* switch 1 */
        if (M2C_FIELD(arg0, s32 *, 0x14) == 1) {
            goto block_31;
        }
        /* Duplicate return node #32. Try simplifying control flow for better match */
        return var_v0;
    default:                                        /* switch 1 */
        return 0;
    }
}
