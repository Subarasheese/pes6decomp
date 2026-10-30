/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0044AA50[];
extern void *D_0060245C;

s32 func_001104DC(u32 arg0) {
    s32 var_v0;

    var_v0 = 1;
    if (arg0 < 0xBU) {
        var_v0 = 0;
        if ((*(u8 *)D_0044AA50) == 0) {
            M2C_FIELD(D_0060245C, M2C_UNK (**)(M2C_UNK), 0x6C)(0x8001);
            var_v0 = 0;
        }
    }
    return var_v0;
}
