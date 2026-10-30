/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207920(void *);
M2C_UNK func_002075B0(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00209540(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_0097A6D0(void *, u16);                 /* extern */
s32 func_00B62880(void *, u8);                      /* extern */
s32 func_00B63030(void *, u8);                      /* extern */
M2C_UNK func_00B66700(void *);                      /* extern */
M2C_UNK func_00B67AD0(void *);                      /* extern */
M2C_UNK func_00B67B80();                            /* extern */
s32 func_00B6CA40(void *, u8);                      /* extern */
s32 func_00B6CA90(void *, u8);                      /* extern */
s8 func_00BBB8C0(M2C_UNK);                          /* extern */
s32 func_00BF7290(void *, u8);                      /* extern */
extern char D_00591E4D[];
extern char D_00591E57[];
extern char D_00591F24[];
extern char D_0059237C[];

void func_00B66D90(void *arg0) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_v0;
    s8 var_v1;
    u16 temp_a1;
    u16 temp_v1_2;
    u8 temp_a1_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_v1;

    var_s0 = 0;
    if ((*(u8 *)D_0059237C) == 0) {
        temp_a0 = M2C_FIELD(arg0, void **, 0);
        temp_a1 = M2C_FIELD(M2C_FIELD(temp_a0, void **, 4), u16 *, 0x30);
        if ((temp_a1 != 0x489) && (temp_a1 != 0x1BF) && (temp_a1 != 0)) {
            goto block_4;
        }
        if ((M2C_FIELD(temp_a0, s32 *, 0x1C) > 0) && (M2C_FIELD(temp_a0, u8 *, 0) != (*(u8 *)D_00591E57))) {
            func_0097A6D0(temp_a0, M2C_FIELD(temp_a0, u16 *, 0x26));
            temp_a0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
            if (M2C_FIELD(temp_a0_2, u16 *, 0x30) == 0) {
                func_002075B0(temp_a0_2, 0x1BF, 0, 8);
            }
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 9;
            return;
        }
block_4:
        temp_a1_2 = M2C_FIELD(temp_a0, u8 *, 0);
        if (temp_a1_2 != (*(u8 *)D_00591E4D)) {
            goto block_5;
        }
        if (func_00BF7290(temp_a0, temp_a1_2) == 0) {
            func_00B66700(arg0);
            return;
        }
block_5:
        switch ((*(u8 *)D_00591F24)) {                       /* irregular */
        case 2:
            var_v0 = func_00B62880(arg0, (*(u8 *)D_00591F24));
block_14:
            var_s0 = var_v0;
            break;
        case 6:
            var_v0 = func_00B6CA90(arg0, (*(u8 *)D_00591F24));
            goto block_14;
        case 3:
            var_v0 = func_00B6CA40(arg0, (*(u8 *)D_00591F24));
            goto block_14;
        case 5:
            var_v0 = func_00B63030(arg0, (*(u8 *)D_00591F24));
            goto block_14;
        }
        if (var_s0 == 1) {
            func_00B67AD0(arg0);
        }
        if (var_s0 == 0) {
            temp_a0_3 = M2C_FIELD(arg0, void **, 0);
            if (M2C_FIELD(temp_a0_3, s32 *, 0x1C) <= 0) {
                M2C_FIELD(temp_a0_3, s8 *, 0x16) = 0xFD;
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0;
            } else {
                func_0097A6D0(temp_a0_3, M2C_FIELD(temp_a0_3, u16 *, 0x26));
                temp_a0_4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
                if (M2C_FIELD(temp_a0_4, u16 *, 0x30) == 0) {
                    func_002075B0(temp_a0_4, 0x1BF, 0, 8);
                }
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 9;
            }
            return;
        }
        return;
    }
    func_00B67B80();
    temp_v1 = M2C_FIELD(arg0, void **, 0);
    temp_v0 = M2C_FIELD(temp_v1, s32 *, 0x1C);
    if (temp_v0 < 0xA01) {
        if (temp_v0 <= 0) {
            M2C_FIELD(temp_v1, s8 *, 0x4E) = 0;
            var_v1 = 0x35;
        } else {
            var_v1 = 0x34;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = func_00BBB8C0(0xF);
        }
    } else {
        temp_a0_5 = M2C_FIELD(temp_v1, void **, 4);
        temp_v1_2 = M2C_FIELD(temp_a0_5, u16 *, 0x30);
        if ((temp_v1_2 != 0x2C0) && (temp_v1_2 != 0x11)) {
            func_00209540(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x2BD, func_00207920(temp_a0_5));
        }
        var_v1 = 0x33;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = func_00BBB8C0(0x14);
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4C) = var_v1;
    func_00B67AD0(arg0);
}
