/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_003389F0(void *, s32, s32);
extern int func_003387D0(void *, int);
extern int Pes6MatchPlayer_GetSquadIndex(u8);
extern u32 func_00333620(s32, u8);
extern s32 func_00338A60(void *, void *);
extern int func_003109B0(void);
extern s32 func_0030EEB0(void);
M2C_UNK func_0031BBE0(M2C_UNK, s32, M2C_UNK);       /* extern */
void *func_00338AD0(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_003394E0(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
extern char D_003E15C8[];
extern M2C_UNK func_003201D0;
extern M2C_UNK func_003204B0;
extern M2C_UNK func_00320A70;

s32 func_00320B60(void *arg0) {
    s32 temp_s3;
    s32 temp_v0;
    u8 temp_s1;
    void *temp_v0_2;
    void *temp_v0_3;

    if (func_0030EEB0() != 0) {
        temp_s3 = M2C_FIELD(arg0, s32 *, 0x40);
        func_00333620(3, 1U);
        func_00333620(4, 1U);
        temp_s1 = func_003109B0() & 0xFF;
        temp_v0 = Pes6MatchPlayer_GetSquadIndex(temp_s1);
        func_003394E0(temp_s3, 5, temp_v0, 2);
        func_0031BBE0(3, M2C_FIELD(arg0, s32 *, 0x3C), 4);
        temp_v0_2 = func_00338AD0(0x8000001E, &func_003204B0, 0x15, ((void *)D_003E15C8));
        func_00338A60(temp_v0_2, arg0);
        func_003389F0(temp_v0_2, 0, temp_v0);
        func_003389F0(temp_v0_2, 1, temp_s1 & 0xFF);
        temp_v0_3 = func_00338AD0(0x20, &func_003201D0, 0x15, ((void *)D_003E15C8));
        func_00338A60(temp_v0_3, arg0);
        func_003389F0(temp_v0_3, 0, temp_v0 ^ 1);
        func_003387D0(arg0, (s32) &func_00320A70);
        return 1;
    }
    return 0;
}
