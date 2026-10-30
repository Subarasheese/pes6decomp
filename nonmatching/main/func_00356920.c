/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_0030DBA0(void);
extern s32 func_0030F050(void);
extern int Pes6MatchPlayer_GetSquadIndex(u8);
extern u32 func_00333620(s32, u8);
extern s32 func_00338A60(void *, void *);
extern s32 func_00338990(s32, s32);
extern s32 func_003389D0(s32, s32);
extern int func_00335370(void);
extern void func_00338930(int);
M2C_UNK func_00310A50(s32, M2C_UNK);                /* extern */
void *func_00338AD0(M2C_UNK, M2C_UNK *, s32, M2C_UNK *); /* extern */
M2C_UNK func_00349210(void *);                      /* extern */
s32 func_00BD9830();                                /* extern */
s32 func_00BD99D0();                                /* extern */
extern char D_003E6448[];
extern M2C_UNK func_00356CE0;

s32 func_00356920(void *arg0) {
    u8 temp_s1;
    void *temp_s2;
    void *temp_v0;

    if (M2C_FIELD(arg0, s32 *, 0x38) == 0) {
        if (func_0030DBA0() != 0) {
            return 0;
        }
        if ((func_00BD99D0() != 0) && (func_00BD9830() != 0)) {
            if (func_0030F050() == 0) {
                temp_s2 = M2C_FIELD(((func_003389D0((s32) arg0, 0) * 4) + arg0), void **, 0x3C);
                func_00310A50(temp_s2 + 0x15, 1);
                func_00310A50(temp_s2 + 0x16, 2);
                temp_s1 = M2C_FIELD(temp_s2, u8 *, 0x15);
                M2C_FIELD(func_00335370(), u8 *, 0x1030) = temp_s1;
                M2C_FIELD(temp_s2, s8 *, 0x13) = Pes6MatchPlayer_GetSquadIndex(M2C_FIELD(temp_s2, u8 *, 0x15));
                func_00349210(temp_s2);
                temp_v0 = func_00338AD0(0x80000057, &func_00356CE0, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E6448));
                func_00338A60(temp_v0, arg0);
                func_00338990((s32) temp_v0, (s32) arg0);
            }
            M2C_FIELD(arg0, s32 *, 0x38) = 1;
        }
        goto block_8;
    }
block_8:
    if ((func_0030F050() != 0) && (M2C_FIELD(arg0, s32 *, 0x38) != 0)) {
        func_00333620(0x16, 1U);
        func_00338930((s32) arg0);
        goto block_15;
    }
    if (func_00BD99D0() != 0) {
        return 0;
    }
    func_00338930((s32) arg0);
block_15:
    return 1;
}
