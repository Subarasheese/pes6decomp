/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B3C060(void *arg0) {
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4E);
    var_v0 = 0;
    switch (temp_v1) {                              /* switch 1; irregular */
    default:                                        /* switch 1 */
        var_v0 = 0xFF;
        break;
    case 0x78:                                      /* switch 1 */
    case 0x7C:                                      /* switch 1 */
    case 0x7E:                                      /* switch 1 */
    case 0x7F:                                      /* switch 1 */
        var_v0_2 = 1;
block_23:
        var_v0 = var_v0_2 & 0xFF;
        break;
    case 0x38:                                      /* switch 1 */
    case 0x3C:                                      /* switch 1 */
    case 0x3E:                                      /* switch 1 */
    case 0x3F:                                      /* switch 1 */
        var_v0_2 = 2;
        goto block_23;
    }
    switch (temp_v1) {                              /* switch 2; irregular */
    case 0x7:                                       /* switch 2 */
    case 0x27:                                      /* switch 2 */
    case 0x37:                                      /* switch 2 */
    case 0x3F:                                      /* switch 2 */
    case 0x7F:                                      /* switch 2 */
        var_v0_3 = var_v0 | 8;
block_47:
        var_v0 = var_v0_3 & 0xFF;
    case 0x0:                                       /* switch 2 */
    case 0x20:                                      /* switch 2 */
    case 0x30:                                      /* switch 2 */
    case 0x38:                                      /* switch 2 */
    case 0x78:                                      /* switch 2 */
    case 0x4:                                       /* switch 2 */
    case 0x24:                                      /* switch 2 */
    case 0x34:                                      /* switch 2 */
    case 0x3C:                                      /* switch 2 */
    case 0x7C:                                      /* switch 2 */
        return var_v0;
    case 0x6:                                       /* switch 2 */
    case 0x26:                                      /* switch 2 */
    case 0x36:                                      /* switch 2 */
    case 0x3E:                                      /* switch 2 */
    case 0x7E:                                      /* switch 2 */
        var_v0_3 = var_v0 | 0x10;
        goto block_47;
    default:                                        /* switch 2 */
        return 0xFF;
    }
}
