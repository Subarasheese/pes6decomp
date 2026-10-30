/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00D12CD0(void *);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */

s32 func_00D12C80(void *arg0) {
    if (arg0 == NULL) {
        return 2;
    }
    func_00D12CD0(arg0);
    func_001C48E8(arg0, 0, 0xE04);
    return 0;
}
