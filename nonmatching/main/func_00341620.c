/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00341620(void *arg0) {
    s32 temp_a1;
    u8 temp_v1;

    if (arg0 != NULL) {
        temp_a1 = M2C_FIELD(arg0, s32 *, 0);
        switch (temp_a1) {                          /* switch 1; irregular */
        case 1:                                     /* switch 1 */
            temp_v1 = M2C_FIELD(arg0, u8 *, 0x21);
            switch (temp_v1) {                      /* switch 2; irregular */
            case 11:                                /* switch 2 */
                return 1;
            case 13:                                /* switch 2 */
            case 12:                                /* switch 2 */
                return 1;
            }
            break;
        case 3:                                     /* switch 1 */
            if (M2C_FIELD(arg0, s32 *, 0x20) == 0xA) {
                return 1;
            }
            goto block_20;
        }
    } else {
block_20:
        return 0;
    }
}
