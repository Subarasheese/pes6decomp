/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00921D38[];

void func_008FEFA0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 sp8;
    f32 spC;
    f32 *var_a4;
    s32 var_v1;
    void *temp_a2;
    void *temp_v1;

    var_a4 = &sp8;
    var_v1 = 8;
    if (var_a4 != NULL) {
        do {
            *var_a4 = 0;
            var_v1 -= 1;
            var_a4 += 1;
        } while (var_v1 != 0);
    }
    if (M2C_FIELD(((void *)D_00921D38), s32 *, 4) != 0) {
        temp_a2 = M2C_FIELD(((void *)D_00921D38), s32 *, 0) + ((arg2 & 0xFF) * 0x10) + (arg1 * 8);
        if (arg3 < M2C_FIELD(temp_a2, s32 *, 0)) {
            temp_v1 = M2C_FIELD(temp_a2, s32 *, 4) + (arg3 * 0x10);
            sp8 = M2C_FIELD(temp_v1, f32 *, 0);
            spC = M2C_FIELD(temp_v1, f32 *, 4);
        }
    }
    M2C_FIELD(arg0, f32 *, 0) = sp8;
    M2C_FIELD(arg0, f32 *, 4) = spC;
}
