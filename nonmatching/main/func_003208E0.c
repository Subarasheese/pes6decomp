/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0030E750(s32);
extern int func_003387D0(void *, int);
extern s32 func_0030EF30(void);
extern int Pes6MatchPlayer_GetSquadIndex(u8);
extern u32 func_00333620(s32, u8);
extern s32 func_0030EEF0(void);
extern s32 func_00338A60(void *, void *);
extern int func_003109B0(void);
M2C_UNK func_0031BBE0(M2C_UNK, s32, M2C_UNK);       /* extern */
void *func_00338AD0(M2C_UNK, M2C_UNK *, s32, M2C_UNK *); /* extern */
M2C_UNK func_003394E0(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
extern char D_003E15C8[];
extern M2C_UNK func_0031FC30;
extern M2C_UNK func_00320030;
extern M2C_UNK func_00320680;
extern M2C_UNK func_003207C0;

s32 func_003208E0(void *arg0) {
    s32 temp_a0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0;

    temp_s1 = func_0030EF30();
    temp_v0 = func_0030EEF0();
    if ((temp_v0 == 0) && (temp_s1 == 0)) {
        return 0;
    }
    if (temp_s1 != 0) {
        func_00333620(3, 1U);
        func_00333620(5, 1U);
    }
    if (temp_v0 != 0) {
        func_00333620(3, 1U);
        func_00333620(6, 1U);
    }
    temp_s2 = M2C_FIELD(arg0, s32 *, 0x40);
    func_0031BBE0(3, M2C_FIELD(arg0, s32 *, 0x3C), 4);
    temp_a0 = func_003109B0() & 0xFF;
    if (temp_v0 != 0) {
        func_00338AD0(0x8000001F, &func_00320030, 0x1A, ((void *)D_003E15C8));
    } else if (temp_s1 != 0) {
        func_003394E0(temp_s2, 6, Pes6MatchPlayer_GetSquadIndex(func_0030E750(temp_a0)) & 0xFF, 2);
        func_00338A60(func_00338AD0(0x80000020, &func_0031FC30, 8, ((void *)D_003E15C8)), arg0);
        func_00338A60(func_00338AD0(0x26, &func_00320680, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E15C8)), arg0);
    }
    func_003387D0(arg0, (s32) &func_003207C0);
    return 1;
}
