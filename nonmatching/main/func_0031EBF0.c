/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_003387D0(void *, int);
extern int Pes6MatchPlayer_GetSquadIndex(u8);
extern u32 func_00333620(s32, u8);
extern void func_00338930(int);
extern s32 func_00338A60(void *, void *);
extern s32 func_00338A20(void *, s32, s32);
extern s32 func_00342250(void);
extern int func_0030E830(void);
extern s32 func_003389F0(void *, s32, s32);
s64 func_0030DAF0(M2C_UNK);                         /* extern */
M2C_UNK func_00325A40(s32);                         /* extern */
M2C_UNK func_00338840(M2C_UNK);                     /* extern */
void *func_00338AD0(s32, M2C_UNK *, s32, M2C_UNK *); /* extern */
M2C_UNK func_003395C0(s32, u8);                     /* extern */
s32 func_00356E00(void *, s32 *, M2C_UNK **);       /* extern */
extern char D_003E15C0[];
extern M2C_UNK func_0031D6D0;
extern M2C_UNK func_0031EAC0;
extern M2C_UNK func_0031EB20;

s32 func_0031EBF0(void *arg0) {
    M2C_UNK *sp88;
    s32 sp8C;
    s32 temp_s2;
    s32 temp_s3;
    void *temp_s0;
    void *temp_s1;
    void *temp_s6;
    void *temp_v0;

    temp_s1 = M2C_FIELD(arg0, void **, 0x3C);
    temp_s3 = M2C_FIELD(arg0, s32 *, 0x40);
    temp_s0 = M2C_FIELD(arg0, void **, 0x50);
    temp_s2 = M2C_FIELD(arg0, s32 *, 0x4C);
    temp_s6 = M2C_FIELD(arg0, void **, 0x54);
    if (func_00356E00(arg0 + 0x38, &sp8C, &sp88) != 0) {
        temp_v0 = func_00338AD0(sp8C, sp88, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E15C0));
        func_00338A60(temp_v0, arg0);
        func_00338A20(temp_v0, (s32) (arg0 + 0x38), 3);
        func_003389F0(temp_v0, 0, 7);
        func_003389F0(arg0, 1, 1);
    }
    if (M2C_FIELD(temp_s1, u8 *, 8) != 0) {
        if (M2C_FIELD(temp_s1, s32 *, 0x74) != 0xC) {
            return 0;
        }
        if ((func_0030E830() == 0) && (((s64) (func_0030DAF0(0) << 0x30) >> 0x30) == 0) && (((s64) (func_0030DAF0(1) << 0x30) >> 0x30) == 0)) {
            func_00325A40(temp_s2);
        }
        func_00333620(2, 0U);
        M2C_FIELD(temp_s1, u8 *, 0x60) = Pes6MatchPlayer_GetSquadIndex(M2C_FIELD(temp_s1, u8 *, 0x78));
        func_003395C0(temp_s3, M2C_FIELD(temp_s1, u8 *, 0x60));
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
        if (M2C_FIELD(temp_s0, u8 *, 0xB) != 0) {
            func_00338A60(func_00338AD0(0x80000025, &func_0031D6D0, 4, ((void *)D_003E15C0)), arg0);
            func_00342250();
            M2C_FIELD(temp_s6, s32 *, 0x28) = 1;
            func_00338930((s32) arg0);
        } else {
            func_00338A60(func_00338AD0(0x80000008, &func_0031EAC0, 4, ((void *)D_003E15C0)), arg0);
            func_003387D0(arg0, (s32) &func_0031EB20);
        }
        M2C_FIELD(temp_s0, u8 *, 0xB) = 0U;
        func_00338840(7);
        return 1;
    }
    return 0;
}
