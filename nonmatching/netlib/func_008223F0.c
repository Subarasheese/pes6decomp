/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001FC7D0(void);
extern s32 func_001FC800(void);
extern char D_008A5F70[];
extern char D_008A5F72[];
extern char D_008A5F74[];

s32 func_008223F0(void) {
    if (func_001FC7D0() != 0x11) {
        func_001FC800();
        if (func_001FC7D0() != 0x15) {
            return 0;
        }
        switch ((*(s16 *)D_008A5F70)) {                       /* switch 1; irregular */
        case 31:                                    /* switch 1 */
            return 0;
        case 30:                                    /* switch 1 */
        case 29:                                    /* switch 1 */
        case 44:                                    /* switch 1 */
        case 43:                                    /* switch 1 */
        case 42:                                    /* switch 1 */
        case 1:                                     /* switch 1 */
        case 0:                                     /* switch 1 */
            return 0;
        case 32:                                    /* switch 1 */
            if ((*(s16 *)D_008A5F72) < 3) {
                return 0;
            }
block_36:
        default:                                    /* switch 1 */
            return 1;
        case 36:                                    /* switch 1 */
            if ((*(s16 *)D_008A5F72) > 0) {
                return 0;
            }
            goto block_36;
        case 37:                                    /* switch 1 */
            if ((*(s16 *)D_008A5F72) < 3) {
                return 0;
            }
            goto block_36;
        case 39:                                    /* switch 1 */
        case 38:                                    /* switch 1 */
            switch ((*(s16 *)D_008A5F72)) {                   /* switch 2; irregular */
            case 8:                                 /* switch 2 */
                if ((*(s16 *)D_008A5F74) >= 0x1B) {
                    return 0;
                }
                goto block_36;
            case 9:                                 /* switch 2 */
                if ((*(s16 *)D_008A5F74) < 3) {
                    return 0;
                }
                goto block_36;
            }
            break;
        }
    } else {
        return 0;
    }
}
