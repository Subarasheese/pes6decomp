/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00B37310(void);
M2C_UNK func_002075B0(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
void **func_00B2A420(s32);                          /* extern */
M2C_UNK func_00B37330(u8, void *);                  /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
extern char D_00591BE4[];
extern char D_00CBCB14[];
extern char D_00CBCB18[];

void func_00BB9760(void *arg0) {
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    s32 temp_a0;
    s32 temp_a0_2;
    s8 var_v1;
    u8 temp_a0_3;
    u8 temp_v0;
    u8 temp_v1;
    void **var_v0_2;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *var_v0;

    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C);
    if ((temp_v1 != 0x2C) && (temp_v1 != 0x2D) && (temp_v1 != 0x14) && (temp_v1 != 0x15) && (temp_v1 != 0x16) && (temp_v1 != 0x3A)) {
        temp_a1 = M2C_FIELD(arg0, void **, 0);
        temp_a0 = M2C_FIELD(temp_a1, u16 *, 0x26) - M2C_FIELD(temp_a1, u16 *, 0x2C);
        if (temp_a0 != 0) {
            var_v0 = M2C_FIELD(temp_a1, void **, 4);
            var_v1 = ((temp_a0 + 0x10000) & 0xFFFF) < 0x8001;
            goto block_11;
        }
    } else if (temp_v1 == 0x3A) {
        temp_a1_2 = M2C_FIELD(arg0, void **, 0);
        temp_a0_2 = M2C_FIELD(temp_a1_2, u16 *, 0x26) - M2C_FIELD(temp_a1_2, u16 *, 0x2C);
        if (temp_a0_2 != 0) {
            var_v0 = M2C_FIELD(temp_a1_2, void **, 4);
            var_v1 = ((temp_a0_2 + 0x10000) & 0xFFFF) >= 0x8001;
block_11:
            M2C_FIELD(var_v0, s8 *, 0x2D) = var_v1;
        }
    }
    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C);
    switch (temp_v0) {                              /* irregular */
    case 0x39:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x44B, 0, 8);
        break;
    case 0x3A:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x1A8, 0, 8);
        break;
    case 0x2F:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x45D, 0, 8);
        break;
    case 0x2E:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x442, 0, 8);
        break;
    case 0x2D:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x590, 0, 8);
        break;
    case 0x2C:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x591, 0, 8);
        break;
    case 0x2B:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x48B, 0, 8);
        break;
    case 0x2A:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x405, 0, 8);
        break;
    case 0x27:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x3FD, 0, 8);
        break;
    case 0x26:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x3FC, 0, 8);
        break;
    case 0x29:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x470, 0, 8);
        break;
    case 0x28:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x58B, 0, 8);
        break;
    case 0x25:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x3F9, 0, 8);
        break;
    case 0x24:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x3F5, 0, 8);
        break;
    case 0x23:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x4B2, 0, 8);
        break;
    case 0x21:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x4A4, 0, 8);
        break;
    case 0x20:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x445, 0, 8);
        break;
    case 0x1F:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x441, 0, 8);
        break;
    case 0x1A:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x4AA, 0, 8);
        break;
    case 0x19:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x43F, 0, 8);
        break;
    case 0x18:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x43D, 0, 8);
        break;
    case 0x16:
        temp_v0_2 = M2C_FIELD(arg0, void **, 0);
        temp_f2 = M2C_FIELD(temp_v0_2, f32 *, 0xE0);
        if (!(temp_f2 < 0.0f)) {
            if (M2C_FIELD(temp_v0_2, f32 *, 0xE8) < 0.0f) {
                goto block_159;
            }
            goto block_161;
        }
block_159:
        if ((temp_f2 < 0.0f) && (M2C_FIELD(temp_v0_2, f32 *, 0xE8) < 0.0f)) {
block_161:
            M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 4), s8 *, 0x2D) = 1;
        } else {
            M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 4), s8 *, 0x2D) = 0;
        }
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x491, 0, 8);
        break;
    case 0x15:
        temp_v0_3 = M2C_FIELD(arg0, void **, 0);
        temp_f2_2 = M2C_FIELD(temp_v0_3, f32 *, 0xE0);
        if (!(temp_f2_2 < 0.0f)) {
            if (M2C_FIELD(temp_v0_3, f32 *, 0xE8) < 0.0f) {
                goto block_152;
            }
            goto block_154;
        }
block_152:
        if ((temp_f2_2 < 0.0f) && (M2C_FIELD(temp_v0_3, f32 *, 0xE8) < 0.0f)) {
block_154:
            M2C_FIELD(M2C_FIELD(temp_v0_3, void **, 4), s8 *, 0x2D) = 1;
        } else {
            M2C_FIELD(M2C_FIELD(temp_v0_3, void **, 4), s8 *, 0x2D) = 0;
        }
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x492, 0, 8);
        break;
    case 0x14:
        temp_v0_4 = M2C_FIELD(arg0, void **, 0);
        temp_f2_3 = M2C_FIELD(temp_v0_4, f32 *, 0xE0);
        if (!(temp_f2_3 < 0.0f)) {
            if (M2C_FIELD(temp_v0_4, f32 *, 0xE8) < 0.0f) {
                goto block_145;
            }
            goto block_147;
        }
block_145:
        if ((temp_f2_3 < 0.0f) && (M2C_FIELD(temp_v0_4, f32 *, 0xE8) < 0.0f)) {
block_147:
            M2C_FIELD(M2C_FIELD(temp_v0_4, void **, 4), s8 *, 0x2D) = 1;
        } else {
            M2C_FIELD(M2C_FIELD(temp_v0_4, void **, 4), s8 *, 0x2D) = 0;
        }
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x493, 0, 8);
        break;
    case 0x12:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x42F, 0, 8);
        break;
    case 0x11:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x4A5, 0, 8);
        break;
    case 0xF:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x42D, 0, 8);
        break;
    case 0xE:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x478, 0, 8);
        break;
    case 0xD:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x4A7, 0, 8);
        break;
    case 0xC:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x427, 0, 8);
        break;
    case 0xB:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x463, 0, 8);
        break;
    case 0xA:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x426, 0, 8);
        break;
    case 0x9:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x4A6, 0, 8);
        break;
    case 0x8:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x425, 0, 8);
        break;
    case 0x7:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x424, 0, 8);
        break;
    case 0x4:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x49A, 0, 8);
        break;
    case 0x3:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x41D, 0, 8);
        break;
    case 0x2:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x41C, 0, 8);
        break;
    }
    if (((func_00B37310() & 0xFF) < 0x18) && (func_00B37310() & 0xFF)) {
        var_v0_2 = func_00B2A420(func_00B37310() & 0xFF);
    } else {
        var_v0_2 = func_00B2A420(0);
    }
    temp_a0_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C);
    if ((temp_a0_3 == 7) || (temp_a0_3 == 4) || (temp_a0_3 == 0x25) || (temp_a0_3 == 0x24)) {
        if ((func_00BBB8C0(0x64) < 0x1F) && ((u32) (*(u32 *)D_00CBCB14) < (u32) ((*(s32 *)D_00CBCB18) - ((*(u8 *)D_00591BE4) * 4)))) {
            temp_a1_3 = M2C_FIELD(arg0, void **, 0);
            if (M2C_FIELD(temp_a1_3, u8 *, 0x13) != M2C_FIELD(*var_v0_2, u8 *, 0x13)) {
                func_00B37330(M2C_FIELD(temp_a1_3, u8 *, 0), temp_a1_3);
            }
        }
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x6F;
}
