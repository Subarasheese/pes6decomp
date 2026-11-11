/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00841F40(void);
M2C_UNK SD_stop(s32);                         /* extern */

s32 func_00822610(void) {
    s32 temp_v0;

    temp_v0 = func_00841F40();
    if (temp_v0 != 0) {
        SD_stop(temp_v0);
    }
    return 1;
}
