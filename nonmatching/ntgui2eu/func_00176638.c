/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00176A30(void *);                      /* extern */
M2C_UNK func_001777A8();                            /* extern */

void func_00176638(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4D0) = 2;
    func_001777A8();
    M2C_FIELD(arg0, s32 *, 0xEA8) = 2;
    M2C_FIELD(arg0, s64 *, 0xEB0) = -1;
    func_00176A30(arg0);
}
