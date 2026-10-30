/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00165358(s32);                         /* extern */
extern M2C_UNK (*D_005C1450)();

void func_0016EA40(s32 arg0) {
    s32 temp_v0_2;
    s32 var_s0;
    void *temp_v0;

    var_s0 = 0;
    D_005C1450();
    do {
        temp_v0 = arg0 + (var_s0 * 4);
        var_s0 += 1;
        temp_v0_2 = M2C_FIELD(temp_v0, s32 *, 0x99C);
        if (temp_v0_2 != 0) {
            func_00165358(temp_v0_2);
        }
    } while (var_s0 < 0x28);
}
