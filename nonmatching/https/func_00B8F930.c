/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00105380(s32);                         /* extern */
M2C_UNK WaitSema(s32);                         /* extern */
M2C_UNK func_001053B0(s32);                         /* extern */
M2C_UNK func_00B8F880(M2C_UNK, M2C_UNK);            /* extern */
extern char D_00C2B530[];

void func_00B8F930(void) {
    func_00B8F880(0, 1);
    func_001053B0(M2C_FIELD(((void *)D_00C2B530), s32 *, 0x106C4));
    WaitSema(M2C_FIELD(((void *)D_00C2B530), s32 *, 0x106C8));
    M2C_FIELD(((void *)D_00C2B530), s32 *, 0x106F4) = 0;
    func_00105380(M2C_FIELD(((void *)D_00C2B530), s32 *, 0x106C8));
}
