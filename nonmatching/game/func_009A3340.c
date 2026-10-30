/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EA710;
extern char D_00591DD6[];

void func_009A3340(void) {
    s32 var_a2;
    u32 var_a3;

    if (((*(u8 *)D_00591DD6) != 0) && (M2C_FIELD(D_003EA710, s32 *, 0x24) == 0)) {
        var_a3 = 0;
        if (M2C_FIELD(D_003EA710, u32 *, 0xC) != 0) {
            var_a2 = 0;
            do {
                var_a3 += 1;
                M2C_FIELD((M2C_FIELD(D_003EA710, s32 *, 8) + var_a2), s32 *, 4) = 0;
                var_a2 += 0x10DA0;
            } while (var_a3 < (u32) M2C_FIELD(D_003EA710, u32 *, 0xC));
        }
    }
}
