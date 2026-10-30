/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_009B30B0(u16, s32);                        /* extern */

s32 func_00A099C0(void *arg0, s16 arg1, s32 arg2) {
    void *temp_a0;

    if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), arg2) & 0xFFFF) >= 0x10) {
        return 0;
    }
    temp_a0 = M2C_FIELD(arg0, void **, 4);
    if (M2C_FIELD(temp_a0, u16 *, 0x30) == 0x11F) {
        func_00209A00(temp_a0, 0x12F, 0);
        M2C_FIELD(arg0, s16 *, 0x34) = arg1;
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
        func_00207390(M2C_FIELD(arg0, void **, 4), 2);
        return 1;
    }
    return 0;
}
