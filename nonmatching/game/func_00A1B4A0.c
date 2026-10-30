/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00A1B4A0(void *arg0) {
    f32 temp_f1;
    s32 temp_v1;
    u16 temp_v0_2;
    u8 temp_v0;
    void *temp_a1;
    void *temp_a2;

    temp_a2 = M2C_FIELD(arg0, void **, 4);
    if (M2C_FIELD(temp_a2, u8 *, 0x2C) == 0) {
        return 1;
    }
    temp_a1 = M2C_FIELD(temp_a2, void **, 4);
    if (((u64) ((s64) M2C_FIELD(temp_a1, u8 *, 0xD) << 0x38) >> 0x39) == 0x10) {
        return 1;
    }
    temp_v0_2 = M2C_FIELD(temp_a2, u16 *, 0x30);
    switch (temp_v0_2) {                            /* switch 1; irregular */
    case 0xEF:                                      /* switch 1 */
        temp_v1 = M2C_FIELD(temp_a1, u8 *, 3) * 2;
        if (temp_v1 == 0) {
            return 1;
        }
        temp_f1 = M2C_FIELD(temp_a2, f32 *, 0x38);
        if (!(temp_f1 < (f32) (M2C_FIELD(temp_a1, u16 *, 8) * 2)) && (temp_f1 <= (f32) temp_v1)) {
            return 1;
        }
    default:                                        /* switch 1 */
        temp_v0 = M2C_FIELD(arg0, u8 *, 0x16);
        switch (temp_v0) {                          /* switch 2; irregular */
        case 0x32:                                  /* switch 2 */
        case 0x47:                                  /* switch 2 */
            return 1;
        case 0x28:                                  /* switch 2 */
        case 0x27:                                  /* switch 2 */
        case 0x26:                                  /* switch 2 */
        case 0x25:                                  /* switch 2 */
        case 0x24:                                  /* switch 2 */
            return 1;
        case 0x36:                                  /* switch 2 */
        case 0x4F:                                  /* switch 2 */
        case 0x46:                                  /* switch 2 */
        case 0xFF:                                  /* switch 2 */
        case 0x83:                                  /* switch 2 */
        case 0x90:                                  /* switch 2 */
        case 0x8F:                                  /* switch 2 */
        case 0xAD:                                  /* switch 2 */
        case 0x87:                                  /* switch 2 */
        case 0x8C:                                  /* switch 2 */
        case 0x8A:                                  /* switch 2 */
        case 0x89:                                  /* switch 2 */
        case 0x91:                                  /* switch 2 */
        case 0x35:                                  /* switch 2 */
        case 0x42:                                  /* switch 2 */
        case 0x29:                                  /* switch 2 */
        case 0x22:                                  /* switch 2 */
        case 0x21:                                  /* switch 2 */
        case 0x20:                                  /* switch 2 */
        case 0x1F:                                  /* switch 2 */
        case 0x14:                                  /* switch 2 */
        case 0x12:                                  /* switch 2 */
        case 0x11:                                  /* switch 2 */
        case 0x10:                                  /* switch 2 */
        case 0x44:                                  /* switch 2 */
        case 0xD:                                   /* switch 2 */
        case 0xC:                                   /* switch 2 */
        case 0x30:                                  /* switch 2 */
        case 0x2C:                                  /* switch 2 */
            return 1;
        case 0xE0:                                  /* switch 2 */
        case 0xFD:                                  /* switch 2 */
        case 0x9D:                                  /* switch 2 */
        case 0x82:                                  /* switch 2 */
        case 0xA3:                                  /* switch 2 */
            return 0;
        default:                                    /* switch 2 */
            return ((s32) temp_v0 >= 0x80) & 0xFF;
        }
        break;
    case 0x365:                                     /* switch 1 */
    case 0x372:                                     /* switch 1 */
    case 0x364:                                     /* switch 1 */
    case 0x220:                                     /* switch 1 */
    case 0x2C6:                                     /* switch 1 */
    case 0xE8:                                      /* switch 1 */
    case 0xFF:                                      /* switch 1 */
    case 0xC:                                       /* switch 1 */
    case 0x195:                                     /* switch 1 */
    case 0x2B2:                                     /* switch 1 */
    case 0x2B1:                                     /* switch 1 */
    case 0x18E:                                     /* switch 1 */
    case 0x30A:                                     /* switch 1 */
    case 0x308:                                     /* switch 1 */
    case 0x389:                                     /* switch 1 */
    case 0x2A2:                                     /* switch 1 */
    case 0x248:                                     /* switch 1 */
    case 0x249:                                     /* switch 1 */
    case 0xCD:                                      /* switch 1 */
    case 0x284:                                     /* switch 1 */
    case 0x9:                                       /* switch 1 */
    case 0x455:                                     /* switch 1 */
    case 0x44B:                                     /* switch 1 */
    case 0x2DD:                                     /* switch 1 */
    case 0x48:                                      /* switch 1 */
    case 0x307:                                     /* switch 1 */
    case 0x306:                                     /* switch 1 */
    case 0x116:                                     /* switch 1 */
    case 0x199:                                     /* switch 1 */
        return 1;
    }
}
