/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_003332D0(s32);
extern int func_0023A380(void);
extern s32 func_00338530(s32);
extern s32 func_00338720(void *, s32);
extern void func_00338930(int);
extern s32 func_00338990(s32, s32);
extern s32 func_00338940(s32);
extern s32 func_00338A60(void *, void *);
s32 func_0023A0C0();                                /* extern */
void *func_00338AD0(s32, M2C_UNK *, s32, M2C_UNK *); /* extern */
extern char D_003BD4B0[];
extern char D_003E7290[];
extern s8 D_003E9F50;
extern M2C_UNK func_00370CC0;

s32 func_00370D10(void *arg0) {
    M2C_UNK *var_s2;
    s32 temp_a0;
    s32 var_s1;
    void *temp_s0;
    void *temp_v0;

    var_s2 = ((void *)D_003BD4B0);
    temp_s0 = M2C_FIELD(arg0, void **, 0x3C);
    var_s1 = 0;
    if (M2C_FIELD(temp_s0, s32 *, 4) > 0) {
        do {
            if ((M2C_FIELD(var_s2, s32 *, 0xC) == 0) && (M2C_FIELD(var_s2, s32 (**)(void *), 4)(arg0) > 0)) {
                temp_v0 = func_00338AD0(M2C_FIELD(var_s2, s32 *, 0), M2C_FIELD(var_s2, M2C_UNK **, 8), M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E7290));
                func_00338A60(temp_v0, arg0);
                func_00338990((s32) temp_v0, (s32) arg0);
                M2C_FIELD(var_s2, s32 *, 0xC) = 1;
                temp_a0 = M2C_FIELD(var_s2, s32 *, 0);
                switch (temp_a0) {                  /* irregular */
                case 0x80000049:
                    if (func_00338530(0x3F) == 0) {
                        func_00338720(func_00338AD0(0x3F, &func_00370CC0, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E7290)), 3);
                    }
                    break;
                case 0x80000038:
                    M2C_FIELD(arg0, s32 *, 0x30) = 1;
                    break;
                }
            }
            var_s1 += 1;
            var_s2 += 0x10;
        } while (var_s1 < M2C_FIELD(temp_s0, s32 *, 4));
    }
    if (func_0023A380() == 0) {
        D_003E9F50 = 0;
        func_00338930((s32) arg0);
        func_00338940(0x3F);
    }
    if (((func_0023A0C0() & 0xFF) == 1) && (func_00338530(0x3F) == 0)) {
        func_00338720(func_00338AD0(0x3F, &func_00370CC0, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E7290)), 3);
        func_003332D0(1);
        func_00338930((s32) arg0);
    }
    return 1;
}
