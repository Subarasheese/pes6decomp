/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
M2C_UNK func_0099C7C0(void *);                      /* extern */
extern void *D_00A7DF10;

s32 func_009E5210(void) {
    if (D_00A7DF10 != NULL) {
        func_001D7F10(M2C_FIELD(D_00A7DF10, void **, 0));
        func_001D7F10(M2C_FIELD(D_00A7DF10, void **, 8));
        func_001D7F10(M2C_FIELD(D_00A7DF10, void **, 4));
        func_0099C7C0(D_00A7DF10);
        D_00A7DF10 = NULL;
        return 1;
    }
    return 0;
}
