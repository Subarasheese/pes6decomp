/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00332FA0(void);
extern int func_00333600(int);
extern void func_00338930(int);
extern s32 func_003389D0(s32, s32);
extern s32 func_00338A60(void *, void *);
extern s32 func_003389F0(void *, s32, s32);
void *func_00338AD0(M2C_UNK, M2C_UNK *, s32, M2C_UNK *); /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
s32 func_00BD9F80();                                /* extern */
s32 func_00BF6280();                                /* extern */
extern char D_003E15C8[];
extern M2C_UNK func_0031F480;
extern M2C_UNK func_0031F8B0;

s32 func_00320680(s32 arg0) {
    s32 var_v0;
    void *temp_s1;

    if (func_003389D0(arg0, 0) == 0) {
        if (func_00BD9F80() == 0) {
            if ((func_009E1C90(1) & 0xFF) != 0xC) {
                goto block_9;
            }
            if (func_00BF6280() == 5) {
                var_v0 = 1;
            } else {
block_9:
                var_v0 = 0;
            }
        } else {
            var_v0 = 1;
        }
        if ((var_v0 != 0) && (func_00332FA0() == 0)) {
            func_00338A60(func_00338AD0(0x80000021, &func_0031F8B0, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E15C8)), (void *) arg0);
            func_003389F0((void *) arg0, 0, 1);
        }
    }
    temp_s1 = M2C_FIELD(arg0, void **, 0x3C);
    if ((func_00333600(3) == 0) && (M2C_FIELD(temp_s1, u8 *, 8) != 0)) {
        func_00338A60(func_00338AD0(0x80000022, &func_0031F480, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E15C8)), (void *) arg0);
        func_00338930(arg0);
    }
    return 1;
}
