/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00B364C0(void);
extern u8 func_00BF6270(void);
f32 func_001CD9E0(f32);                             /* extern */
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_009B33A0(void *, s32, s32);                /* extern */
void **func_00B2A420(u8);                           /* extern */
s32 func_00B36450();                                /* extern */
s32 func_00B3B1F0(void *);                          /* extern */
M2C_UNK func_00B84330(void *, s32, u16, M2C_UNK, s32, M2C_UNK); /* extern */
M2C_UNK func_00B897B0(void *);                      /* extern */
M2C_UNK func_00B89C70(void *);                      /* extern */
M2C_UNK func_00B93FA0(void *);                      /* extern */
M2C_UNK func_00BD3CF0(void *, f32, f32);            /* extern */
extern char D_00591BEC[];
extern char D_00CBCB14[];
extern char D_00CBCD70[];
extern char D_00CBCD81[];

void func_00B92950(void *arg0) {
    f32 temp_f1;
    f32 var_f12;
    f32 var_f3;
    s32 temp_f0;
    s32 temp_v0_2;
    s32 var_s2;
    u16 temp_s0_2;
    void **temp_s0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v0;

    temp_s0 = func_00B2A420(func_00BF6270());
    temp_v0 = M2C_FIELD(arg0, void **, 0);
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    temp_a0 = M2C_FIELD(arg0, void **, 0);
    temp_v0_2 = func_009B33A0(temp_a0, (s32) M2C_FIELD(temp_a0, f32 *, 0x6C), (s32) M2C_FIELD(temp_a0, f32 *, 0x70));
    if (temp_v0_2 < 0) {
        var_f12 = 2.0f * (f32) (((u32) temp_v0_2 >> 1) | (temp_v0_2 & 1));
    } else {
        var_f12 = (f32) temp_v0_2;
    }
    temp_f0 = (s32) func_001CD9E0(var_f12);
    if (temp_f0 < 0) {
        var_f3 = 2.0f * (f32) (((u32) temp_f0 >> 1) | (temp_f0 & 1));
    } else {
        var_f3 = (f32) temp_f0;
    }
    temp_f1 = (var_f3 * (*(f32 *)D_00591BEC)) / 6400.0f;
    if (temp_f1 >= 2.1474836e9f) {
        var_s2 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
    } else {
        var_s2 = (s32) temp_f1;
    }
    if ((*(u8 *)D_00CBCD81) == 0) {
        if (func_00B36450() != 0) {
            if ((u32) var_s2 < 0x23U) {
                (*(u8 *)D_00CBCD81) = 1;
            }
            goto block_21;
        }
        if ((u32) (*(u32 *)D_00CBCB14) >= 0x401U) {
            func_00B89C70(arg0);
            (*(u8 *)D_00CBCD81) = 0xFF;
            return;
        }
        goto block_21;
    }
block_21:
    if ((func_00B364C0() == 2) && (M2C_FIELD(*temp_s0, u8 *, 0x4E) != 0) && (func_00B3B1F0(arg0) != 0)) {
        (*(u8 *)D_00CBCD81) = 2;
        func_00B897B0(arg0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x26) = (u16) M2C_FIELD(*temp_s0, u16 *, 0x26);
        temp_a0_2 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_a0_2, u16 *, 0x28) = (u16) M2C_FIELD(temp_a0_2, u16 *, 0x26);
        M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), u8 *, 0x2D) = (u8) M2C_FIELD(M2C_FIELD(*temp_s0, void **, 4), u8 *, 0x2D);
        temp_s0_2 = (*(u16 *)D_00CBCD70);
        func_00209A00(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x59B, 0);
        func_00207390(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0xA);
        func_00B84330(arg0, func_00BF6270() & 0xFF, M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x26), 0, temp_s0_2 & 0xFFFF, 0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x2A;
    } else if ((M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x44) & 0x80) || ((*(u8 *)D_00CBCD81) == 0xFF)) {
        (*(u8 *)D_00CBCD81) = 0xFF;
        func_00B89C70(arg0);
        func_00B93FA0(arg0);
    }
}
