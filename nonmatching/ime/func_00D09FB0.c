/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00D09EE0(void *);
extern char D_00D20980[];

s32 func_00D09FB0(void) {
    s32 temp_a1;
    s32 var_a0;
    s32 var_s1;
    s32 var_s1_2;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    var_s1 = 0;
    do {
        if ((((void *)D_00D20980) != NULL) && (var_s1 >= 0) && (var_s1 < 0x1D)) {
            temp_v0 = ((void *)D_00D20980) + (var_s1 * 0x5C);
            temp_a1 = M2C_FIELD(temp_v0, s32 *, 0x8C);
            if (temp_a1 >= 0) {
                temp_v1 = temp_v0 + 0x8C;
                M2C_FIELD((((void *)D_00D20980) + (M2C_FIELD(((void *)D_00D20980), s32 *, 0x88) * 4)), s32 *, 0x10) = temp_a1;
                M2C_FIELD(((void *)D_00D20980), s32 *, 4) = (s32) (M2C_FIELD(((void *)D_00D20980), s32 *, 4) - 1);
                M2C_FIELD(((void *)D_00D20980), s32 *, 0x88) = (s32) ((s32) (M2C_FIELD(((void *)D_00D20980), s32 *, 0x88) + 1) % 29);
                if (temp_v1 != NULL) {
                    M2C_FIELD(temp_v0, s32 *, 0x8C) = -1;
                    func_00D09EE0(temp_v1 + 4);
                }
            }
        }
        var_s1 += 1;
    } while (var_s1 < 0x1D);
    M2C_FIELD(((void *)D_00D20980), s32 *, 0) = 0;
    var_s1_2 = 0;
    do {
        temp_v1_2 = ((void *)D_00D20980) + (var_s1_2 * 0x5C);
        if ((temp_v1_2 + 0x8C) != NULL) {
            M2C_FIELD(temp_v1_2, s32 *, 0x8C) = -1;
            func_00D09EE0(temp_v1_2 + 0x90);
        }
        var_s1_2 += 1;
    } while (var_s1_2 < 0x1D);
    var_a0 = 0;
    do {
        M2C_FIELD((((void *)D_00D20980) + (var_a0 * 4)), s32 *, 0x10) = var_a0;
        var_a0 += 1;
    } while (var_a0 < 0x1D);
    M2C_FIELD(((void *)D_00D20980), s32 *, 0x84) = 0;
    M2C_FIELD(((void *)D_00D20980), s32 *, 0) = 1;
    M2C_FIELD(((void *)D_00D20980), s32 *, 8) = 0;
    M2C_FIELD(((void *)D_00D20980), s32 *, 0x88) = 0;
    M2C_FIELD(((void *)D_00D20980), s32 *, 4) = 0;
    return 0;
}
