/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008D08D0(s32);                         /* extern */
M2C_UNK func_008D1EF0(s32, M2C_UNK);                /* extern */

void func_008CD0C0(void *arg0) {
    func_008D08D0(arg0 + 0x480);
    M2C_FIELD(arg0, s8 *, 0x15) = 0;
    func_008D1EF0(arg0 + 0x480, 1);
}
