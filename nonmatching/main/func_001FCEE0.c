/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK FlushCache(M2C_UNK);                     /* extern */
M2C_UNK func_001C48E8(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_001FCE50(s32, s32, M2C_UNK, M2C_UNK);  /* extern */

void func_001FCEE0(void *arg0, s32 arg1) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x14);
    FlushCache(0);
    FlushCache(2);
    if (temp_s0 != 0) {
        func_001C48E8(arg0 + arg1, 0, temp_s0);
    }
    func_001FCE50(M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0x1C), 0, 0);
}
