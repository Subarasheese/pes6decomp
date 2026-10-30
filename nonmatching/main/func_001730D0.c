/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00172E10(void *, void *);
s32 func_00172FE8(M2C_UNK *);                       /* extern */
M2C_UNK func_00173060(s32);                         /* extern */
M2C_UNK func_001C7F58(s32, void *);                 /* extern */
extern char D_003CB3B0[];
extern char D_003CB3D8[];
extern char D_003CB400[];

s32 func_001730D0(void *arg0, M2C_UNK arg1, s32 arg2) {
    M2C_UNK *var_a1;
    s32 temp_v0;
    void *temp_s1;
    void *var_a0;

    var_a0 = arg0;
    temp_s1 = var_a0;
    if (temp_s1 == NULL) {
        var_a1 = ((void *)D_003CB3B0);
        goto block_7;
    }
    if (arg2 != 0) {
        var_a0 = NULL;
        var_a1 = ((void *)D_003CB3D8);
        goto block_7;
    }
    temp_v0 = func_00172FE8(((void *)D_003CB3D8));
    var_a1 = ((void *)D_003CB400);
    var_a0 = NULL;
    if (temp_v0 == 0) {
block_7:
        func_00172E10(var_a0, var_a1);
        return 0;
    }
    func_001C7F58(temp_v0 + 0x1C, temp_s1);
    func_00173060(temp_v0);
    return temp_v0;
}
