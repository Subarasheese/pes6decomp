/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00163DD8(s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_00165580(s32, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern char D_005C1E54[];
extern M2C_UNK func_00170760;
extern M2C_UNK func_001707E0;

s32 func_00170008(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    temp_v0 = func_00163DD8((*(s32 *)D_005C1E54), arg0, arg1, arg2, arg3, arg2, arg0);
    func_00165580(temp_v0, 6, &func_00170760, 0);
    func_00165580(temp_v0, 7, &func_001707E0, 0);
    return temp_v0;
}
