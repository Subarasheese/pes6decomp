/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D10(void *);
extern void func_00207BE0(void *);
extern s32 func_00C01090(s32);
M2C_UNK func_002075B0(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00208610(void *);                      /* extern */
M2C_UNK func_00209A00(void *, u16, M2C_UNK);        /* extern */
M2C_UNK func_00B2ACF0();                            /* extern */
s32 func_00BBB990(u16, M2C_UNK);                    /* extern */
s32 func_00BBB9C0(u16, M2C_UNK);                    /* extern */
M2C_UNK func_00BD4040(void *, M2C_UNK);             /* extern */
extern char Pes6MatchPlayers[];

void func_00B562C0(void *arg0) {
    s16 var_a0;
    u16 temp_a0_4;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a1;
    void *temp_s0;
    void *temp_s0_2;

    func_00B2ACF0();
    func_00207BE0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4));
    if (func_00C01090(0xD) == 0) {
        if (func_00C01090(0x10) == 0) {
            temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
            if ((M2C_FIELD(temp_a0, u16 *, 0x30) == 0x48E) && (M2C_FIELD(M2C_FIELD(((void *)Pes6MatchPlayers), void **, 4), u16 *, 0x30) == 0x5A2)) {
                func_00209A00(temp_a0, 0x5A9U, 0);
                M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x3E) = 0x47CU;
            }
            temp_a0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
            if ((M2C_FIELD(temp_a0_2, u16 *, 0x30) == 0x2B4) && (M2C_FIELD(M2C_FIELD(((void *)Pes6MatchPlayers), void **, 4), u16 *, 0x30) == 0x5A3) && !(M2C_FIELD(M2C_FIELD(((void *)Pes6MatchPlayers), void **, 4), f32 *, 0x38) < 24.0f)) {
                func_00209A00(temp_a0_2, M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x3E), 0);
            }
        } else {
            goto block_3;
        }
    } else {
block_3:
        temp_a0_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
        if ((M2C_FIELD(temp_a0_3, u16 *, 0x30) == 0x48E) && (M2C_FIELD(M2C_FIELD(((void *)Pes6MatchPlayers), void **, 4), u16 *, 0x30) == 0x5A2)) {
            func_002075B0(temp_a0_3, 0x5A1, 0, 8);
        }
    }
    if (func_00207D10(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4)) != 0) {
        temp_a1 = M2C_FIELD(arg0, void **, 0);
        temp_a0_4 = M2C_FIELD(M2C_FIELD(temp_a1, void **, 4), u16 *, 0x30);
        if ((temp_a0_4 != 0x48E) && (temp_a0_4 != 0x2B4)) {
            M2C_FIELD(temp_a1, u16 *, 0x2C) = (u16) M2C_FIELD(temp_a1, u16 *, 0x26);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x66) = 0;
            if ((func_00C01090(0xF) != 0) && (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x3E) == 0x47C)) {
                func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x47C, 0, 8);
                var_a0 = 7;
            } else {
                func_00208610(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4));
                temp_s0 = M2C_FIELD(arg0, void **, 0);
                M2C_FIELD(temp_s0, f32 *, 0x6C) = (f32) (M2C_FIELD(temp_s0, f32 *, 0xE0) + (f32) func_00BBB990(M2C_FIELD(temp_s0, u16 *, 0x26), 0x800));
                temp_s0_2 = M2C_FIELD(arg0, void **, 0);
                M2C_FIELD(temp_s0_2, f32 *, 0x70) = (f32) (M2C_FIELD(temp_s0_2, f32 *, 0xE8) + (f32) func_00BBB9C0(M2C_FIELD(temp_s0_2, u16 *, 0x26), 0x800));
                M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4C) = 0xFF;
                func_00BD4040(arg0, 1);
                var_a0 = 4;
            }
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = var_a0;
        }
    }
}
