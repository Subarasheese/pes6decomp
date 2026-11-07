/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
typedef struct { char pad[0x18]; s32 a; s32 b; } S;
s32 func_00AEAD70(S *arg0, s32 arg1) {
    s32 var_v0;
    var_v0 = 0;
    if (arg1 & 0x4000) {
        if ((arg0->b == 0) || (arg0->a != 0x84008401)) {
            arg0->a = 0x84028400;
        }
        var_v0 = 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    }
    return var_v0;
}
