/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_0017F4B0();                            /* extern */
M2C_UNK func_0017F4C0();                            /* extern */
s32 func_00181060(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_00181120(s32);                         /* extern */
s32 func_00181160(s32, s32);                        /* extern */

s32 func_001805A0(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0;

    func_0017F4C0();
    temp_v0 = func_00181160((arg0 >> 0x10) & 7, arg0 & 0xFFFF);
    if (temp_v0 != 0) {
        temp_s0 = func_00181060(temp_v0, 0, 2);
        func_00181120(temp_v0);
        func_0017F4B0();
        return temp_s0 << 0xB;
    }
    func_0017F4B0();
    return 0;
}
