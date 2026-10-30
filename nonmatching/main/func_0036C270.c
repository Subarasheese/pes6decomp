/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0023A380(void);
extern s32 func_00332FA0(void);
extern int func_0024ED00(void);
extern void func_00333320(s32);
extern s32 func_003388B0(s32);
extern void func_00338930(int);
extern s32 func_00338A60(void *, void *);
void *func_00338AD0(M2C_UNK, M2C_UNK *, s32, M2C_UNK *); /* extern */
M2C_UNK func_0036BE60(void *);                      /* extern */
s8 func_00BC8CD0();                                 /* extern */
extern char D_003E70F0[];
extern s8 D_003EA044;
extern M2C_UNK func_0036B030;
extern M2C_UNK func_0036BDE0;
extern M2C_UNK func_0036C170;

s32 func_0036C270(void *arg0) {
    u8 temp_v1;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x3C);
    if (((func_0024ED00() & 0xFF) == 3) || (func_0023A380() != 0)) {
        func_00333320(1);
        func_003388B0(3);
        func_00338930((s32) arg0);
        goto block_22;
    }
    M2C_FIELD(temp_s0, s8 *, 1) = func_00BC8CD0();
    if (func_00332FA0() == 0) {
        temp_v1 = M2C_FIELD(temp_s0, u8 *, 3);
        switch (temp_v1) {                          /* irregular */
        case 2:
            func_00338A60(func_00338AD0(0x80000054, &func_0036B030, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E70F0)), arg0);
            M2C_FIELD(temp_s0, u8 *, 2) = (u8) (M2C_FIELD(temp_s0, u8 *, 2) + 1);
            M2C_FIELD(temp_s0, u8 *, 3) = 0U;
            break;
        case 1:
            func_00338A60(func_00338AD0(0x80000068, &func_0036C170, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E70F0)), arg0);
            M2C_FIELD(temp_s0, u8 *, 3) = (u8) (M2C_FIELD(temp_s0, u8 *, 3) + 1);
            break;
        case 0:
            func_0036BE60(temp_s0);
            func_00338A60(func_00338AD0(0x80000053, &func_0036BDE0, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E70F0)), arg0);
            M2C_FIELD(temp_s0, u8 *, 3) = (u8) (M2C_FIELD(temp_s0, u8 *, 3) + 1);
            break;
        }
        if ((s32) M2C_FIELD(temp_s0, u8 *, 2) >= 2) {
            func_003388B0(3);
            D_003EA044 = 1;
            func_00338930((s32) arg0);
        }
block_22:
        return 1;
    }
    return 0;
}
