/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00338A20(void *, s32, s32);
extern s32 func_00338720(void *, s32);
extern s32 func_003389F0(void *, s32, s32);
void *func_00338AD0(M2C_UNK, M2C_UNK *, s32, M2C_UNK *); /* extern */
extern char D_003E1510[];
extern M2C_UNK func_0031BB70;

s32 func_0031BBE0(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_v0;

    temp_v0 = func_00338AD0(0x17, &func_0031BB70, arg0, ((void *)D_003E1510));
    func_00338A20(temp_v0, arg1, 0);
    func_00338720(temp_v0, 2);
    func_003389F0(temp_v0, 0, arg2);
    return 1;
}
