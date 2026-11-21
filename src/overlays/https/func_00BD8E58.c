/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

M2C_UNK func_00BC0748(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK);
s32 func_00BD8EE8(s32, void *);
extern char D_00C4E0C8[];

s32 func_00BD8E58(s32 arg0, void *arg1) {
    s32 var_s1;

    if ((arg1 != NULL) && (M2C_FIELD(arg1, s32 *, 0x44) != 0)) {
        func_00BC0748(9, 0xC, ((void *)D_00C4E0C8), 0x14B);
        var_s1 = func_00BD8EE8(arg0, arg1);
        func_00BC0748(0xA, 0xC, ((void *)D_00C4E0C8), 0x14D);
    } else {
        var_s1 = 0;
    }
    return var_s1;
}
