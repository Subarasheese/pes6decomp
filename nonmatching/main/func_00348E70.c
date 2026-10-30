/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_003387D0(void *, int);
extern s32 func_0030F050(void);
extern s32 func_0030F330(void);
extern s32 func_0030F140(void);
extern u32 func_00333620(s32, u8);
extern s32 func_00338720(void *, s32);
extern void func_00338930(int);
extern s32 func_003389D0(s32, s32);
extern s32 func_00342250(void);
extern s32 func_00338A20(void *, s32, s32);
extern s32 func_00332FA0(void);
extern int func_00333600(int);
extern int func_003395B0(void *);
extern s32 func_00338940(s32);
extern s32 func_00338A60(void *, void *);
extern s32 func_003389F0(void *, s32, s32);
void *func_00338AD0(s32, M2C_UNK *, s32, M2C_UNK *); /* extern */
s32 func_00341910(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00344EA0(void *, s32);                 /* extern */
M2C_UNK func_003486C0(void *);                      /* extern */
M2C_UNK func_00348820(void *, s32);                 /* extern */
M2C_UNK func_00348C10(void *, s32);                 /* extern */
s32 func_00356E00(void *, s32 *, M2C_UNK **);       /* extern */
extern char D_003E61B0[];
extern M2C_UNK func_00345580;
extern M2C_UNK func_00345810;
extern M2C_UNK func_003461A0;
extern M2C_UNK func_00346CD0;
extern M2C_UNK func_00349350;

s32 func_00348E70(void *arg0) {
    s32 sp68;
    M2C_UNK *sp6C;
    M2C_UNK *var_a1;
    s32 temp_s0;
    s32 var_v0;
    void *temp_s1;
    void *temp_s2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;

    temp_s2 = M2C_FIELD(arg0, void **, 0x4C);
    temp_s1 = M2C_FIELD(arg0, void **, 0x50);
    temp_s0 = func_00332FA0();
    func_00333620(0xE, func_0030F140() != 0);
    if ((temp_s0 == 0) && (func_00333600(0xE) != 0) && (func_00333600(0xB) != 0) && (func_00333600(0xA) == 0) && !(M2C_FIELD(arg0, s32 *, 0x30) & 0x20)) {
        func_003486C0(arg0);
        temp_v0 = func_00338AD0(0x8000002C, &func_00346CD0, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E61B0));
        func_00338A60(temp_v0, arg0);
        func_003389F0(temp_v0, 0, func_003389D0((s32) arg0, 0));
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x20);
    }
    if (func_00333600(0xA) == 0) {
        func_00348C10(temp_s2, func_003395B0(temp_s1));
        if (func_00341910(1, 5, 0xA) == 0) {
            func_00344EA0(arg0, temp_s0);
        } else {
            func_00348820(arg0, temp_s0);
        }
    }
    if ((func_0030F050() != 0) && ((func_00341910(1, 5, 0xA) != 0) || (M2C_FIELD(arg0, s32 *, 0x30) & 0x200))) {
        func_00333620(0xB, 0U);
        func_00333620(0x16, 1U);
        func_00338930((s32) arg0);
        goto block_37;
    }
    if (func_00356E00(arg0 + 0x38, &sp68, &sp6C) == 0) {
        if ((M2C_FIELD(arg0, s32 *, 0x34) == 0) && (temp_s0 == 0) && (M2C_FIELD(temp_s2, s32 *, 0x30) == 5)) {
            if (M2C_FIELD(temp_s2, s32 *, 0x28) != 5) {
                var_v0 = 0x29;
                var_a1 = &func_003461A0;
            } else {
                var_v0 = 0x3A;
                var_a1 = &func_00345580;
            }
            M2C_FIELD(arg0, s32 *, 0x34) = var_v0;
            temp_v0_2 = func_00338AD0(M2C_FIELD(arg0, s32 *, 0x34), var_a1, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E61B0));
            func_00338A60(temp_v0_2, arg0);
            if (M2C_FIELD(arg0, s32 *, 0x34) == 0x29) {
                func_00338720(temp_v0_2, 0xA);
            }
        }
    } else {
        temp_v0_3 = func_00338AD0(sp68, sp6C, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E61B0));
        func_00338A60(temp_v0_3, arg0);
        func_00338A20(temp_v0_3, (s32) (arg0 + 0x38), 3);
        func_003389F0(temp_v0_3, 0, 4);
        func_003389F0(arg0, 1, 5);
    }
    if (func_0030F330() == 0) {
        func_00333620(0xB, 0U);
        func_00338940(0x29);
        if (M2C_FIELD(arg0, s32 *, 0x34) == 0x29) {
            temp_v0_4 = func_00338AD0(0x2A, &func_00345810, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E61B0));
            func_00338A60(temp_v0_4, arg0);
            func_003389F0(temp_v0_4, 0, 0);
            func_003389F0(temp_v0_4, 1, 5);
            func_003389F0(temp_v0_4, 2, 2);
        }
        func_00342250();
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
        func_003389F0(arg0, 1, 0);
        M2C_FIELD(temp_s2, s32 *, 0x34) = 0;
        func_003387D0(arg0, (s32) &func_00349350);
block_37:
        return 1;
    }
    return 0;
}
