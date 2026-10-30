/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_003387D0(void *, int);
extern int Pes6MatchPlayer_GetSquadIndex(u8);
extern s32 func_00338A60(void *, void *);
extern s32 func_0030D990(s32);
extern s32 func_003389F0(void *, s32, s32);
void *func_00338AD0(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_003394E0(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
s32 func_00340F30(void *);                          /* extern */
M2C_UNK func_00351CF0(void *);                      /* extern */
extern char D_003E61A8[];
extern M2C_UNK func_00343470;
extern M2C_UNK func_00343AD0;

s32 func_00343C90(void *arg0) {
    s32 temp_s4;
    s32 temp_v0;
    void *temp_s0;
    void *temp_s1;
    void *temp_v0_2;
    void *temp_v1;

    temp_s1 = M2C_FIELD(arg0, void **, 0x3C);
    temp_s4 = M2C_FIELD(arg0, s32 *, 0x40);
    if (M2C_FIELD(temp_s1, u8 *, 8) == 0) {
        return 0;
    }
    temp_s0 = temp_s1 + 0x74;
    if (func_00340F30(temp_s0) != 0) {
        temp_v0 = Pes6MatchPlayer_GetSquadIndex(M2C_FIELD(temp_s0, u8 *, 4));
        func_003394E0(temp_s4, 4, temp_v0, 2);
        if (func_0030D990((s32) M2C_FIELD(temp_s0, u8 *, 4)) == 1) {
            temp_v1 = (temp_v0 * 2) + temp_s1;
            M2C_FIELD(temp_v1, s16 *, 0x54) = (s16) (M2C_FIELD(temp_v1, s16 *, 0x54) + 1);
        }
        if ((M2C_FIELD(temp_s0, u8 *, 0x2C) & 0xF) != 3) {
            temp_v0_2 = func_00338AD0(0x80000007, &func_00343470, 5, ((void *)D_003E61A8));
            func_003389F0(temp_v0_2, 0, 0);
            func_003389F0(temp_v0_2, 1, 1);
            func_003389F0(temp_v0_2, 2, 1);
            func_00338A60(temp_v0_2, arg0);
        }
        func_00351CF0(temp_s1);
        func_003387D0(arg0, (s32) &func_00343AD0);
        return 1;
    }
    return 0;
}
