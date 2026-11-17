/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_002AE670(s32);
f32 func_001CD9E0(f32);
extern void func_0097A6D0(void *, u16);
s32 func_009B30B0(u16, s32);
u32 func_009B33A0(void *, s32, s32);
s32 func_009B3480(void *, f32, f32);
s32 func_00A07B40();
s32 func_00A09950(void *);
s32 func_00A0FC40(void *, s32, s32);
extern void func_00AA9F90(void *, void *, s32, s32, s32, s32);
s32 func_00C201A0(void *, s32);
s32 func_00C20350(void *, s32, s32);
extern void *Pes6Ball_Current;
extern char D_00591C09[];
extern char D_00591F11[];
extern char D_00591F24[];
extern char D_005926DC[];
extern char D_005926E4[];
extern char Pes6MatchSquads[];

s32 func_00C1E6E0(void *arg0, s32 arg1) {
    u32 r;
    s32 s0;
    s32 a1;
    s32 q;
    u8 st;
    u8 *sq;

    r = func_009B33A0(arg0, (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454), (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C));
    s0 = (s32) func_001CD9E0((f32) r);
    st = M2C_FIELD(arg0, u8 *, 0x45);
    a1 = func_009B3480(arg0, M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454), M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C)) & 0xFFFF;
    if (st == 0x91) {
        if (func_00A0FC40(arg0, s0, 0x140) == 0) {
            M2C_FIELD(arg0, u8 *, 0x45) = 0x90;
        }
        goto l_9b4;
    }
    if (st == 0x90) {
        if (M2C_FIELD(arg0, s32 *, 0x1C) >= 0x201) {
            if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x28), a1) & 0xFFFF) >= 0x50) {
                func_0097A6D0(arg0, M2C_FIELD(arg0, u16 *, 0xA8));
                M2C_FIELD(arg0, u8 *, 0x45) = 0x91;
                return 0;
            }
        }
        if (func_00A0FC40(arg0, s0, 0x140) != 0) {
            func_0097A6D0(arg0, M2C_FIELD(arg0, u16 *, 0xA8));
            M2C_FIELD(arg0, u8 *, 0x45) = 0x91;
            return 0;
        }
l_9b4:
        if (func_00C20350(arg0, s0, 1) == 0) {
            M2C_FIELD(arg0, u8 *, 0x45) = 2;
        }
        return 0;
    }
    if (st == 3) {
        if (func_00A0FC40(arg0, s0, 0x28) != 0) {
            M2C_FIELD(arg0, u8 *, 0x45) = 2;
        }
        return 0;
    }
    if (st == 0x81) {
        if (func_00A0FC40(arg0, s0, 0x50) != 0) {
            M2C_FIELD(arg0, u8 *, 0x45) = 0x80;
        } else if (func_00C201A0(arg0, arg1) == 0) {
            M2C_FIELD(arg0, u8 *, 0x45) = 0;
        }
        return 0;
    }
    if (st == 0x80) {
        if (func_00A0FC40(arg0, s0, 0x3C0) == 0 && arg1 == 0) {
            M2C_FIELD(arg0, u8 *, 0x45) = 0x81;
            return 0;
        }
        if (func_00C201A0(arg0, arg1) == 0) {
            M2C_FIELD(arg0, u8 *, 0x45) = 0;
        }
        return 0;
    }
    /* states 2, 1, 0 and default share the first call */
    if (func_00C201A0(arg0, arg1) != 0) {
        sq = (u8 *)Pes6MatchSquads + M2C_FIELD(arg0, u8 *, 0x12) * 0x6900 + M2C_FIELD(arg0, u8 *, 0x11) * 0x348;
        q = ((sq[0x8C] >> 2) + 0x94) * -0x220;
        func_00AA9F90(arg0, arg0, M2C_FIELD(arg0, s32 *, 0x1C), 1, 0x200, q / 183);
        M2C_FIELD(arg0, u8 *, 0x45) = 0x80;
        M2C_FIELD(arg0, s16 *, 0x1CE) = (s16) (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454);
        M2C_FIELD(arg0, s16 *, 0x1D0) = (s16) (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C);
        return 0;
    }
    if (st == 2) {
        if ((func_00A07B40() == 0) && ((*(u8 *)D_00591F24) != 5) && ((*(u8 *)D_00591F11) == 0) && (func_00A0FC40(arg0, s0, 0x50) == 0)) {
            M2C_FIELD(arg0, u8 *, 0x45) = 1;
        }
        if (func_00A0FC40(arg0, s0, 0x28) == 0) {
            if (arg1 == 0 || (*(u8 *)D_00591C09) == 5) {
                M2C_FIELD(arg0, u8 *, 0x45) = 1;
            }
        }
        return 0;
    }
    if (func_00A0FC40(arg0, s0, 0x10) != 0) {
        if (M2C_FIELD(arg0, u16 *, 0x3A) == 6) {
            func_0097A6D0(arg0, M2C_FIELD(arg0, u16 *, 0xA8));
            M2C_FIELD(arg0, u8 *, 0x45) = 0x91;
            return 1;
        }
        M2C_FIELD(arg0, u8 *, 0x45) = 2;
        return 0;
    }
    if (((*(u8 *)D_00591C09) == 5) && ((*(u8 *)D_00591F24) == 1)) {
        if (s0 >= 0x201) {
            M2C_FIELD(arg0, u8 *, 0x3E) = (u8) (*(u8 *)D_005926DC);
            M2C_FIELD(arg0, u8 *, 0x45) = 3;
        }
    } else if (M2C_FIELD(arg0, u8 *, 0x3E) == (*(u8 *)D_005926DC)) {
        M2C_FIELD(arg0, u8 *, 0x3E) = func_002AE670((s32) (*(u8 *)D_005926E4));
        if (arg1 == 0) {
            if (s0 < 0x201) {
                if ((func_00A09950(arg0) == 1) && (s0 >= 0x141)) {
                    goto l_85;
                }
            } else {
l_85:
                M2C_FIELD(arg0, u8 *, 0x3E) = (u8) (*(u8 *)D_005926DC);
                M2C_FIELD(arg0, u8 *, 0x45) = 3;
            }
        }
    }
    return 0;
}
