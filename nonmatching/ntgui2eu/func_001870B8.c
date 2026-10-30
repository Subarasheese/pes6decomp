/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00165778(s32, s32, s32);               /* extern */

void func_001870B8(void *arg0) {
    f32 temp_f1;
    f32 var_f0;

    func_00165778(M2C_FIELD(arg0, s32 *, 0x914), M2C_FIELD(arg0, s32 *, 0x5AC), M2C_FIELD(arg0, s32 *, 0x5B0));
    temp_f1 = (f32) M2C_FIELD(arg0, s32 *, 0x97C);
    var_f0 = (f32) M2C_FIELD(arg0, s32 *, 0x978);
    if (temp_f1 < var_f0) {
        var_f0 = temp_f1;
    }
    func_00165778(M2C_FIELD(arg0, s32 *, 0x910), (s32) ((f32) M2C_FIELD(arg0, s32 *, 0x5AC) * (var_f0 / temp_f1)), M2C_FIELD(arg0, s32 *, 0x5B0));
}
