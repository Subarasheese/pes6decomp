/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001BB370(int);
s32 func_00C8AD70(s32 arg0) {
    M2C_UNK (*temp_v0_2)(M2C_UNK);
    s32 temp_v0;

    temp_v0 = func_001BB370(arg0);
    if (temp_v0 != 0) {
        temp_v0_2 = M2C_FIELD(temp_v0, M2C_UNK (**)(M2C_UNK), 0x1C);
        if (temp_v0_2 != NULL) {
            temp_v0_2(0xFF);
        }
    }
    return 0;
}
