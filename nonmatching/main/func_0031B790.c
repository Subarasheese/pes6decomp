/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00338A20(void *, s32, s32);
void *func_00338AD0(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_003E1510[];
extern M2C_UNK func_0031B5D0;

s32 func_0031B790(void *arg0) {
    s32 temp_v1;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x3C);
    if (M2C_FIELD(temp_s0, u8 *, 8) != 0) {
        if (M2C_FIELD(temp_s0, u8 *, 0x78) != M2C_FIELD(temp_s0, u8 *, 0xB8)) {
            temp_v1 = M2C_FIELD(temp_s0, s32 *, 0x74);
            if ((temp_v1 != 5) && (temp_v1 != 4)) {
                return 0;
            }
            func_00338A20(func_00338AD0(0x80000002, &func_0031B5D0, 7, ((void *)D_003E1510)), (s32) temp_s0, 0);
            return 1;
        }
        return 0;
    }
    return 0;
}
