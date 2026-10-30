/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001FC7D0(M2C_UNK);                         /* extern */
M2C_UNK func_00305E50(void *);                      /* extern */
M2C_UNK func_00305E60(void *, M2C_UNK *);           /* extern */
extern M2C_UNK func_002FF030;

s32 func_002FF0E0(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x18);
    M2C_FIELD(temp_v0, s32 *, 0x18) = 0;
    M2C_FIELD(temp_v0, s32 *, 0) = 0;
    M2C_FIELD(temp_v0, s32 *, 4) = 0;
    M2C_FIELD(temp_v0, s32 *, 8) = 0;
    M2C_FIELD(temp_v0, s32 *, 0xC) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x10) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x14) = 0;
    if (func_001FC7D0(5) != 7) {
        func_00305E50(arg0);
    } else {
        func_00305E60(arg0, &func_002FF030);
    }
    return 1;
}
