/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001E62C0(void);
M2C_UNK func_001F0FB0(void *, s32);                 /* extern */
M2C_UNK func_001F3BB0(void *);                      /* extern */

s32 func_001F0ED0(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_s1;
    void *var_s2;

    var_s1 = M2C_FIELD(arg0, s32 *, 0x20);
    if (M2C_FIELD(arg0, u8 *, 2) == 0) {
        return 0;
    }
    if (((func_001E62C0() & 2) == 2) && (M2C_FIELD(arg0, u8 *, 1) & 1)) {
        func_001F0FB0(arg0, arg1);
    }
    var_s2 = M2C_FIELD(arg0, void **, 0x2C);
    if (var_s2 != NULL) {
        do {
            M2C_FIELD(var_s2, u8 *, 1) = (u8) (M2C_FIELD(var_s2, u8 *, 1) | M2C_FIELD(arg0, u8 *, 1));
            temp_v0 = M2C_FIELD(var_s2, s32 (**)(void *, void *), 0x3C)(var_s2, arg0 + 0x60);
            var_s2 = M2C_FIELD(var_s2, void **, 0x38);
            var_s1 += temp_v0;
        } while (var_s2 != NULL);
    }
    M2C_FIELD(arg0, s32 *, 0x24) = var_s1;
    M2C_FIELD(arg0, u8 *, 1) = 0U;
    func_001F3BB0(arg0);
    return var_s1;
}
