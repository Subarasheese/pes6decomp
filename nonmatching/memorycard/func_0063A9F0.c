/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0063A9F0(s32 arg0) {
    s32 temp_a0;
    s32 var_v0;

    temp_a0 = arg0 & 0xFFFF;
    switch (temp_a0) {                              /* switch 1; irregular */
    case 0x1000:                                    /* switch 1 */
        return 0xC;
    case 0x400:                                     /* switch 1 */
        return 0xA;
    case 0x200:                                     /* switch 1 */
        return 9;
    case 0x100:                                     /* switch 1 */
        return 8;
    case 0x80:                                      /* switch 1 */
        return 7;
    case 0x8:                                       /* switch 1 */
        return 5;
    default:                                        /* switch 1 */
        var_v0 = 2;
        switch (temp_a0) {                          /* switch 2; irregular */
        case 0x2:                                   /* switch 2 */
            return 4;
        case 0x1:                                   /* switch 2 */
            return 3;
        case 0x40:                                  /* switch 2 */
            return var_v0;
        default:                                    /* switch 2 */
            return 1;
        }
        break;
    case 0x800:                                     /* switch 1 */
        var_v0 = 0xB;
        /* Duplicate return node #36. Try simplifying control flow for better match */
        return var_v0;
    }
}
