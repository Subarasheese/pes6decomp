/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 RemoveDmacHandler(s32, s32);                        /* extern */
s32 DisableDmac();                                /* extern */
M2C_UNK func_00105F78(s32);                         /* extern */

s32 func_0012A6D0(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = DisableDmac();
    temp_v0 = RemoveDmacHandler(arg0, arg1);
    if ((temp_v0 != 0) && (temp_s0 != 0)) {
        func_00105F78(arg0);
    }
    return temp_v0;
}
