/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00921C98[];

void func_008FC390(void *arg0, s32 arg1, s32 arg2) {
    f32 sp8;
    f32 spC;
    f32 *var_a3;
    s32 temp_a2;
    s32 temp_a3;
    s32 var_v1;
    void *temp_a1;
    void *temp_v1;

    var_a3 = &sp8;
    var_v1 = 8;
    if (var_a3 != NULL) {
        do {
            *var_a3 = 0;
            var_v1 -= 1;
            var_a3 += 1;
        } while (var_v1 != 0);
    }
    temp_a3 = arg1 & 0xFFFF;
    if (temp_a3 < (s32) M2C_FIELD(((void *)D_00921C98), u16 *, 0)) {
        temp_a2 = arg2 & 0xFF;
        temp_a1 = (temp_a3 * 0xC) + M2C_FIELD(((void *)D_00921C98), s32 *, 4);
        if (temp_a2 < (s32) M2C_FIELD(temp_a1, u8 *, 7)) {
            temp_v1 = (temp_a2 << 5) + M2C_FIELD(temp_a1, s32 *, 8);
            sp8 = M2C_FIELD(temp_v1, f32 *, 8);
            spC = M2C_FIELD(temp_v1, f32 *, 0xC);
        }
    }
    M2C_FIELD(arg0, f32 *, 0) = sp8;
    M2C_FIELD(arg0, f32 *, 4) = spC;
}
