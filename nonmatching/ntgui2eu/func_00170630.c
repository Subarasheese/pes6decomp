/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001652A0(s32);                         /* extern */

void func_00170630(void *arg0) {
    func_001652A0(M2C_FIELD(arg0, s32 *, 0x890));
    func_001652A0(M2C_FIELD(arg0, s32 *, 0x894));
}
