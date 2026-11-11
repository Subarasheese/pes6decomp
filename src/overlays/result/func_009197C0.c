/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


M2C_UNK SD_call(s32);                         /* extern */
s32 func_00918F90(M2C_UNK, M2C_UNK);                /* extern */

s32 func_009197C0(void) {
    s32 temp_v0;

    temp_v0 = func_00918F90(0, 1);
    if (temp_v0 != 0) {
        SD_call(temp_v0);
    }
    return 0;
}
