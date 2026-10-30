/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
M2C_UNK func_0099A2F0(s32);                         /* extern */
M2C_UNK func_0099C7C0(void *);                      /* extern */
extern void *D_00A7DE08;

s32 func_009D45B0(void) {
    if (D_00A7DE08 != NULL) {
        func_0099A2F0(M2C_FIELD(D_00A7DE08, s32 *, 0x34));
        func_0099A2F0(M2C_FIELD(D_00A7DE08, s32 *, 0x38));
        func_001D7F10(M2C_FIELD(D_00A7DE08, void **, 0x20));
        func_001D7F10(M2C_FIELD(D_00A7DE08, void **, 0x24));
        func_001D7F10(M2C_FIELD(D_00A7DE08, void **, 0x28));
        func_001D7F10(M2C_FIELD(D_00A7DE08, void **, 0x2C));
        func_001D7F10(M2C_FIELD(D_00A7DE08, void **, 0x30));
        func_0099C7C0(D_00A7DE08);
        D_00A7DE08 = NULL;
        return 1;
    }
    return 0;
}
