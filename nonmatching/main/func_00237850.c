/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00237850(s32 arg0) {
    s32 var_v0;

    switch (arg0) {                                 /* switch 1; irregular */
    case 26:                                        /* switch 1 */
        return 9;
    default:                                        /* switch 1 */
        var_v0 = 0xF;
        switch (arg0) {                             /* switch 2; irregular */
        case 0xF:                                   /* switch 2 */
            return 8;
        case 0x16:                                  /* switch 2 */
            return 7;
        case 0x18:                                  /* switch 2 */
            return 6;
        case 0x12:                                  /* switch 2 */
            return 5;
        case 0x26:                                  /* switch 2 */
            return 0x12;
        case 0x27:                                  /* switch 2 */
            return 0x11;
        case 0x21:                                  /* switch 2 */
            return 0x10;
        case 0x20:                                  /* switch 2 */
            return 0xE;
        case 0x1C:                                  /* switch 2 */
            return 0xD;
        case 0xD:                                   /* switch 2 */
            return 0xB;
        case 0x3A:                                  /* switch 2 */
            return 0x13;
        case 0x6:                                   /* switch 2 */
            return 0xC;
        default:                                    /* switch 2 */
            var_v0 = 4;
            if (arg0 != 4) {
                var_v0 = 2;
                switch (arg0) {                     /* switch 3; irregular */
                case 2:                             /* switch 3 */
                    return 3;
                case 10:                            /* switch 3 */
                    return 1;
                case 9:                             /* switch 3 */
                    return 0;
                default:                            /* switch 3 */
                    return 0;
                }
            } else {
            case 0x1D:                              /* switch 2 */
            case 3:                                 /* switch 3 */
                return var_v0;
            }
            break;
        case 0x8:                                   /* switch 2 */
        case 0x5:                                   /* switch 2 */
            return 0xC;
        case 0xB:                                   /* switch 2 */
            return 0xB;
        }
        break;
    case 20:                                        /* switch 1 */
        var_v0 = 0xA;
        /* Duplicate return node #72. Try simplifying control flow for better match */
        return var_v0;
    }
}
