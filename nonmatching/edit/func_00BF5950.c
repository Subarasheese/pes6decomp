/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
extern char D_00CE8E20[];

void func_00BF5950(s32 arg0) {
    void *temp_s0;

    temp_s0 = ((void *)D_00CE8E20) + (arg0 * 0x146C);
    func_001C48E8(temp_s0, 0, 0x146C);
    M2C_FIELD(temp_s0, s16 *, 0x1464) = 0xFFFF;
}
