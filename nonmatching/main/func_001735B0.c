/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00172E10(void *, void *);
s32 func_00172FE8(M2C_UNK *);                       /* extern */
M2C_UNK func_00173060(s32, M2C_UNK *);              /* extern */
extern char D_003CB520[];
extern char D_003CB550[];
extern char D_003CB578[];

s32 func_001735B0(s32 arg0, M2C_UNK arg1, s32 arg2) {
    M2C_UNK *var_a1;
    s32 temp_v0;

    if (arg0 <= 0) {
        var_a1 = ((void *)D_003CB520);
        goto block_6;
    }
    if (arg2 != 0) {
        var_a1 = ((void *)D_003CB550);
        goto block_6;
    }
    temp_v0 = func_00172FE8(((void *)D_003CB550));
    var_a1 = ((void *)D_003CB578);
    if (temp_v0 == 0) {
block_6:
        func_00172E10(NULL, var_a1);
        return 0;
    }
    func_00173060(temp_v0, ((void *)D_003CB578));
    return temp_v0;
}
