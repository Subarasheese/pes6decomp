/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00C121E0(s32, s32, u8);                /* extern */
M2C_UNK func_00C122B0(s32, s32, u8);                /* extern */
s32 func_00C18710();                                /* extern */

void func_002BCE50(s32 arg0, void *arg1) {
    s32 temp_a0;
    s32 var_s1;
    u8 temp_s4;
    void *temp_s5;

    if (arg1 != NULL) {
        temp_a0 = func_00C18710() & 0xFF;
        var_s1 = 0;
        if (M2C_FIELD(arg1, s32 *, 0x18) > 0) {
            do {
                temp_s5 = arg1 + var_s1;
                temp_s4 = M2C_FIELD(temp_s5, u8 *, 0xB);
                func_00C122B0(temp_a0 & 0xFF, arg0 & 0xFF, temp_s4);
                func_00C121E0(arg0 & 0xFF, M2C_FIELD(temp_s5, u8 *, 0) & 0x1F, temp_s4);
                var_s1 += 1;
            } while (var_s1 < M2C_FIELD(arg1, s32 *, 0x18));
        }
    }
}
