/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s64 func_00154080(M2C_UNK);                         /* extern */
M2C_UNK func_001540B0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0017F900();                                /* extern */
M2C_UNK func_001FAF40(M2C_UNK, s32);                /* extern */
M2C_UNK func_001FC780(M2C_UNK);                     /* extern */
M2C_UNK func_001FC840(M2C_UNK);                     /* extern */
s32 func_002371A0(u16);                             /* extern */
M2C_UNK func_00291A50();                            /* extern */
M2C_UNK func_002CBF20(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, s32 *, s32 *, s32 *, s64); /* extern */
s32 func_00309440(M2C_UNK);                         /* extern */
M2C_UNK func_00309460(M2C_UNK, s32);                /* extern */
M2C_UNK func_00361A10();                            /* extern */
M2C_UNK func_00361EF0(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_00802900();                                /* extern */
M2C_UNK func_0080CA80();                            /* extern */
M2C_UNK func_0080E300();                            /* extern */
s32 func_008106A0();                                /* extern */
M2C_UNK func_00819200(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00825610();                                /* extern */
s32 func_0083C4D0();                                /* extern */
s32 func_008428B0();                                /* extern */
s16 *func_008472D0();                               /* extern */
M2C_UNK func_00858FD0(M2C_UNK *, s16);              /* extern */
M2C_UNK func_0085A210(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_008B7960(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_008B7D50();                            /* extern */
s32 func_008B96D0();                                /* extern */
extern void *D_003EA26C;
extern char D_00591BB0[];
extern char D_00591BB2[];
extern char D_00591BC6[];
extern char D_00591BC7[];
extern char D_00591BC8[];
extern char D_00591BC9[];
extern char D_008B21C0[];

s8 func_0080BB70(void) {
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    M2C_UNK var_s0;
    M2C_UNK var_s0_2;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;

    func_00858FD0(((void *)D_008B21C0), *func_008472D0());
    func_00819200(0x01FA000A, -1);
    temp_v0 = func_00309440(3);
    switch (temp_v0) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        func_001FC780(4);
        func_001FC840(4);
        func_00309460(3, func_00309440(3) + 1);
        break;
    case 1:                                         /* switch 1 */
        if (func_0017F900() != 0) {
            temp_v0_2 = func_00802900();
            switch (temp_v0_2) {                    /* switch 2; irregular */
            case 2:                                 /* switch 2 */
            case 1:                                 /* switch 2 */
                func_00291A50();
                func_0080E300();
                temp_v0_3 = func_00802900();
                if ((temp_v0_3 != 2) && (temp_v0_3 != 1)) {
                    func_00361A10();
                    func_001FAF40(0, func_002371A0((*(u16 *)D_00591BB0)) & 0xFFFF);
                    func_001FAF40(1, func_002371A0((*(u16 *)D_00591BB2)) & 0xFFFF);
                } else if (func_00825610() != 6) {
                    if (func_0083C4D0() == 0) {
                        var_s0 = 1;
                    } else {
                        var_s0 = 0;
                    }
                    func_00361EF0(var_s0, func_008428B0(), 1);
                }
                func_008B7960(0x83, -1);
                break;
            default:                                /* switch 2 */
            case 4:                                 /* switch 2 */
            case 3:                                 /* switch 2 */
                func_00291A50();
                func_0080CA80();
                temp_v0_4 = func_00802900();
                if ((temp_v0_4 != 2) && (temp_v0_4 != 1)) {
                    func_00361A10();
                    func_001FAF40(0, func_002371A0((*(u16 *)D_00591BB0)) & 0xFFFF);
                    func_001FAF40(1, func_002371A0((*(u16 *)D_00591BB2)) & 0xFFFF);
                } else if (func_00825610() != 6) {
                    if (func_0083C4D0() == 0) {
                        var_s0_2 = 1;
                    } else {
                        var_s0_2 = 0;
                    }
                    func_00361EF0(var_s0_2, func_008428B0(), 1);
                }
                func_008B7960(0x83, -1);
                sp3C = (s32) (*(u8 *)D_00591BC6);
                temp_s0 = func_002371A0((*(u16 *)D_00591BB0)) & 0xFFFF;
                func_002CBF20(temp_s0, func_002371A0((*(u16 *)D_00591BB2)) & 0xFFFF, 0, 0, 1, &sp3C, &sp38, &sp34, (s64) &sp30);
                (*(s8 *)D_00591BC7) = (s8) sp38;
                (*(s8 *)D_00591BC8) = (s8) sp34;
                (*(s8 *)D_00591BC9) = (s8) sp30;
                break;
            }
            func_00309460(3, func_00309440(3) + 1);
        }
        break;
    case 2:                                         /* switch 1 */
        if (func_008106A0() != 0) {
            func_00309460(3, func_00309440(3) + 1);
        }
        break;
    case 3:                                         /* switch 1 */
        if (func_008B96D0() != 0) {
            func_0085A210(3, 5, 0);
            func_001540B0(0xC, 0);
            func_00309440(2);
            func_00309460(2, 4);
            M2C_FIELD(D_003EA26C, s8 *, 0x28) = 0;
            M2C_FIELD(D_003EA26C, s32 *, 0x58) = (s32) ((s64) (func_00154080(0xC) << 0x20) >> 0x20);
        } else {
            func_008B7D50();
        }
        break;
    }
    return M2C_FIELD(D_003EA26C, s8 *, 0x3F);
}
