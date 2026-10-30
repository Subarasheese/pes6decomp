/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009DA300(s32);                         /* extern */
M2C_UNK func_00C552F0(void *, s32, u8);             /* extern */

void func_00C56570(void *arg0, s32 arg1) {
    func_009DA300(arg0 + 0x4F);
    func_00C552F0(arg0, arg1, M2C_FIELD(arg0, u8 *, 0x4F));
}
