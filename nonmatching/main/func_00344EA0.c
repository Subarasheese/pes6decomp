/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_0030DBA0(void);
extern s32 func_0030F050(void);
extern s32 func_00338A60(void *, void *);
void *func_00338AD0(M2C_UNK, M2C_UNK *, s32, M2C_UNK *); /* extern */
M2C_UNK func_00345260(void *);                      /* extern */
s32 func_00BD9830();                                /* extern */
s32 func_00BD99D0();                                /* extern */
extern char D_003E61B0[];
extern u8 D_003E9F90;
extern M2C_UNK func_00344FD0;
extern M2C_UNK func_00345010;

s32 func_00344EA0(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v1;

    if (arg1 != 0) {
        return 0;
    }
    if (func_0030DBA0() == 0) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x30);
        temp_v1 = temp_v0 & 0x100;
        if (temp_v1 != 0) {
            if (!(temp_v0 & 0x200) && (temp_v1 != 0)) {
                if (func_00BD9830() == 0) {
                    return 0;
                }
                M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x200);
                if (func_0030F050() == 0) {
                    if (D_003E9F90 == 0) {
                        func_00338A60(func_00338AD0(0x80000056, &func_00345010, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E61B0)), arg0);
                    } else {
                        func_00338A60(func_00338AD0(0x80000057, &func_00344FD0, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E61B0)), arg0);
                    }
                }
                return 0;
            }
            goto block_23;
        }
        if (func_00BD99D0() != 0) {
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x100);
            func_00345260(arg0);
        }
block_23:
        return 1;
    }
    return 0;
}
