/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_0099C730(s32);
extern s32 func_009E9F00(char *, s32);

s32 func_009E8470(char *arg0) {
    s32 temp_v0;

    temp_v0 = func_009E9F00(arg0 + 0x10, M2C_FIELD(arg0, s32 *, 0x50));
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, s32 *, 0x54) = temp_v0;
        func_0099C730(0x01F70099);
        return 1;
    }
    return 0;
}
