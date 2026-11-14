/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00C22A60(u8 *, u32);              /* extern */
extern char D_00C9F230[];

void func_00C22DF0(s32 arg0) {
    u8 *var_a1;
    u32 var_a2;
    u8 temp_v1;

    var_a2 = 0;
    var_a1 = ((u8 *)D_00C9F230);
    do {
        temp_v1 = *(u8 *)(arg0 + var_a2);
        var_a2 += 1;
        M2C_FIELD(var_a1, s32 *, 4) = (s32) temp_v1;
        var_a1 += 4;
    } while (var_a2 < 2U);
    func_00C22A60(var_a1, var_a2);
}
