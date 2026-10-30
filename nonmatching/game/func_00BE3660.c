/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B364D0(u32);
extern u8 func_00BF6270(void);
extern s32 func_0017F900(void);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_009B3070(u16, u16);                        /* extern */
u32 func_009B33A0(void *, s32, s32);                /* extern */
s32 func_00B35C60();                                /* extern */
M2C_UNK func_00B83FF0(u16, s8, f32 *, f32, f32, f32, f32, M2C_UNK); /* extern */
M2C_UNK func_00B84330(void *, s32, u16, s32, s32, M2C_UNK); /* extern */
M2C_UNK func_00BA9850(s32, M2C_UNK, void *);        /* extern */
M2C_UNK func_00BD3BA0(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00BD3BE0(void *, M2C_UNK);             /* extern */
M2C_UNK func_00BD3CF0(void *, f32, f32);            /* extern */
M2C_UNK func_00BE2800(void *);                      /* extern */
M2C_UNK func_00BE83E0(void *, M2C_UNK, f32, f32, f32, f32); /* extern */
extern char D_00CBCAFE[];
extern char D_00CBCB00[];
extern char D_00CBCB04[];
extern char D_00CBCB1C[];
extern char D_00CBCC70[];
extern char D_00CBCC90[];
extern char D_00CBCCB0[];
extern char D_00CBCCD0[];
extern char D_00CBCCF0[];
extern char D_00CBCD70[];

void func_00BE3660(void *arg0) {
    f32 sp58;
    f32 sp5C;
    s32 temp_a3;
    s8 temp_s2;
    u16 temp_s0_2;
    u32 temp_s0;
    void *temp_a1;
    void *temp_v0;
    void *temp_v1;

    temp_s2 = func_00B35C60() & 0xFF;
    func_00B83FF0((*(u16 *)D_00CBCAFE), temp_s2, &sp58, (*(f32 *)D_00CBCB00), (*(f32 *)D_00CBCB04), (*(f32 *)D_00CBCCD0), (*(f32 *)D_00CBCCF0), 0x42C80000);
    func_00BE83E0(M2C_FIELD(arg0, void **, 0), 0x64, (*(f32 *)D_00CBCB00), (*(f32 *)D_00CBCB04), sp58, sp5C);
    temp_v0 = M2C_FIELD(arg0, void **, 0);
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    temp_s0 = func_009B33A0(M2C_FIELD(arg0, void **, 0), (s32) sp58, (s32) sp5C);
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0x4E) != 0) {
        goto block_1;
    }
    if (func_0017F900() != 0) {
        func_00BA9850((*(s32 *)D_00CBCB1C), 0, arg0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0x4E) = 1U;
    } else {
block_1:
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0xC) != 4) {
            goto block_2;
        }
        if (temp_s0 < 0x640000U) {
            func_00BD3BE0(arg0, 3);
            func_00BD3BA0(arg0, 5, 0);
        } else {
block_2:
            temp_a1 = M2C_FIELD(arg0, void **, 0);
            if ((M2C_FIELD(temp_a1, u8 *, 0x4E) == 1) && !(fabsf(M2C_FIELD(temp_a1, f32 *, 0xE8)) < fabsf(sp5C)) && ((func_009B3070(M2C_FIELD(temp_a1, u16 *, 0x26), (*(u16 *)D_00CBCAFE)) & 0xFFFF) < 0x1001)) {
                temp_s0_2 = (*(u16 *)D_00CBCD70);
                func_00B364D0(2U);
                func_00209A00(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x59E, 0);
                func_00207390(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0xA);
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), s8 *, 0x2D) = temp_s2;
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x26) = (u16) (*(u16 *)D_00CBCAFE);
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0xBB;
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x66) = 0xFF;
                (*(s32 *)D_00CBCC90) = 0xC3000000;
                (*(f32 *)D_00CBCC70) = (*(f32 *)D_00CBCB00);
                (*(f32 *)D_00CBCCB0) = (*(f32 *)D_00CBCB04);
                temp_a3 = temp_s0_2 & 0xFFFF;
                func_00B84330(arg0, func_00BF6270() & 0xFF, M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x26), temp_a3, temp_a3, 0);
            } else if ((temp_s0 < 0x190000U) && ((temp_v1 = M2C_FIELD(arg0, void **, 0), (M2C_FIELD(temp_v1, u8 *, 0x4E) == 0)) || ((func_009B3070(M2C_FIELD(temp_v1, u16 *, 0x26), (*(u16 *)D_00CBCAFE)) & 0xFFFF) >= 0x1001))) {
                func_00BE2800(arg0);
            }
        }
    }
}
