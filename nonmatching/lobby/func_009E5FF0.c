/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
extern void func_002E4570(void *);
M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_0099C7C0(void *);                      /* extern */
extern void *D_00A7DF18;

s32 func_009E5FF0(void) {
    if (D_00A7DF18 != NULL) {
        func_001D7F10(M2C_FIELD(D_00A7DF18, void **, 0));
        func_001D7F10(M2C_FIELD(D_00A7DF18, void **, 4));
        func_001D7F10(M2C_FIELD(D_00A7DF18, void **, 8));
        func_001D7F10(M2C_FIELD(D_00A7DF18, void **, 0x14));
        func_001D7F10(M2C_FIELD(D_00A7DF18, void **, 0x18));
        func_002E4570(M2C_FIELD(D_00A7DF18, void **, 0xC));
        func_002DF960(M2C_FIELD(D_00A7DF18, s32 *, 0x10));
        func_0099C7C0(D_00A7DF18);
        D_00A7DF18 = NULL;
        return 1;
    }
    return 0;
}
