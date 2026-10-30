/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00338A60(void *, void *);
void *func_00338AD0(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_003E17B0[];
extern M2C_UNK func_00329940;

s32 func_00329B00(void *arg0) {
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 0x3C);
    if (M2C_FIELD(temp_a0, u8 *, 8) != 0) {
        if (M2C_FIELD(temp_a0, u8 *, 0x79) == 0x10) {
            if (M2C_FIELD(temp_a0, u8 *, 0x78) != 0xFF) {
                if (M2C_FIELD(temp_a0, s32 *, 0x74) != 3) {
                    func_00338A60(func_00338AD0(0x80000012, &func_00329940, 7, ((void *)D_003E17B0)), arg0);
                    return 1;
                }
                return 0;
            }
            return 0;
        }
        return 0;
    }
    return 0;
}
