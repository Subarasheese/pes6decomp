/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001586E0();                            /* extern */
extern M2C_UNK func_001555A0;

s32 func_00155568(void *arg0) {
    func_001586E0();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &func_001555A0;
    return 0;
}
