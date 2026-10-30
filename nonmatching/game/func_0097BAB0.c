/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00A9DFF0(void *, s32);
extern s32 func_009B30B0(s32, s32);
M2C_UNK func_002075B0(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_00B046A0(void *, u16, u8);             /* extern */
extern char D_005926DE[];

void func_0097BAB0(void *arg0, s32 arg1) {
    s32 temp_s2;
    u16 temp_v1;
    u8 temp_a2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a3;

    temp_a3 = M2C_FIELD(arg0, void **, 4);
    if (M2C_FIELD(temp_a3, u16 *, 0x30) == 0x114) {
        M2C_FIELD(temp_a3, s8 *, 0x2D) = (s8) ((((M2C_FIELD(arg0, u16 *, 0x28) - (arg1 & 0xFFFF)) + 0x10000) & 0xFFFF) < 0x8001);
        temp_a0 = M2C_FIELD(arg0, void **, 4);
        M2C_FIELD(temp_a0, f32 *, 0x38) = (f32) (M2C_FIELD(M2C_FIELD(temp_a0, void **, 4), u8 *, 2) * 2);
        M2C_FIELD(arg0, s16 *, 0x18) = 0xB;
    }
    temp_s2 = func_009B30B0(arg1, (s32) M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF;
    if ((func_009B30B0(arg1, (s32) M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF) >= 0x68) {
        if ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x26), arg1) & 0xFFFF) < 0x41) {
            M2C_FIELD(arg0, s16 *, 0x18) = 0xA;
        }
    }
    if ((temp_s2 & 0xFFFF) < 0x19) {
        M2C_FIELD(arg0, s16 *, 0x18) = 0xA;
        return;
    }
    temp_a0_2 = M2C_FIELD(arg0, void **, 4);
    temp_v1 = M2C_FIELD(temp_a0_2, u16 *, 0x30);
    if (temp_v1 == 1) {
        func_00209A00(temp_a0_2, 1, (M2C_FIELD(M2C_FIELD(temp_a0_2, void **, 4), u8 *, 2) * 2) & 0xFFFF);
        M2C_FIELD(arg0, s16 *, 0x18) = 0xA;
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C) < 0x1701) {
        if ((temp_v1 != 0xBE) && (temp_v1 != 0xC6) && (temp_v1 != 0xB6)) {
            M2C_FIELD(temp_a0_2, u8 *, 0x2D) = (u8) ((((M2C_FIELD(arg0, u16 *, 0x28) - (arg1 & 0xFFFF)) + 0x10000) & 0xFFFF) < 0x8001);
        }
        func_002075B0(M2C_FIELD(arg0, void **, 4), 0xC8, 4, 6);
        M2C_FIELD(arg0, s16 *, 0x18) = 0xB;
        temp_a2 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D);
        M2C_FIELD(arg0, u16 *, 0x34) = (u16) (M2C_FIELD(arg0, u16 *, 0x28) + (((temp_a2 != 0) ? -1 : 1) << 0xE));
        func_00B046A0(arg0, M2C_FIELD(arg0, u16 *, 0x34), temp_a2);
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
        M2C_FIELD(arg0, u8 *, 0x41) = (u8) (*(u8 *)D_005926DE);
        M2C_FIELD(arg0, s16 *, 0x3A) = 0xFF;
        return;
    }
    if (temp_v1 == 0xC6) {
        if ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x28), arg1) & 0xFFFF) < 0x74) {
            goto block_16;
        }
    } else {
block_16:
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) = (u8) ((((M2C_FIELD(arg0, u16 *, 0x28) - (arg1 & 0xFFFF)) + 0x10000) & 0xFFFF) < 0x8001);
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C) < 0x1B01) {
        func_00209A00(M2C_FIELD(arg0, void **, 4), 0xC0, 0);
    } else {
        func_00209A00(M2C_FIELD(arg0, void **, 4), 0x39A, 0);
    }
    M2C_FIELD(arg0, s16 *, 0x38) = func_00A9DFF0(arg0, 0x5A);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg0, s16 *, 0x3A) = 0xFF;
    M2C_FIELD(arg0, u8 *, 0x41) = (u8) (*(u8 *)D_005926DE);
}
