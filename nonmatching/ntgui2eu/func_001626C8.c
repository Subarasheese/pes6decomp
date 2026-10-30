/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00135018(void);
void func_001626C8(void *arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x878) > 0) {
loop_2:
        temp_v0 = var_s0 * 4;
        var_s0 += 1;
        func_00135018();
        if (var_s0 < M2C_FIELD(arg0, s32 *, 0x878)) {
            goto loop_2;
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x870) != 0) {
        func_00135018();
    }
    func_00135018();
}
