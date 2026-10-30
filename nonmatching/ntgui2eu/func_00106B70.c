/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00106B28(void);
M2C_UNK func_00106C28(s32, s32, s32, void *);       /* extern */
extern char D_011B1A40[];

void func_00106B70(void) {
    s32 var_v0;
    u32 temp_v0;
    void *temp_a3;

    switch (M2C_FIELD(((void *)D_011B1A40), s32 *, 0x1C)) {  /* irregular */
    case 1:
        temp_a3 = M2C_FIELD(((void *)D_011B1A40), void **, 0x18) + (M2C_FIELD(((void *)D_011B1A40), u32 *, 0x24) * 0xC);
        func_00106C28(M2C_FIELD(temp_a3, s32 *, 8), M2C_FIELD(temp_a3, s32 *, 0xC), M2C_FIELD(temp_a3, s32 *, 0x10), temp_a3);
        var_v0 = M2C_FIELD(((void *)D_011B1A40), s32 *, 0x1C) + 1;
block_8:
        M2C_FIELD(((void *)D_011B1A40), s32 *, 0x1C) = var_v0;
        return;
    case 2:
        if (func_00106B28() == 0) {
            temp_v0 = M2C_FIELD(((void *)D_011B1A40), u32 *, 0x24) + 1;
            M2C_FIELD(((void *)D_011B1A40), u32 *, 0x24) = temp_v0;
            var_v0 = temp_v0 < (u32) M2C_FIELD(M2C_FIELD(((void *)D_011B1A40), void **, 0x18), u32 *, 4);
            goto block_8;
        }
        break;
    }
}
