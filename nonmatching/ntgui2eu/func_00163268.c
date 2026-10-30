/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00135018(s32);                         /* extern */
M2C_UNK func_0016A158(s32, M2C_UNK);                /* extern */

void func_00163268(void *arg0) {
    func_0016A158(arg0 + 0x93C, 1);
    func_00135018(M2C_FIELD(arg0, s32 *, 0x91C));
    func_00135018(M2C_FIELD(arg0, s32 *, 0x910));
}
