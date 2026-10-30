/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001D5A10(M2C_UNK);                         /* extern */
s32 func_002631D0();                                /* extern */
s32 func_00CDCCB0();                                /* extern */
s32 func_00CEC600(M2C_UNK);                         /* extern */

s32 func_00CED0D0(void) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_002631D0();
    switch (temp_v0) {                              /* switch 1; irregular */
    case 9:                                         /* switch 1 */
        return func_00CEC600(0x0501259F);
    case 6:                                         /* switch 1 */
        return func_00CEC600(0x04012592);
    case 5:                                         /* switch 1 */
        return func_00CEC600(0x0201259D);
    case 7:                                         /* switch 1 */
        return func_00CEC600(0x0301259A);
    case 8:                                         /* switch 1 */
    case 2:                                         /* switch 1 */
        return func_001D5A10(0x1259C);
    default:                                        /* switch 1 */
        temp_v0_2 = func_00CDCCB0();
        switch (temp_v0_2) {                        /* switch 2; irregular */
        case 2:                                     /* switch 2 */
            return 0;
        case 1:                                     /* switch 2 */
            return func_00CEC600(0x03012598);
        case 0:                                     /* switch 2 */
            return func_00CEC600(0x03012595);
        default:                                    /* switch 2 */
            return 0;
        }
        break;
    }
}
