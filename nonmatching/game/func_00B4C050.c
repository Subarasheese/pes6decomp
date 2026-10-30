/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00207BE0(void *);
extern u8 func_00BF6260(void);
extern s32 func_00207D10(void *);
M2C_UNK func_002075B0(void *, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00208610(void *, u16);                 /* extern */
M2C_UNK func_00B2ACF0(void **);                     /* extern */
M2C_UNK func_00B4A420(void **);                     /* extern */
s32 func_00BB1310(M2C_UNK);                         /* extern */
extern char Pes6MatchPlayers[];
extern char D_00CBCB37[];

void func_00B4C050(void **arg0) {
    s32 temp_a0;
    s32 temp_a0_3;
    s32 temp_a0_5;
    s32 temp_a0_7;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_a3_4;
    s32 var_a0;
    u16 temp_a1_5;
    u8 temp_a0_2;
    u8 temp_a0_4;
    u8 temp_a0_6;
    u8 temp_a0_8;
    u8 temp_a1;
    u8 temp_a1_2;
    u8 temp_a1_3;
    u8 temp_a1_4;
    void *temp_a0_9;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_a2_3;
    void *temp_a2_4;
    void *temp_s0;

    if (func_00BF6260() != 0xFF) {
        var_a0 = func_00BF6260() % 23;
    } else {
        var_a0 = 1;
    }
    temp_s0 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
    func_00B2ACF0(arg0);
    func_00207BE0(M2C_FIELD(*arg0, void **, 4));
    temp_a0 = func_00BB1310(0x3C) & 0xFFFF;
    if (((*(u8 *)D_00CBCB37) == 0x1C) && (M2C_FIELD(M2C_FIELD(*arg0, void **, 4), u16 *, 0x30) == 0x40B) && (M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), u16 *, 0x30) == temp_a0)) {
        temp_a2 = *arg0;
        temp_a3 = func_00BB1310(0x3D) & 0xFFFF;
        temp_a1 = M2C_FIELD(temp_s0, u8 *, 0);
        temp_a0_2 = M2C_FIELD(temp_a2, u8 *, 0);
        if ((s32) temp_a0_2 >= (s32) temp_a1) {
            goto block_7;
        }
        if (!(M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), f32 *, 0x38) < 68.0f)) {
            func_002075B0(M2C_FIELD(temp_a2, void **, 4), temp_a3 & 0xFFFF, 0, 8);
        } else {
block_7:
            if (((s32) temp_a1 < (s32) temp_a0_2) && !(M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), f32 *, 0x38) <= 68.0f)) {
                func_002075B0(M2C_FIELD(temp_a2, void **, 4), temp_a3 & 0xFFFF, 0, 8);
            }
        }
    }
    temp_a0_3 = func_00BB1310(0x3E) & 0xFFFF;
    if (((*(u8 *)D_00CBCB37) == 0x1D) && (M2C_FIELD(M2C_FIELD(*arg0, void **, 4), u16 *, 0x30) == 0x48E) && (M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), u16 *, 0x30) == temp_a0_3)) {
        temp_a2_2 = *arg0;
        temp_a3_2 = func_00BB1310(0x3F) & 0xFFFF;
        temp_a1_2 = M2C_FIELD(temp_s0, u8 *, 0);
        temp_a0_4 = M2C_FIELD(temp_a2_2, u8 *, 0);
        if ((s32) temp_a0_4 >= (s32) temp_a1_2) {
            goto block_14;
        }
        if (!(M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), f32 *, 0x38) < 100.0f)) {
            func_002075B0(M2C_FIELD(temp_a2_2, void **, 4), temp_a3_2 & 0xFFFF, 0, 8);
        } else {
block_14:
            if (((s32) temp_a1_2 < (s32) temp_a0_4) && !(M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), f32 *, 0x38) <= 100.0f)) {
                func_002075B0(M2C_FIELD(temp_a2_2, void **, 4), temp_a3_2 & 0xFFFF, 0, 8);
            }
        }
    }
    temp_a0_5 = func_00BB1310(0x38) & 0xFFFF;
    if (((*(u8 *)D_00CBCB37) == 0x1E) && (M2C_FIELD(M2C_FIELD(*arg0, void **, 4), u16 *, 0x30) == 0x48E) && (M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), u16 *, 0x30) == temp_a0_5)) {
        temp_a2_3 = *arg0;
        temp_a3_3 = func_00BB1310(0x39) & 0xFFFF;
        temp_a1_3 = M2C_FIELD(temp_s0, u8 *, 0);
        temp_a0_6 = M2C_FIELD(temp_a2_3, u8 *, 0);
        if ((s32) temp_a0_6 >= (s32) temp_a1_3) {
            goto block_21;
        }
        if (!(M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), f32 *, 0x38) < 56.0f)) {
            func_002075B0(M2C_FIELD(temp_a2_3, void **, 4), temp_a3_3 & 0xFFFF, 0, 8);
        } else {
block_21:
            if (((s32) temp_a1_3 < (s32) temp_a0_6) && !(M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), f32 *, 0x38) <= 56.0f)) {
                func_002075B0(M2C_FIELD(temp_a2_3, void **, 4), temp_a3_3 & 0xFFFF, 0, 8);
            }
        }
    }
    temp_a0_7 = func_00BB1310(0x3A) & 0xFFFF;
    if (((*(u8 *)D_00CBCB37) == 0x1F) && (M2C_FIELD(M2C_FIELD(*arg0, void **, 4), u16 *, 0x30) == 0x48E) && (M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), u16 *, 0x30) == temp_a0_7)) {
        temp_a2_4 = *arg0;
        temp_a3_4 = func_00BB1310(0x3B) & 0xFFFF;
        temp_a1_4 = M2C_FIELD(temp_s0, u8 *, 0);
        temp_a0_8 = M2C_FIELD(temp_a2_4, u8 *, 0);
        if ((s32) temp_a0_8 >= (s32) temp_a1_4) {
            goto block_28;
        }
        if (!(M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), f32 *, 0x38) < 80.0f)) {
            func_002075B0(M2C_FIELD(temp_a2_4, void **, 4), temp_a3_4 & 0xFFFF, 0, 8);
        } else {
block_28:
            if (((s32) temp_a1_4 < (s32) temp_a0_8) && !(M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), f32 *, 0x38) <= 80.0f)) {
                func_002075B0(M2C_FIELD(temp_a2_4, void **, 4), temp_a3_4 & 0xFFFF, 0, 8);
            }
        }
    }
    if (func_00207D10(M2C_FIELD(*arg0, void **, 4)) != 0) {
        temp_a0_9 = M2C_FIELD(*arg0, void **, 4);
        temp_a1_5 = M2C_FIELD(temp_a0_9, u16 *, 0x30);
        if ((temp_a1_5 != 0x48E) && (temp_a1_5 != 0x40B)) {
            func_00208610(temp_a0_9, temp_a1_5);
            M2C_FIELD(*arg0, s8 *, 0x66) = 0;
            func_00B4A420(arg0);
        }
    }
}
