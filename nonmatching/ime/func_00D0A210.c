/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00D09EE0(void *);                      /* extern */
extern char D_00D20980[];

s32 func_00D0A210(void) {
    s32 var_a0;
    s32 var_s1;
    void *temp_v1;

    var_s1 = 0;
    M2C_FIELD(((void *)D_00D20980), s32 *, 0) = 0;
    do {
        temp_v1 = ((void *)D_00D20980) + (var_s1 * 0x5C);
        if ((temp_v1 + 0x8C) != NULL) {
            M2C_FIELD(temp_v1, s32 *, 0x8C) = -1;
            func_00D09EE0(temp_v1 + 0x90);
        }
        var_s1 += 1;
    } while (var_s1 < 0x1D);
    M2C_FIELD(((void *)D_00D20980), s32 *, 0xC) = 1;
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
