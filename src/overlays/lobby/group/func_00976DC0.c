/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_009B66F0(char *, s32);

s32 func_00976DC0(char *arg0) {
    s32 temp_v0;

    temp_v0 = func_009B66F0(arg0 + 0x10, M2C_FIELD(M2C_FIELD(arg0, char **, 0x58), s32 *, 8));
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, s32 *, 0x54) = temp_v0;
        return 1;
    }
    return 0;
}
