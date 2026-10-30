/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
extern void func_00B364E0(void);
extern void func_00B364D0(u32);
extern s32 func_00207D10(void *);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00208610(void *);                      /* extern */
M2C_UNK func_00209A00(void *, u16, u16);            /* extern */
void *func_00B2A420(u8);                            /* extern */
M2C_UNK func_00B2ACF0();                            /* extern */
M2C_UNK func_00B84580(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_00B9E5D0(void *);                      /* extern */
extern char D_00C9E2D8[];
extern char D_00C9E2DC[];
extern char D_00C9E2E0[];
extern char D_00C9E2E4[];
extern char D_00CBCAD1[];
extern char D_00CBCAD2[];
extern char D_00CBCAD3[];
extern char D_00CBCAF4[];
extern char D_00CBCAF8[];
extern char D_00CBCAFC[];
extern char D_00CBCAFE[];
extern char D_00CBCB00[];
extern char D_00CBCB04[];
extern char D_00CBCD81[];
extern char D_00CBCD83[];
extern char D_00CBCD8D[];

void func_00B88530(void *arg0) {
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    u16 var_a1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_s0;
    void *temp_v1;
    void *temp_v1_2;

    sp38 = (*(s32 *)D_00C9E2D8);
    sp3C = (*(s32 *)D_00C9E2DC);
    sp30 = (*(s32 *)D_00C9E2E0);
    sp34 = (*(s32 *)D_00C9E2E4);
    func_00B2ACF0();
    if ((s32) (*(u8 *)D_00CBCD8D) > 0) {
        temp_a0 = M2C_FIELD(arg0, void **, 0);
        temp_s0 = func_00B2A420((*(u8 *)D_00CBCD83));
        if (M2C_FIELD(temp_a0, u8 *, 0x4E) == 0) {
            if ((u32) M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), u32 *, 0x34) >= 0x18U) {
                if (func_00207D80(M2C_FIELD(temp_a0, void **, 4), sp38) != 0) {
                    func_00209A00(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x528U, (u16) sp3C);
                }
            } else {
                M2C_FIELD(temp_a0, u8 *, 0x4E) = 1U;
            }
        } else if (func_00207D80(M2C_FIELD(temp_a0, void **, 4), sp3C) != 0) {
            temp_v1 = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(temp_v1, u8 *, 0x4E) = (u8) (M2C_FIELD(temp_v1, u8 *, 0x4E) - 1);
            if ((u32) M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), u32 *, 0x34) < 0x20U) {
                func_00209A00(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x528U, (u16) sp38);
                temp_v1_2 = M2C_FIELD(arg0, void **, 0);
                M2C_FIELD(temp_v1_2, u8 *, 0x4E) = (u8) (M2C_FIELD(temp_v1_2, u8 *, 0x4E) + 1);
            }
        }
    }
    if (func_00207D80(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), sp34) != 0) {
        temp_a0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
        func_00209A00(temp_a0_2, M2C_FIELD(temp_a0_2, u16 *, 0x30), (u16) sp30);
    }
    if (func_00207D80(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), sp3C) != 0) {
        (*(u8 *)D_00CBCAD1) = 5;
        func_00B364E0();
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0x4E) = 0U;
    } else if (func_00207D80(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), sp30) == 0) {
        if (func_00207D10(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4)) != 0) {
            func_00208610(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4));
            func_00B9E5D0(arg0);
        }
    } else {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0x4E) = 1U;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x14;
    }
    if ((*(u8 *)D_00CBCD81) == 1) {
        (*(u8 *)D_00CBCD81) = 2;
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x50) = 1;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x66) = 0xFF;
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 6) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0xE) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0) = 0;
        (*(f32 *)D_00CBCB00) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0xE0);
        (*(f32 *)D_00CBCB04) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0xE8);
        (*(u16 *)D_00CBCAFE) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x26);
        (*(f32 *)D_00CBCAF4) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0xE0);
        (*(f32 *)D_00CBCAF8) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0xE8);
        (*(u16 *)D_00CBCAFC) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x26);
        (*(s8 *)D_00CBCAD2) = 0;
        func_00B364D0(2U);
        if ((*(u8 *)D_00CBCAD1) == 5) {
            switch ((*(u8 *)D_00CBCAD3)) {                   /* switch 1; irregular */
            case 2:                                 /* switch 1 */
                var_a1 = 0x55F;
                break;
            case 3:                                 /* switch 1 */
                var_a1 = 0x559;
                break;
            case 4:                                 /* switch 1 */
                var_a1 = 0x558;
                break;
            }
        } else {
            switch ((*(u8 *)D_00CBCAD3)) {                   /* switch 2; irregular */
            case 2:                                 /* switch 2 */
                var_a1 = 0x4FF;
                break;
            case 3:                                 /* switch 2 */
                var_a1 = 0x4FD;
                break;
            case 4:                                 /* switch 2 */
                var_a1 = 0x4FC;
                break;
            }
        }
        func_00209A00(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), var_a1, 0U);
        func_00207390(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 8);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x66) = 0xFF;
        func_00B84580(arg0, 0, (M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), void **, 4), u16 *, 8) * 2) & 0xFFFF);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x11;
    }
    /* bug: did not emit code for node #47; contents below: */
    var_a1 = 0x2ED;
}
