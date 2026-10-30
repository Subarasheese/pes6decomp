/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_003412D0(void *arg0) {
    s32 temp_v1;
    u8 temp_v1_2;

    if (arg0 != NULL) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0);
        switch (temp_v1) {                          /* switch 1; irregular */
        case 7:                                     /* switch 1 */
            temp_v1_2 = M2C_FIELD(arg0, u8 *, 0x20);
            switch (temp_v1_2) {                    /* switch 2; irregular */
            case 3:                                 /* switch 2 */
                return 1;
            case 2:                                 /* switch 2 */
                return 1;
            }
            break;
        case 9:                                     /* switch 1 */
            if (M2C_FIELD(arg0, u8 *, 0x20) == 2) {
                return 1;
            }
            goto block_19;
        }
    } else {
block_19:
        return 0;
    }
}
