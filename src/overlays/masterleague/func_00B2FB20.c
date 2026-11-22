/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001BC2B0(void);
extern s32 func_001BC360(s32);
extern u32 func_00B2FBB0(void);

void func_00B2FB20(void) {
    s32 var_s1;
    u32 var_s0;

    var_s0 = func_00B2FBB0();
    if (var_s0 != 0) {
        var_s1 = 0;
        do {
            func_001BC360(M2C_FIELD(var_s0, s32 *, 0x18));
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 2);
        func_001BC2B0();
    }
}
