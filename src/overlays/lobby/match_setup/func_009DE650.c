/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_001D5A10(M2C_UNK);
s32 func_001D7A20(s32, s32, M2C_UNK);
M2C_UNK func_001D7E40(s32, M2C_UNK);
M2C_UNK func_001D7F10(s32);
s32 func_001D7F90(s32);

s32 func_009DE650(s32 arg0) {
    s32 temp_s1;
    s32 temp_v0;

    temp_v0 = func_001D7F90(func_001D5A10(0x103C5));
    func_001D7E40(temp_v0, 0);
    temp_s1 = func_001D7A20(temp_v0, arg0, 0);
    func_001D7F10(temp_v0);
    return temp_s1;
}
