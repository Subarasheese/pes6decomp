/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001BAA20(s32);                         /* extern */
s32 func_001BACC0(s32);                             /* extern */
s32 func_001BAF70();                                /* extern */

s32 func_001BA5C0(void) {
    s32 temp_v0;

    temp_v0 = func_001BAF70();
    if (func_001BACC0(temp_v0) == 1) {
        func_001BAA20(temp_v0);
    }
    return 0;
}
