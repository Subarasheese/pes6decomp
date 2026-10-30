/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00309440(s32);
M2C_UNK func_00309460(s32, s32);                    /* extern */
s32 func_00816F90(s32);                             /* extern */

s32 func_00816EC0(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0_2;
    u32 temp_v0;

    temp_s0 = arg0 + 1;
    temp_v0 = func_00309440(temp_s0 & 0xFF);
    switch (temp_v0) {                              /* switch 1; irregular */
    case 2:                                         /* switch 1 */
        func_00309460(arg0, 0xB);
        break;
    case 1:                                         /* switch 1 */
        func_00309460(arg0, func_00309440(arg0) + 1);
        break;
    case 0:                                         /* switch 1 */
        temp_v0_2 = func_00816F90(temp_s0 + 1);
        switch (temp_v0_2) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            break;
        case 1:                                     /* switch 2 */
            func_00309460(temp_s0, 1);
            break;
        default:                                    /* switch 2 */
            func_00309460(temp_s0, 2);
            break;
        }
        break;
    }
    return 0;
}
