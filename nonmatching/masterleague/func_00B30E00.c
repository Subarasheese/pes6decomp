/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B31770(void);
extern void func_001D7D80(void *, s16);
extern char D_00B7FC70[];

void func_00B30E00(void) {
    s32 *var_s1;
    s32 var_s3;
    u32 temp_v0;
    u32 var_s0;

    temp_v0 = func_00B31770();
    if (temp_v0 != 0) {
        var_s3 = 0;
        var_s1 = ((void *)D_00B7FC70);
        var_s0 = temp_v0;
        do {
            if (M2C_FIELD(temp_v0, s32 *, 0xE8) & (1 << *var_s1)) {
                func_001D7D80(M2C_FIELD(var_s0, void **, 0x6C), 1);
            } else {
                func_001D7D80(M2C_FIELD(var_s0, void **, 0x6C), 0);
            }
            var_s3 += 1;
            var_s1 += 4;
            var_s0 += 4;
        } while (var_s3 < 0x17);
    }
}
