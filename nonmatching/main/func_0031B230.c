/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0030EAE0(void *, s32);
extern int func_003387D0(void *, int);
extern s32 func_0030DC60(void *, s32);
extern s32 func_0030DC00(void *, s32);
extern int Pes6MatchPlayer_GetSquadIndex(u8);
extern s32 func_00338A60(void *, void *);
extern u8 func_0030EB60(u8);
extern s32 func_0030EB20(void *, s32);
extern int func_0030F220(int);
extern int func_0030E5C0(void *, u8);
extern u8 func_0030E540(s32);
extern int func_003395B0(void *);
extern s32 func_0030DCC0(void *, void *, s32);
void *func_00338AD0(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
s32 func_00340590(f32, f32);                        /* extern */
s32 func_00340680(M2C_UNK, f32, M2C_UNK, f32);      /* extern */
s32 func_00340A20(f32, f32);                        /* extern */
s32 func_00341910(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
extern char D_003E1510[];
extern M2C_UNK func_0031B000;
extern M2C_UNK func_0031B070;
extern M2C_UNK func_0031B0E0;
extern M2C_UNK func_0031B1A0;

s32 func_0031B230(void *arg0) {
    f32 sp68;
    f32 sp6C;
    M2C_UNK *var_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s4;
    void *temp_s0;
    void *temp_s2;
    void *temp_v1;

    temp_s2 = M2C_FIELD(arg0, void **, 0x3C);
    temp_s0 = M2C_FIELD(arg0, void **, 0x40);
    temp_s1 = M2C_FIELD(arg0, s32 *, 0x44);
    temp_s4 = func_0030EB60(func_0030E540(0) & 0xFF) != 1;
    temp_s0_2 = func_003395B0(temp_s0);
    if (func_0030EB20(temp_s2, temp_s4) == 0) {
        if (func_0030EAE0(temp_s2, temp_s4) != 0) {
            func_0030DCC0(&sp6C, &sp68, (s32) M2C_FIELD(temp_s2, u8 *, 0));
            temp_v1 = (Pes6MatchPlayer_GetSquadIndex(M2C_FIELD(temp_s2, u8 *, 0)) * 0xC) + temp_s1;
            M2C_FIELD(temp_v1, s32 *, 0x2FC) = (s32) M2C_FIELD(temp_v1, s32 *, 0x2F8);
            M2C_FIELD(temp_v1, s32 *, 0x2F8) = (s32) M2C_FIELD(temp_v1, s32 *, 0x2F4);
            M2C_FIELD(temp_v1, s32 *, 0x2F4) = temp_s0_2;
            if ((func_00340680(3, sp6C, 0x46106400, sp68) != 0) && (func_00340590(sp6C, sp68) == 0) && ((M2C_FIELD(temp_s2, s32 *, 0xC) + 0x4B0) < temp_s0_2)) {
                if (func_00341910(1, 5, 0xA) != 0) {
                    func_00338A60(func_00338AD0(0x80000005, &func_0031B000, 9, ((void *)D_003E1510)), arg0);
                    var_s0 = &func_0031B0E0;
                } else {
                    var_s0 = &func_0031B1A0;
                }
                M2C_FIELD(temp_s2, s8 *, 2) = 0xD;
                func_0030E5C0(temp_s2 + 1, M2C_FIELD(temp_s2, u8 *, 0));
                func_0030F220((s32) (temp_s2 + 4));
                M2C_FIELD(temp_s2, f32 *, 0x10) = sp6C;
                M2C_FIELD(temp_s2, f32 *, 0x14) = sp68;
                func_003387D0(arg0, (s32) var_s0);
                return 1;
            }
        }
        return 0;
    }
    func_0030DC60(&sp6C, (s32) M2C_FIELD(temp_s2, u8 *, 0));
    func_0030DC00(&sp68, (s32) M2C_FIELD(temp_s2, u8 *, 0));
    if ((func_00340A20(sp6C, sp68) != 0) && (func_00340590(sp6C, sp68) == 0) && ((M2C_FIELD(temp_s2, s32 *, 8) + 0x4B0) < temp_s0_2)) {
        func_00338A60(func_00338AD0(0x80000004, &func_0031B070, 9, ((void *)D_003E1510)), arg0);
    }
    M2C_FIELD(temp_s2, s8 *, 2) = 0xC;
    func_0030E5C0(temp_s2 + 1, M2C_FIELD(temp_s2, u8 *, 0));
    func_0030F220((s32) (temp_s2 + 4));
    M2C_FIELD(temp_s2, f32 *, 0x10) = sp6C;
    M2C_FIELD(temp_s2, f32 *, 0x14) = sp68;
    func_003387D0(arg0, (s32) &func_0031B0E0);
    return 1;
}
