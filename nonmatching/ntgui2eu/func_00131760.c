/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00134388(s32);                         /* extern */
extern char D_011D4DD8[];

void func_00131760(s32 arg0) {
    M2C_UNK (*temp_v0)(void *);
    s32 *temp_s1;
    s32 temp_a0;
    s32 temp_s0;
    void *var_v0;

    temp_s0 = arg0 << 5;
    temp_v0 = M2C_FIELD((((void *)D_011D4DD8) + temp_s0), M2C_UNK (**)(void *), 0x1C);
    if (temp_v0 != NULL) {
        temp_v0(temp_s0 + ((void *)D_011D4DD8));
    }
    temp_s1 = temp_s0 + (((void *)D_011D4DD8) + 4);
    temp_a0 = *temp_s1;
    var_v0 = ((void *)D_011D4DD8) + temp_s0;
    if (temp_a0 >= 0) {
        func_00134388(temp_a0);
        *temp_s1 = -1;
        var_v0 = ((void *)D_011D4DD8) + temp_s0;
    }
    M2C_FIELD(var_v0, s32 *, 0x18) = 0;
}
