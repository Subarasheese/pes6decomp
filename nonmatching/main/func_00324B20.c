/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00226F80(void);
extern char D_00591C09[];

s32 func_00324B20(s32 *arg0, s32 arg1) {
    u8 temp_v0;
    u8 temp_v0_2;

    switch ((*(u8 *)D_00591C09)) {                           /* switch 1; irregular */
    case 14:                                        /* switch 1 */
        *arg0 = 0;
block_53:
        return 1;
    case 2:                                         /* switch 1 */
        switch (arg1) {                             /* switch 3; irregular */
        case 0x3A:                                  /* switch 3 */
            *arg0 = 5;
            goto block_53;
        default:                                    /* switch 3 */
            *arg0 = 0;
            goto block_53;
        case 0x8:                                   /* switch 3 */
        case 0x7:                                   /* switch 3 */
        case 0x6:                                   /* switch 3 */
        case 0x5:                                   /* switch 3 */
            temp_v0 = func_00226F80();
            switch (temp_v0) {                      /* switch 4; irregular */
            case 2:                                 /* switch 4 */
                *arg0 = 5;
                return 0;
            case 1:                                 /* switch 4 */
                *arg0 = 3;
                goto block_53;
            case 0:                                 /* switch 4 */
                *arg0 = 0;
                goto block_53;
            }
            break;
        }
        break;
    case 4:                                         /* switch 1 */
        *arg0 = 3;
        goto block_53;
    case 1:                                         /* switch 1 */
        if ((arg1 != 0xE) && (arg1 != 0xC) && (arg1 != 0xB) && (arg1 != 0xD)) {
            *arg0 = 3;
            goto block_53;
        }
        temp_v0_2 = func_00226F80();
        switch (temp_v0_2) {                        /* switch 2; irregular */
        case 2:                                     /* switch 2 */
            *arg0 = 5;
            return 0;
        case 1:                                     /* switch 2 */
            *arg0 = 3;
            goto block_53;
        case 0:                                     /* switch 2 */
            *arg0 = 0;
            goto block_53;
        }
        break;
    default:                                        /* switch 1 */
        *arg0 = 5;
        return 0;
    }
}
