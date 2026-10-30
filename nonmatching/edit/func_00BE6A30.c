/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B92940(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK func_00BE69E0;

void func_00BE6A30(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = func_00B92940(0xED0018, 0x10);
    M2C_FIELD(arg0, M2C_UNK **, 4) = &func_00BE69E0;
}
