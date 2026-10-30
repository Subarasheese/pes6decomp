/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6280(void);
extern s32 func_002079F0(void *);
s32 func_009E1C90(M2C_UNK);                         /* extern */

s32 func_00BA87B0(void **arg0, s32 arg1) {
    u16 temp_v1;
    u16 temp_v1_2;
    u8 temp_v0;
    void *temp_a0;

    if ((func_009E1C90(1) & 0xFF) != 0xC) {
        if ((func_009E1C90(1) & 0xFF) == 5) {
            if ((func_009E1C90(2) & 0xFF) != 3) {
                if ((func_009E1C90(2) & 0xFF) != 0xA) {
                    temp_v1 = M2C_FIELD(M2C_FIELD(*arg0, void **, 4), u16 *, 0x30);
                    if ((temp_v1 != 0x48E) && (temp_v1 != 0x38C)) {
                        return 0;
                    }
                    switch (arg1) {                 /* switch 7; irregular */
                    case 18:                        /* switch 7 */
                        goto block_111;
                    case 23:                        /* switch 7 */
                        goto block_111;
                    case 24:                        /* switch 7 */
                        goto block_111;
                    case 14:                        /* switch 7 */
                        goto block_111;
                    case 36:                        /* switch 7 */
                        goto block_111;
                    case 35:                        /* switch 7 */
                        goto block_111;
                    case 5:                         /* switch 7 */
                        goto block_111;
                    }
                } else {
                    switch (arg1) {                 /* switch 6; irregular */
                    case 33:                        /* switch 6 */
                        goto block_111;
                    case 32:                        /* switch 6 */
                        goto block_111;
                    case 31:                        /* switch 6 */
                        goto block_111;
                    case 30:                        /* switch 6 */
                        goto block_111;
                    }
                }
            } else {
                switch (arg1) {                     /* switch 5; irregular */
                case 1:                             /* switch 5 */
block_111:
                    if (func_002079F0(M2C_FIELD(*arg0, void **, 4)) != 0) {
                        return 1;
                    }
                    goto block_113;
                case 2:                             /* switch 5 */
                    goto block_111;
                }
            }
        } else {
            goto block_113;
        }
    } else {
        temp_v0 = func_00BF6280();
        switch (temp_v0) {                          /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            temp_a0 = M2C_FIELD(*arg0, void **, 4);
            temp_v1_2 = M2C_FIELD(temp_a0, u16 *, 0x30);
            switch (temp_v1_2) {                    /* switch 3; irregular */
            case 0x48F:                             /* switch 3 */
                if (arg1 == 4) {
block_97:
                    if (func_002079F0(temp_a0) != 0) {
                        return 1;
                    }
block_113:
                    return 0;
                }
                return 0;
            case 0x48E:                             /* switch 3 */
            case 0x38C:                             /* switch 3 */
                switch (arg1) {                     /* switch 4; irregular */
                case 47:                            /* switch 4 */
                    goto block_97;
                case 49:                            /* switch 4 */
                    goto block_97;
                case 18:                            /* switch 4 */
                    goto block_97;
                case 36:                            /* switch 4 */
                    goto block_97;
                case 37:                            /* switch 4 */
                    goto block_97;
                case 13:                            /* switch 4 */
                    goto block_97;
                case 12:                            /* switch 4 */
                    goto block_97;
                case 7:                             /* switch 4 */
                    goto block_97;
                }
                break;
            default:                                /* switch 3 */
                return 0;
            }
            break;
        case 2:                                     /* switch 1 */
            switch (arg1) {                         /* switch 2; irregular */
            case 0x14:                              /* switch 2 */
block_59:
                if (func_002079F0(M2C_FIELD(*arg0, void **, 4)) != 0) {
                    return 1;
                }
                goto block_113;
            case 0x38:                              /* switch 2 */
                goto block_59;
            case 0x3A:                              /* switch 2 */
                goto block_59;
            case 0x10:                              /* switch 2 */
                goto block_59;
            case 0xB:                               /* switch 2 */
                goto block_59;
            case 0xA:                               /* switch 2 */
                goto block_59;
            case 0x27:                              /* switch 2 */
                goto block_59;
            case 0x26:                              /* switch 2 */
                goto block_59;
            case 0x25:                              /* switch 2 */
                goto block_59;
            case 0x24:                              /* switch 2 */
                goto block_59;
            case 0x23:                              /* switch 2 */
                goto block_59;
            case 0x22:                              /* switch 2 */
                goto block_59;
            case 0x1A:                              /* switch 2 */
                goto block_59;
            case 0x19:                              /* switch 2 */
                goto block_59;
            case 0x1B:                              /* switch 2 */
                goto block_59;
            case 0x8:                               /* switch 2 */
                goto block_59;
            default:                                /* switch 2 */
                return 0;
            }
            break;
        }
    }
}
