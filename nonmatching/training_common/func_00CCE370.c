/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001A5BE0(M2C_UNK32);                   /* extern */
s32 func_001A5C30(M2C_UNK32);                       /* extern */
s32 func_001A5C50(M2C_UNK32);                       /* extern */
extern char D_00CF9480[];
extern char D_00CF9484[];

s32 func_00CCE370(void *arg0) {
    M2C_UNK32 sp58;
    f32 sp5C;
    M2C_UNK32 *var_s0;
    s32 var_s1;
    u32 var_s2;

    if (M2C_FIELD(arg0, s32 *, 0x30) != 0) {
        var_s0 = &sp58;
        var_s1 = 1;
        var_s2 = 0;
        sp58 = (*(M2C_UNK32 *)D_00CF9480);
        sp5C = (*(f32 *)D_00CF9484);
        do {
            if (func_001A5C50(*var_s0) != 0) {
                func_001A5BE0(*var_s0);
            } else if (M2C_FIELD(arg0, s32 *, 0x34) != 0) {
                var_s1 = 0;
            } else if (func_001A5C30(*var_s0) == 0) {
                var_s1 = 0;
                M2C_FIELD(arg0, s32 *, 0x34) = 1;
            }
            var_s2 += 1;
            var_s0 += 4;
        } while (var_s2 < 2U);
        if (var_s1 != 0) {
            M2C_FIELD(arg0, s32 *, 0x30) = 0;
            M2C_FIELD(arg0, s32 *, 0x34) = 0;
        }
    } else {
        var_s1 = 1;
    }
    return var_s1;
}
