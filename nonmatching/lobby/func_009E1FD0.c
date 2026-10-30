/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_0099A2F0(s32);                         /* extern */
M2C_UNK func_0099C7C0(void *);                      /* extern */
M2C_UNK func_0099D530(s32);                         /* extern */
extern void *D_00A7DEF8;

s32 func_009E1FD0(void) {
    s32 var_s0;

    if (D_00A7DEF8 != NULL) {
        func_001D7F10(M2C_FIELD(D_00A7DEF8, void **, 0));
        func_001D7F10(M2C_FIELD(D_00A7DEF8, void **, 4));
        func_001D7F10(M2C_FIELD(D_00A7DEF8, void **, 8));
        func_001D7F10(M2C_FIELD(D_00A7DEF8, void **, 0xC));
        func_001D7F10(M2C_FIELD(D_00A7DEF8, void **, 0x10));
        func_0099D530(M2C_FIELD(D_00A7DEF8, s32 *, 0x1C));
        var_s0 = 0;
        do {
            func_0099A2F0(M2C_FIELD((D_00A7DEF8 + (var_s0 * 4)), s32 *, 0x20));
            var_s0 += 1;
        } while (var_s0 < 5);
        func_002DF960(M2C_FIELD(D_00A7DEF8, s32 *, 0x14));
        func_0099C7C0(D_00A7DEF8);
        D_00A7DEF8 = NULL;
        return 1;
    }
    return 0;
}
