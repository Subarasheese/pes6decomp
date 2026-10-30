/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002371A0(s32);
M2C_UNK func_00241660(s32 *, u16, M2C_UNK, M2C_UNK); /* extern */
s64 func_002432D0(M2C_UNK, M2C_UNK);                /* extern */
f32 func_00243930(s32, s32, M2C_UNK);               /* extern */
extern s8 D_003E9E88;
extern s8 D_003E9E89;
extern char D_00591BB0[];
extern char D_00591BB2[];

void func_00244AB0(void) {
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    s32 temp_s0_5;
    s64 temp_a0;
    s64 temp_a0_2;
    s64 temp_a1;
    s64 temp_a1_2;
    s64 temp_s0;
    s64 temp_s0_2;
    s64 temp_s0_3;
    s64 temp_s1;
    s64 temp_s2;
    u16 temp_s0_4;

    D_003E9E88 = 0;
    D_003E9E89 = 0;
    temp_s2 = (s64) (func_002432D0(0, 0) << 0x30) >> 0x30;
    temp_s1 = (s64) (func_002432D0(0, 1) << 0x30) >> 0x30;
    temp_s0 = (s64) (func_002432D0(1, 0) << 0x30) >> 0x30;
    temp_a0 = (s64) (temp_s2 << 0x30) >> 0x30;
    temp_a1 = (s64) (func_002432D0(1, 1) << 0x30) >> 0x30;
    if (temp_a0 < 0xA) {
        if (((s64) (temp_s1 << 0x30) >> 0x30) < 0xA) {
            temp_a1_2 = (s64) (temp_a1 << 0x30) >> 0x30;
            temp_a0_2 = (s64) (temp_s0 << 0x30) >> 0x30;
            if (temp_a0_2 < temp_a1_2) {
                if (temp_a1_2 >= 0xB) {
                    D_003E9E88 = 0x3F;
                    goto block_28;
                }
                func_00241660(&sp4C, (*(u16 *)D_00591BB0), 0, 0);
                func_00241660(&sp48, (*(u16 *)D_00591BB2), 0, 0);
                temp_s0_2 = (s64) ((s64) (s32) func_00243930(sp4C, sp48, 0) << 0x30) >> 0x30;
                func_00241660(&sp44, (*(u16 *)D_00591BB0), 0, 0);
                func_00241660(&sp40, (*(u16 *)D_00591BB2), 0, 1);
                if (((s64) (temp_s0_2 << 0x30) >> 0x30) < ((s64) ((s64) (s32) func_00243930(sp44, sp40, 0) << 0x30) >> 0x30)) {
                    D_003E9E88 = 0;
                    goto block_28;
                }
                D_003E9E88 = 0;
                D_003E9E89 = 0;
            } else if (temp_a0_2 >= 0xB) {
                D_003E9E89 = 0;
                D_003E9E88 = 0x3F;
            } else {
                func_00241660(&sp5C, (*(u16 *)D_00591BB0), 0, 0);
                func_00241660(&sp58, (*(u16 *)D_00591BB2), 0, 0);
                temp_s0_3 = (s64) ((s64) (s32) func_00243930(sp5C, sp58, 0) << 0x30) >> 0x30;
                func_00241660(&sp54, (*(u16 *)D_00591BB0), 0, 0);
                func_00241660(&sp50, (*(u16 *)D_00591BB2), 0, 1);
                if (((s64) (temp_s0_3 << 0x30) >> 0x30) < ((s64) ((s64) (s32) func_00243930(sp54, sp50, 0) << 0x30) >> 0x30)) {
                    D_003E9E88 = 0;
block_28:
                    D_003E9E89 = 0x3F;
                } else {
                    D_003E9E88 = 0;
                    D_003E9E89 = 0;
                }
            }
        } else {
            goto block_4;
        }
    } else {
block_4:
        if (temp_a0 < ((s64) (temp_s1 << 0x30) >> 0x30)) {
            D_003E9E88 = 0;
            D_003E9E89 = 0x3F;
        } else {
            D_003E9E88 = 0;
            D_003E9E89 = 0;
        }
        if (temp_a0 >= 0x24) {
            D_003E9E88 = 0;
            D_003E9E89 = 0;
        }
    }
    if ((*(u16 *)D_00591BB0) != 0x126) {
        temp_s0_4 = (*(u16 *)D_00591BB2);
        if (temp_s0_4 != 0x127) {
            temp_s0_5 = func_002371A0((s32) (*(u16 *)D_00591BB0)) & 0xFFFF;
            if (temp_s0_5 == (func_002371A0((s32) temp_s0_4) & 0xFFFF)) {
                D_003E9E88 = 0;
                D_003E9E89 = 0x3F;
            }
        }
    }
    if ((((*(u16 *)D_00591BB0) == 0x68) && ((*(u16 *)D_00591BB2) == 0x73)) || (((*(u16 *)D_00591BB0) == 0x73) && ((*(u16 *)D_00591BB2) == 0x68))) {
        D_003E9E88 = 0;
        D_003E9E89 = 0;
    }
}
