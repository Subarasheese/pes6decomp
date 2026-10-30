/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00338A60(void *, void *);
extern s32 func_00332FA0(void);
void *func_00338AD0(M2C_UNK, M2C_UNK *, s32, M2C_UNK *); /* extern */
extern char D_003E61B0[];
extern M2C_UNK func_00345A00;
extern M2C_UNK func_00345F80;

s32 func_003461A0(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0;

    if (func_00332FA0() == 0) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x2C);
        switch (temp_v1) {                          /* irregular */
        case 1:
            temp_v0 = M2C_FIELD(arg0, s32 *, 0x30) + 1;
            M2C_FIELD(arg0, s32 *, 0x30) = temp_v0;
            if (temp_v0 >= 0x1E) {
                func_00338A60(func_00338AD0(0x8000005C, &func_00345A00, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E61B0)), arg0);
                var_v0 = M2C_FIELD(arg0, s32 *, 0x2C) + 1;
block_14:
                M2C_FIELD(arg0, s32 *, 0x2C) = var_v0;
            }
            break;
        case 0:
            func_00338A60(func_00338AD0(0x8000005B, &func_00345F80, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E61B0)), arg0);
            var_v0 = M2C_FIELD(arg0, s32 *, 0x2C) + 1;
            goto block_14;
        }
        return 1;
    }
    return 0;
}
