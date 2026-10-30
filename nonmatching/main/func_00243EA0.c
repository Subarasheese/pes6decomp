/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002371A0(s32);
M2C_UNK func_00241660(s32 *, u16, M2C_UNK, M2C_UNK); /* extern */
f32 func_00243930(s32, s32, M2C_UNK);               /* extern */
extern u8 D_003E9E88;
extern u8 D_003E9E89;
extern char D_0053C3B4[];
extern char D_0053C3BC[];
extern char D_00591BB0[];
extern char D_00591BB2[];

void func_00243EA0(void) {
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;

    if (!(D_003E9E88 & 1)) {
        func_00241660(&sp3C, (*(u16 *)D_00591BB0), 0, 0);
    } else {
        func_00241660(&sp3C, (*(u16 *)D_00591BB0), 0, 1);
    }
    if (!(D_003E9E89 & 1)) {
        func_00241660(&sp38, (*(u16 *)D_00591BB2), 0, 0);
    } else {
        func_00241660(&sp38, (*(u16 *)D_00591BB2), 0, 1);
    }
    func_00241660(&sp34, (*(u16 *)D_00591BB0), 3, 0);
    temp_s0 = (s32) func_00243930(sp34, sp38, 0);
    func_00241660(&sp30, (*(u16 *)D_00591BB0), 3, 1);
    if (temp_s0 < (s32) func_00243930(sp30, sp38, 0)) {
        (*(s32 *)D_0053C3B4) = 0x38;
    } else {
        (*(s32 *)D_0053C3B4) = 0;
    }
    if (temp_s0 >= 0x14) {
        (*(s32 *)D_0053C3B4) = 0;
    }
    func_00241660(&sp2C, (*(u16 *)D_00591BB2), 3, 0);
    temp_s0_2 = (s32) func_00243930(sp2C, sp3C, 0);
    func_00241660(&sp28, (*(u16 *)D_00591BB2), 3, 1);
    if (temp_s0_2 < (s32) func_00243930(sp28, sp3C, 0)) {
        (*(s32 *)D_0053C3BC) = 0x38;
    } else {
        (*(s32 *)D_0053C3BC) = 0;
    }
    if (temp_s0_2 >= 0x14) {
        (*(s32 *)D_0053C3BC) = 0;
    }
    temp_s0_3 = func_002371A0((s32) (*(u16 *)D_00591BB0)) & 0xFFFF;
    if (temp_s0_3 == (func_002371A0((s32) (*(u16 *)D_00591BB2)) & 0xFFFF)) {
        if (D_003E9E88 & 1) {
            (*(s32 *)D_0053C3B4) = 0x38;
            (*(s32 *)D_0053C3BC) = 0;
        } else {
            (*(s32 *)D_0053C3B4) = 0;
            (*(s32 *)D_0053C3BC) = 0x38;
        }
    }
}
