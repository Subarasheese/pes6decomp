/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B9C60(void *);
extern void func_001D7F10(void *);
M2C_UNK func_002DC1D0(s32);                         /* extern */
M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_0099C7C0(void *);                      /* extern */
M2C_UNK func_009DC190(void *);                      /* extern */
extern void *D_00A7DEB8;

s32 func_009DD5F0(void) {
    s32 var_s0;

    if (D_00A7DEB8 != NULL) {
        func_001D7F10(M2C_FIELD(D_00A7DEB8, void **, 0x5D8));
        func_001B9C60(M2C_FIELD(D_00A7DEB8, void **, 4));
        func_002DC1D0(M2C_FIELD(D_00A7DEB8, s32 *, 8));
        func_002DF960(M2C_FIELD(D_00A7DEB8, s32 *, 0xC));
        var_s0 = 0;
        do {
            func_009DC190(D_00A7DEB8 + (var_s0 * 0x128) + 0x10);
            var_s0 += 1;
        } while (var_s0 < 5);
        func_0099C7C0(D_00A7DEB8);
        D_00A7DEB8 = NULL;
        return 1;
    }
    return 0;
}
