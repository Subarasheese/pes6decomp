/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_0099C7C0(void *);                      /* extern */
extern void *D_003EAD2C;

s32 func_009DB1D0(void) {
    if (D_003EAD2C != NULL) {
        func_001D7F10(M2C_FIELD(D_003EAD2C, void **, 0));
        func_002DF960(M2C_FIELD(D_003EAD2C, s32 *, 4));
        func_0099C7C0(D_003EAD2C);
        D_003EAD2C = NULL;
        return 1;
    }
    return 0;
}
