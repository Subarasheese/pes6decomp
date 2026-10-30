/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
extern char D_00398660[];

s32 func_001C0120(void) {
    M2C_FIELD(((void *)D_00398660), s32 *, 0x30) = -1;
    func_001C48E8(((void *)D_00398660) + 0x34, 0, 0x10);
    return 1;
}
