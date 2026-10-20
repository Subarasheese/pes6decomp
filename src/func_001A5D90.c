/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00154070(s32);                             /* extern */
s32 func_0017F850(s32);                             /* extern */
s32 func_002CBB90(M2C_UNK);                         /* extern */
s32 func_002CBC80(M2C_UNK);                         /* extern */

s32 func_001A5D90(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s0 = func_002CBC80(0xB);
    temp_s1 = func_0017F850(arg0);
    if (temp_s0 == 0) {
        return func_00154070(temp_s1);
    }
    return (temp_s0 + func_002CBB90(0xB)) - temp_s1;
}
