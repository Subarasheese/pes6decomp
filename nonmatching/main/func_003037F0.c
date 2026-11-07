/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00305E60(M2C_UNK *);                   /* extern */
extern M2C_UNK func_00303890;

s32 func_003037F0(void *arg0) {
    s32 temp_v1;
    void *temp_a1;

    temp_a1 = M2C_FIELD(arg0, void **, 0x18);
    temp_v1 = M2C_FIELD(temp_a1, s32 *, 0x1C) + 1;
    M2C_FIELD(temp_a1, s32 *, 0x1C) = temp_v1;
    if (temp_v1 == 0x3C) {
        M2C_FIELD(temp_a1, s32 *, 0x1C) = 0;
        func_00305E60(&func_00303890);
        return 1;
    }
    return 0;
}
