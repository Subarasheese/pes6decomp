/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00338530(s32);
extern s32 func_00338720(void *, s32);
extern s32 func_00338A20(void *, s32, s32);
void *func_00338AD0(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_003E6408[];
extern M2C_UNK func_00351450;

s32 func_00351CF0(s32 arg0) {
    void *temp_v0;

    if (func_00338530(0x23) == 0) {
        temp_v0 = func_00338AD0(0x23, &func_00351450, 4, ((void *)D_003E6408));
        func_00338A20(temp_v0, arg0, 0);
        func_00338720(temp_v0, 2);
    }
    return 1;
}
