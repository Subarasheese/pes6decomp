/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001EF370(s32, s32 *);                  /* extern */

void func_002E3280(void *arg0, f32 fparg0, f32 fparg1) {
    s32 sp50;
    s32 sp54;
    f32 sp58;
    f32 sp5C;
    s32 var_s0;
    s32 var_s1;

    if (arg0 != NULL) {
        sp50 = 0;
        sp58 = fparg0;
        sp54 = 0;
        sp5C = fparg1;
        var_s1 = 0;
        if (M2C_FIELD(arg0, s32 *, 0x20) > 0) {
            var_s0 = 0;
            do {
                func_001EF370(M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x24) + var_s0), s32 *, 4), &sp50);
                func_001EF370(M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x24) + var_s0), s32 *, 8), &sp50);
                var_s1 += 1;
                var_s0 += 0x14;
            } while (var_s1 < M2C_FIELD(arg0, s32 *, 0x20));
        }
        M2C_FIELD(arg0, f32 *, 0x14) = fparg0;
        M2C_FIELD(arg0, f32 *, 0x18) = fparg1;
    }
}
