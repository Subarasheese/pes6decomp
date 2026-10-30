/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00299FB0(void *, s16, s32);
extern void func_001A58E0(void *, signed char);
void *func_00299FE0(s32);                           /* extern */

void func_009178F0(void) {
    s32 var_s0;
    void *temp_v0;

    var_s0 = 0;
    do {
        temp_v0 = func_00299FE0(var_s0);
        if (M2C_FIELD(temp_v0, u8 *, 4) != 0) {
            func_00299FB0(temp_v0, 0x1BF, 0);
            func_001A58E0(M2C_FIELD(temp_v0, void **, 0), 0);
        }
        var_s0 += 1;
    } while (var_s0 < 4);
}
