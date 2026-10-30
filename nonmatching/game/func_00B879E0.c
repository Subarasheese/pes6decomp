/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6270(void);
extern s32 func_00207D80(void *, s32);
extern s32 func_009B3070(s32, s32);
extern void func_0027A5B0(void *, s8);
extern s32 func_009B3480(void *, f32, f32);
extern void * func_00B2A420(u32);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK, s32, void *); /* extern */
M2C_UNK func_0027A600(void *, M2C_UNK, void *);     /* extern */
s32 func_00B3AB90(void *);                          /* extern */
M2C_UNK func_00B84330(void *, s32, u16, M2C_UNK, s32, M2C_UNK); /* extern */
M2C_UNK func_00BD3BE0(void *, M2C_UNK);             /* extern */
M2C_UNK func_00BD3CF0(void *, f32, f32);            /* extern */
extern char D_00CBCAD3[];
extern char D_00CBCD10[];
extern char D_00CBCD12[];
extern char D_00CBCD14[];
extern char D_00CBCD81[];
extern char D_00CBCD8C[];
extern char D_00CBCD8D[];

void func_00B879E0(void *arg0) {
    M2C_UNK var_a1;
    s32 temp_a3;
    s32 temp_s2;
    u16 temp_a0_2;
    u16 var_a3;
    void *temp_a0;
    void *temp_a0_3;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_a4;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v0;

    temp_a0 = M2C_FIELD(arg0, void **, 0);
    temp_s0 = func_00B2A420(func_00BF6270());
    temp_s2 = func_009B3070((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x28), func_009B3480(temp_a0, M2C_FIELD(temp_a0, f32 *, 0x6C), M2C_FIELD(temp_a0, f32 *, 0x70)) & 0xFFFF) & 0xFFFF;
    func_0027A5B0(M2C_FIELD(arg0, void **, 0), (s8) M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), u8 *, 0));
    if ((temp_s2 & 0xFFFF) < 0x1000) {
        func_00BD3BE0(arg0, 3);
    } else {
        func_00BD3BE0(arg0, 2);
    }
    temp_v0 = M2C_FIELD(arg0, void **, 0);
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    if (((*(u8 *)D_00CBCD81) == 0) && (M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), u8 *, 0x4E) != 0) && (M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), u8 *, 0x52) == 1) && (func_00B3AB90(arg0) != 0)) {
        (*(u8 *)D_00CBCD81) = 1;
        (*(s8 *)D_00CBCAD3) = (*(u8 *)D_00CBCD8C) + 2;
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x52) = 1U;
    } else {
        if ((func_00207D80(M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), void **, 4), 0x98) != 0) && (M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), u16 *, 0x18) == 5)) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0;
            return;
        }
        temp_a2 = M2C_FIELD(arg0, void **, 4);
        if ((M2C_FIELD(temp_a2, u8 *, 0x52) == 1) && ((*(u8 *)D_00CBCD81) == 2)) {
            M2C_FIELD(temp_a2, s8 *, 0x50) = 1;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x66) = 0xFF;
            func_0027A600(M2C_FIELD(arg0, void **, 0), 0, temp_a2);
            (*(u8 *)D_00CBCD81) = 3;
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x52) = 0U;
            temp_a4 = M2C_FIELD(temp_s0, void **, 0);
            temp_a2_2 = M2C_FIELD(temp_a4, void **, 4);
            temp_a0_2 = M2C_FIELD(temp_a2_2, u16 *, 0x30);
            switch (temp_a0_2) {                    /* irregular */
            case 0x4FF:
                var_a3 = (*(u16 *)D_00CBCD10);
                var_a1 = 0x500;
block_28:
                temp_a3 = var_a3 * ((M2C_FIELD(temp_a2_2, u8 *, 0x2D) != 0) ? -1 : 1);
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x26) = (u16) (M2C_FIELD(temp_a4, u16 *, 0x26) + temp_a3);
                temp_a0_3 = M2C_FIELD(arg0, void **, 0);
                M2C_FIELD(temp_a0_3, u16 *, 0x28) = (u16) M2C_FIELD(temp_a0_3, u16 *, 0x26);
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x66) = 0xFF;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), u8 *, 0x2D) = (u8) M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), void **, 4), u8 *, 0x2D);
                func_00209A00(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), var_a1, 0, temp_a3, temp_a4);
                func_00207390(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0xA);
                temp_s0_2 = M2C_FIELD(arg0, void **, 0);
                func_00B84330(arg0, func_00BF6270() & 0xFF, M2C_FIELD(temp_s0_2, u16 *, 0x26), 0, (M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_s0_2, void **, 4), void **, 4), u16 *, 8) * 2) & 0xFFFF, 0);
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x13;
                break;
            case 0x4FD:
                var_a3 = (*(u16 *)D_00CBCD12);
                var_a1 = 0x4FE;
                goto block_28;
            case 0x4FC:
                var_a3 = (*(u16 *)D_00CBCD14);
                var_a1 = 0x501;
                goto block_28;
            case 0x558:
                var_a3 = (*(u16 *)D_00CBCD14);
                var_a1 = 0x556;
                goto block_28;
            case 0x559:
                var_a3 = (*(u16 *)D_00CBCD12);
                var_a1 = 0x557;
                goto block_28;
            case 0x55F:
                var_a3 = (*(u16 *)D_00CBCD10);
                var_a1 = 0x560;
                goto block_28;
            }
        } else if (((*(u8 *)D_00CBCD81) == 0) && ((u32) M2C_FIELD(temp_a2, u32 *, 0x34) < 0x20U) && ((*(u8 *)D_00CBCD81) == 0xFF)) {
            M2C_FIELD(temp_a2, s8 *, 0x51) = 0xFF;
            (*(u8 *)D_00CBCD8D) -= 1;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x7D;
        }
    }
}
