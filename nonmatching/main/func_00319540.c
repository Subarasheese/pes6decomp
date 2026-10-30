/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_003387D0(void *, int);
extern int func_0030DA60(void);
extern int Pes6MatchPlayer_GetSquadIndex(u8);
extern u32 func_00333620(s32, u8);
extern void func_00338930(int);
extern int func_00310930(void);
extern void func_00333320(s32);
extern s32 func_00338A60(void *, void *);
extern s32 func_003389F0(void *, s32, s32);
M2C_UNK func_00314920(void *, s32);                 /* extern */
s32 func_00333190(M2C_UNK);                         /* extern */
M2C_UNK func_003338C0(s32, u8, s32, M2C_UNK);       /* extern */
M2C_UNK func_003387E0(M2C_UNK);                     /* extern */
void *func_00338AD0(M2C_UNK, M2C_UNK *, s32, M2C_UNK *); /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
s32 func_00BF6280();                                /* extern */
extern char D_003E1508[];
extern u8 D_003E9F0C;
extern M2C_UNK func_003152B0;
extern M2C_UNK func_00315340;
extern M2C_UNK func_00315390;
extern M2C_UNK func_003191F0;
extern M2C_UNK func_003193D0;

s32 func_00319540(void *arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 var_a0;
    s32 var_v0;
    s32 var_v0_2;
    u8 var_v0_3;
    void *temp_a1;
    void *temp_s1;
    void *temp_v0_2;

    if ((func_009E1C90(1) & 0xFF) != 0xC) {
        var_v0 = 0;
    } else {
        temp_v0 = func_00BF6280();
        switch (temp_v0) {                          /* irregular */
        case 1:
            var_v0 = 1;
            break;
        case 0:
            var_v0 = 1;
            break;
        }
    }
    if (var_v0 != 0) {
        temp_s1 = M2C_FIELD(arg0, void **, 0x3C);
        func_00333620(9, 1U);
        if (M2C_FIELD(temp_s1, u8 *, 8) != 0) {
            var_v0_2 = Pes6MatchPlayer_GetSquadIndex(func_00310930()) & 0xFF;
        } else {
            var_v0_2 = func_0030DA60();
        }
        temp_s0 = var_v0_2 & 0xFF;
        func_00314920(arg0, temp_s0);
        var_v0_3 = M2C_FIELD(temp_s1, u8 *, 6) != 0;
        if (var_v0_3 != 0) {
            var_v0_3 = M2C_FIELD(temp_s1, u8 *, 7) != 0;
        }
        D_003E9F0C = var_v0_3;
        var_a0 = func_00333190(0x5DC0) != 0;
        if (var_a0 != 0) {
            var_a0 = D_003E9F0C == 0;
        }
        func_00333320(var_a0);
        if (M2C_FIELD(temp_s1, u8 *, 6) == 0) {
            if (M2C_FIELD(temp_s1, u8 *, 8) == 0) {
                func_00338A60(func_00338AD0(0x8000002D, &func_003191F0, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E1508)), arg0);
                func_003387D0(arg0, (s32) &func_003193D0);
            } else {
                temp_v0_2 = func_00338AD0(0x2E, &func_00315340, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E1508));
                func_00338A60(temp_v0_2, arg0);
                temp_s0_2 = temp_s0 & 0xFF;
                func_003389F0(temp_v0_2, 0, temp_s0_2);
                func_003389F0(arg0, 0, temp_s0_2);
                func_003387D0(arg0, (s32) &func_003152B0);
            }
        } else if (D_003E9F0C != 0) {
            temp_a1 = M2C_FIELD(arg0, void **, 0x3C);
            M2C_FIELD(temp_a1, s8 *, 0xB) = 1;
            func_003338C0(M2C_FIELD(arg0, s32 *, 0x40), M2C_FIELD(temp_a1, u8 *, 5), *M2C_FIELD(arg0, s32 **, 0x44), 3);
            func_00338930((s32) arg0);
        } else {
            func_00338A60(func_00338AD0(0x80000023, &func_00315390, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E1508)), arg0);
            func_003387D0(arg0, (s32) &func_003193D0);
        }
        func_003387E0(4);
    }
    return 1;
}
