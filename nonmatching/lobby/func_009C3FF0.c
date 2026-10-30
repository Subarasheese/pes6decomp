/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_0099C7C0(void *);                      /* extern */
extern void *D_00A7DD58;

s32 func_009C3FF0(void) {
    s32 var_s1;
    s32 var_s2;

    if (D_00A7DD58 != NULL) {
        func_001D7F10(M2C_FIELD(D_00A7DD58, void **, 0x38));
        func_001D7F10(M2C_FIELD(D_00A7DD58, void **, 0));
        var_s2 = 0;
        do {
            var_s1 = 0;
loop_6:
            func_001D7F10(M2C_FIELD(((var_s2 * 8) + D_00A7DD58 + (var_s1 * 4)), void **, 0x1C));
            var_s1 += 1;
            if (var_s1 < 2) {
                goto loop_6;
            }
            var_s2 += 1;
        } while (var_s2 < 3);
        func_002DF960(M2C_FIELD(D_00A7DD58, s32 *, 0x34));
        func_0099C7C0(D_00A7DD58);
        D_00A7DD58 = NULL;
        return 1;
    }
    return 0;
}
