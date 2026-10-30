/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229DF0(void);
s32 func_00B534D0(s32 arg0) {
    s32 temp_a0;
    s32 var_a1;
    u8 temp_v1;
    void *temp_v0;

    temp_v0 = func_00229DF0();
    if (temp_v0 != NULL) {
        temp_v1 = M2C_FIELD(temp_v0, u8 *, 7);
        switch (temp_v1) {                          /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            var_a1 = 1;
            break;
        default:                                    /* switch 1 */
            var_a1 = -1;
            break;
        case 1:                                     /* switch 1 */
            var_a1 = 2;
            break;
        }
    } else {
        var_a1 = -1;
    }
    temp_a0 = arg0 & 0xFF;
    switch (temp_a0) {                              /* switch 2; irregular */
    case 3:                                         /* switch 2 */
        return 0x26;
    case 2:                                         /* switch 2 */
        return 0x27;
    case 4:                                         /* switch 2 */
    case 0:                                         /* switch 2 */
        switch (var_a1) {                           /* switch 3; irregular */
        case 1:                                     /* switch 3 */
            return 0x1C;
        case 2:                                     /* switch 3 */
            return 0x20;
        }
        break;
    case 1:                                         /* switch 2 */
        if (var_a1 == 1) {
            return 0x1D;
        }
        if (var_a1 == 2) {
            return 0x21;
        }
    default:                                        /* switch 2 */
        return 0x3B;
    }
}
