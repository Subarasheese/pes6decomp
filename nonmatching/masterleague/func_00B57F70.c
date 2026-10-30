/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229DF0(void);
s32 func_00B57F70(void) {
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_v0;

    temp_v0 = func_00229DF0();
    if (temp_v0 != NULL) {
        temp_v1 = M2C_FIELD(temp_v0, u8 *, 7);
        switch (temp_v1) {                          /* switch 1; irregular */
        case 1:                                     /* switch 1 */
            return 4;
        case 0:                                     /* switch 1 */
            temp_v1_2 = M2C_FIELD(temp_v0, u8 *, 6);
            switch (temp_v1_2) {                    /* switch 2; irregular */
            case 0:                                 /* switch 2 */
                return 0;
            case 1:                                 /* switch 2 */
                return 1 & 0xFF;
            case 2:                                 /* switch 2 */
                return 2 & 0xFF;
            case 3:                                 /* switch 2 */
                return 3 & 0xFF;
            default:                                /* switch 2 */
                return 0xFF;
            }
            break;
        default:                                    /* switch 1 */
            return 0xFF;
        }
    } else {
        return 0xFF;
    }
}
