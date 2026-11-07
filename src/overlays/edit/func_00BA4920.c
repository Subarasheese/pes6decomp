/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 func_002EDE60(s32);
s32 func_00BA4920(s32 arg0) {
    s32 temp_s1;
    s32 var_v1;
    temp_s1 = func_002EDE60(0) & 0xFF;
    var_v1 = 0x64 - ((s32)((u8 *)(func_002EDE60(1) & 0xFF) + temp_s1 * 2));
    if (arg0 == 0) {
        return var_v1 / 2;
    }
    if (arg0 == 1) {
        return var_v1;
    }
    return 0;
}
