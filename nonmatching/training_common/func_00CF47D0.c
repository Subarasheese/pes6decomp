/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001F87E0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_002631D0();                                /* extern */
s32 func_00C949C0();                                /* extern */
M2C_UNK func_00CD7AB0(M2C_UNK, s32, s32);           /* extern */
M2C_UNK func_00CD7B20(M2C_UNK, s32, s32);           /* extern */
s32 func_00CF2760();                                /* extern */
s32 func_00CF2780();                                /* extern */

void func_00CF47D0(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 temp_v0_2;

    if ((arg1 >= (arg2 + 2)) && ((arg2 + 9) >= arg1) && (func_00CF2780() != 1)) {
        temp_v0 = func_002631D0();
        switch (temp_v0) {                          /* switch 1; irregular */
        case 5:                                     /* switch 1 */
        case 6:                                     /* switch 1 */
        case 4:                                     /* switch 1 */
        case 8:                                     /* switch 1 */
            func_00CD7B20(8, arg2 + 9, arg1);
            break;
        case 3:                                     /* switch 1 */
            if ((func_00C949C0() == 1) && ((func_00CF2760() == 0x15) || (func_00CF2760() == 0x1A))) {
                func_00CD7B20(8, arg2 + 9, arg1);
            } else {
                func_001F87E0(0, 0x1F);
            }
            break;
        }
    }
    if ((arg1 >= (arg3 - 8)) && (func_00CF2780() != 1)) {
        temp_v0_2 = func_002631D0();
        switch (temp_v0_2) {                        /* switch 2; irregular */
        case 6:                                     /* switch 2 */
        case 5:                                     /* switch 2 */
        case 4:                                     /* switch 2 */
        case 8:                                     /* switch 2 */
            func_00CD7AB0(8, arg3, arg1);
            return;
        case 3:                                     /* switch 2 */
            if ((func_00C949C0() == 0) && ((func_00CF2760() == 0x15) || (func_00CF2760() == 0x1A))) {
                func_00CD7AB0(8, arg3, arg1);
                return;
            }
            func_001F87E0(1, 0x1F);
            break;
        }
    }
}
