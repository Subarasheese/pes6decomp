/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008D2950(s32);                         /* extern */
M2C_UNK func_008D2AC0(s32);                         /* extern */

void func_008C97C0(s8 *arg0) {
    func_008D2AC0(arg0 + 0x35C);
    *arg0 = 0;
    func_008D2950(arg0 + 0x35C);
}
