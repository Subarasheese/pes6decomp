/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00AB33D0(s32 arg0) {
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = arg0 & 0xFFFF;
    switch (temp_v1) {                              /* switch 1; irregular */
    default:                                        /* switch 1 */
        var_v0 = 0xE6;
        switch (temp_v1) {                          /* switch 2; irregular */
        case 0x3AF:                                 /* switch 2 */
            return 0x5A;
        case 0x113:                                 /* switch 2 */
        case 0x263:                                 /* switch 2 */
            return 0x14;
        case 0x178:                                 /* switch 2 */
            return 0x2D;
        case 0x29C:                                 /* switch 2 */
        case 0x314:                                 /* switch 2 */
            return 0xA0;
        case 0xCF:                                  /* switch 2 */
            return 6;
        case 0x1A2:                                 /* switch 2 */
            return 0x23;
        case 0x199:                                 /* switch 2 */
            return 0x91;
        case 0x2F4:                                 /* switch 2 */
        case 0xF4:                                  /* switch 2 */
            return 0x1E;
        case 0x105:                                 /* switch 2 */
            return 0xC8;
        case 0x2D2:                                 /* switch 2 */
            return 0x74;
        case 0x18B:                                 /* switch 2 */
            return 0x62;
        case 0xD6:                                  /* switch 2 */
            return 0x32;
        case 0xE6:                                  /* switch 2 */
            return 0x14;
        default:                                    /* switch 2 */
            var_v0 = 0;
            /* fallthrough */
        case 0x3A6:                                 /* switch 2 */
            return var_v0;
        }
        break;
    case 0x100:                                     /* switch 1 */
    case 0xFF:                                      /* switch 1 */
    case 0xE2:                                      /* switch 1 */
    case 0x116:                                     /* switch 1 */
        return 0x5A;
    case 0xD5:                                      /* switch 1 */
        return 0x41;
    case 0xD4:                                      /* switch 1 */
    case 0x104:                                     /* switch 1 */
        return 0x4B;
    }
}
