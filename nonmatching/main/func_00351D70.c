/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00338A20(void *, s32, s32);
extern s32 func_00338720(void *, s32);
extern s32 func_003389F0(void *, s32, s32);
void *func_00338AD0(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_003E6408[];
extern M2C_UNK func_00351640;

s32 func_00351D70(void *arg0) {
    void *temp_v0;

    if (M2C_FIELD(arg0, u8 *, 0xB) != 0) {
        return 0;
    }
    temp_v0 = func_00338AD0(0x22, &func_00351640, 4, ((void *)D_003E6408));
    func_00338A20(temp_v0, (s32) arg0, 0);
    func_003389F0(temp_v0, 0, (s32) M2C_FIELD(arg0, u8 *, 0x78));
    M2C_FIELD(arg0, u8 *, 0xB) = 1U;
    func_00338720(temp_v0, 2);
    return 1;
}
