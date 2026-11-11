/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 Pes6Settings_Get_B04_b5_w1(void);
s32 func_00B54300();                                /* extern */
s32 func_00B58EC0();                                /* extern */

s32 func_00B58E70(void) {
    if (Pes6Settings_Get_B04_b5_w1() == 0) {
        return 0;
    }
    if (func_00B54300() != 0xD) {
        return 0;
    }
    return func_00B58EC0();
}
