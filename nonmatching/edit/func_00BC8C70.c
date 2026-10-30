/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00BCC510(s32);                         /* extern */
extern char D_00CE4F40[];

void func_00BC8C70(s32 arg0) {
    void *temp_s0;

    temp_s0 = ((void *)D_00CE4F40) + (arg0 * 0xC0);
    func_00BCC510(M2C_FIELD(temp_s0, s32 *, 4));
    func_001C48E8(temp_s0 + 0x14, 0, 0x14);
}
