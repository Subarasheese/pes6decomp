/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
M2C_UNK func_002DF8E0(s32, s8);                     /* extern */
extern void *D_003EAD2C;

s32 func_009DB080(s8 arg0) {
    if (D_003EAD2C == NULL) {
        return 0;
    }
    func_002DF8E0(M2C_FIELD(D_003EAD2C, s32 *, 4), arg0);
    func_001D7D60(M2C_FIELD(D_003EAD2C, void **, 0), arg0);
    return 1;
}
