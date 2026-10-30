/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002A94D0(int);
extern void func_002A93D0(s32, f32, f32);
extern void func_002A9210(float);
extern void func_002A6E40(u8);
extern void func_002A6DA0(s32);
extern void func_002A94F0(int);
extern void func_002A91F0(float);
extern void func_002A9570(int);
extern void func_002A9450(float);
extern void func_002A9200(float);
M2C_UNK func_001A56D0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_002A8C00(f32);                         /* extern */
M2C_UNK func_002A9F80(s32);                         /* extern */
M2C_UNK func_002AA090(s32, f32, f32);               /* extern */
M2C_UNK func_002ABDE0(M2C_UNK *);                   /* extern */
extern char D_005E2FA0[];
extern char D_005E2FA8[];
extern char D_005E2FAC[];
extern char D_005E2FB0[];
extern char D_005E2FB4[];
extern char D_005E2FB8[];
extern char D_005E2FBC[];
extern char D_005E2FC0[];
extern char D_005E2FC1[];
extern char D_005E2FC2[];
extern char D_005E2FC3[];
extern char D_005E2FC4[];
extern char D_005E2FC8[];
extern char D_005E2FCC[];
extern char D_005E2FD0[];
extern char D_005E2FD4[];
extern char D_005E30D4[];
extern char D_005E30D8[];
extern char D_005E30DC[];
extern char D_005E30E1[];
extern char D_005E30E4[];
extern char D_005E3180[];
extern char D_005E3184[];
extern char D_005E3188[];
extern char D_005E318C[];
extern char D_005E318D[];
extern char D_005E3190[];
extern char D_005E3194[];
extern char D_005E3198[];
extern char D_005E319C[];
extern char D_005E31A0[];
extern char D_005E31A4[];
extern char D_005E31A8[];
extern char D_005E31AC[];
extern char D_005E31B0[];
extern char D_005E31B4[];
extern char D_005E31B8[];
extern char D_005E31BC[];
extern char D_005E3280[];
extern char D_005E3284[];
extern char D_005E3285[];
extern char D_005E3286[];
extern char D_005E3287[];

void func_002BB910(void) {
    M2C_UNK32 temp_f3;
    f32 temp_f2;
    u8 temp_a4;

    if ((*(s32 *)D_005E2FA0) & 8) {
        if (!((*(s32 *)D_005E2FA0) & 0x20)) {
            temp_a4 = (*(u8 *)D_005E3284);
            (*(s32 *)D_005E3280) |= 1 << (*(u8 *)D_005E30E1);
            if (temp_a4 != (*(u8 *)D_005E30E1)) {
                (*(u8 *)D_005E3287) = (*(u8 *)D_005E3286);
                (*(u8 *)D_005E3286) = (*(u8 *)D_005E3285);
                (*(u8 *)D_005E3284) = (*(u8 *)D_005E30E1);
                (*(u8 *)D_005E3285) = temp_a4;
            }
        }
        if ((*(f32 *)D_005E2FC8) != 0.0f) {
            func_002A9210((*(f32 *)D_005E2FC8));
        }
        if ((*(f32 *)D_005E2FCC) != 0.0f) {
            func_002A9200((*(f32 *)D_005E2FCC));
        }
        if ((*(f32 *)D_005E2FD0) != 0.0f) {
            func_002A91F0((*(f32 *)D_005E2FD0));
        }
        if ((*(s8 *)D_005E2FC2) >= 0) {
            func_002A94D0((*(s8 *)D_005E2FC2) & 0xFF);
        }
        if (!((*(f32 *)D_005E2FB4) < 0.0f)) {
            func_002A93D0((s32) (*(u8 *)D_005E2FC0), (*(f32 *)D_005E2FB4), (*(f32 *)D_005E2FB8));
        }
        if (!((*(f32 *)D_005E2FBC) < 0.0f)) {
            func_002A9450((*(f32 *)D_005E2FBC));
        }
        if (!((*(f32 *)D_005E2FAC) < 0.0f)) {
            func_002A8C00((*(f32 *)D_005E2FAC));
        }
        if ((*(s8 *)D_005E2FC3) >= 0) {
            func_002A6E40((*(s8 *)D_005E2FC3) & 0xFF);
            func_002A6DA0(1);
        }
        if ((*(s8 *)D_005E2FC4) >= 0) {
            func_002A9570((*(s8 *)D_005E2FC4) & 0xFF);
        }
        if ((*(s32 *)D_005E2FA0) & 0x10) {
            func_001A56D0(0x41C80000, 0x467A0000);
        }
        if ((*(s32 *)D_005E2FA0) & 0x4000) {
            func_002A94F0(0x100);
        }
        switch ((*(s32 *)D_005E30D4)) {                       /* irregular */
        case 0:
            break;
        case 1:
            func_002AA090((*(s32 *)D_005E30D4), (f32) (*(s32 *)D_005E30D8), (*(f32 *)D_005E30DC));
            break;
        case 2:
            func_002A9F80((*(s32 *)D_005E30D4));
            break;
        }
        func_002ABDE0(((void *)D_005E2FD4));
        temp_f2 = (*(f32 *)D_005E31A4);
        temp_f3 = (*(M2C_UNK32 *)D_005E31A0);
        (*(f32 *)D_005E31A4) = (*(f32 *)D_005E3194);
        (*(M2C_UNK32 *)D_005E31A0) = (*(M2C_UNK32 *)D_005E3190);
        (*(f32 *)D_005E31B4) = temp_f2;
        (*(M2C_UNK32 *)D_005E31B0) = temp_f3;
        (*(f32 *)D_005E31BC) = (*(f32 *)D_005E31AC);
        (*(f32 *)D_005E31B8) = (*(f32 *)D_005E31A8);
        (*(f32 *)D_005E31A8) = (*(f32 *)D_005E3198);
        (*(f32 *)D_005E31AC) = (*(f32 *)D_005E319C);
        (*(M2C_UNK32 *)D_005E3190) = (*(M2C_UNK32 *)D_005E3180);
        (*(f32 *)D_005E3194) = (*(f32 *)D_005E3184);
        (*(f32 *)D_005E3198) = (*(f32 *)D_005E3188);
        (*(f32 *)D_005E319C) = (*(f32 *)D_005E318C);
        (*(M2C_UNK32 *)D_005E3180) = (*(M2C_UNK32 *)D_005E2FA8);
        (*(f32 *)D_005E3184) = (*(f32 *)D_005E30E4);
        (*(f32 *)D_005E3188) = (*(f32 *)D_005E2FB0);
        (*(f32 *)D_005E318C) = (u8) (*(u8 *)D_005E30E1);
        (*(s8 *)D_005E318D) = (*(s8 *)D_005E2FC1);
    }
}
