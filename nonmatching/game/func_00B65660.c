/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001C02F0(s32);                             /* extern */
M2C_UNK func_002075B0(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_009B3070(u16, u16, void *);                /* extern */
extern char D_00591F24[];

void func_00B65660(void *arg0) {
    s16 var_a0;
    s32 temp_a1;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    u8 temp_a0;
    u8 temp_a0_3;
    void *temp_a0_2;
    void *temp_a2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_a2 = M2C_FIELD(arg0, void **, 0);
    temp_a1 = M2C_FIELD(temp_a2, u16 *, 0x26) - M2C_FIELD(temp_a2, u16 *, 0x2C);
    if (temp_a1 != 0) {
        M2C_FIELD(M2C_FIELD(temp_a2, void **, 4), s8 *, 0x2D) = (s8) (((temp_a1 + 0x10000) & 0xFFFF) < 0x8001);
    }
    temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C);
    switch (temp_a0) {                              /* irregular */
    case 0x36:
        temp_v0 = M2C_FIELD(arg0, void **, 0);
        var_v1 = 1;
        if (!((f32) func_001C02F0(func_009B3070(M2C_FIELD(temp_v0, u16 *, 0x26), M2C_FIELD(temp_v0, u16 *, 0x2C), temp_a2) & 0xFFFF) < 18204.445f)) {
            var_v1 = 0;
        }
        if (var_v1 == 0) {
            func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x461, 0, 8);
        } else {
            func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x45F, 0, 8);
        }
        break;
    case 0x35:
        temp_v0_2 = M2C_FIELD(arg0, void **, 0);
        var_v1_2 = 1;
        if (!((f32) func_001C02F0(func_009B3070(M2C_FIELD(temp_v0_2, u16 *, 0x26), M2C_FIELD(temp_v0_2, u16 *, 0x2C), temp_a2) & 0xFFFF) < 18204.445f)) {
            var_v1_2 = 0;
        }
        if (var_v1_2 == 0) {
            func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x460, 0, 8);
        } else {
            func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x45E, 0, 8);
        }
        break;
    case 0x33:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x40F, 0, 8);
        break;
    case 0x19:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x440, 0, 8);
        break;
    case 0x14:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x439, 0, 8);
        break;
    case 0x12:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x42E, 0, 8);
        break;
    case 0x9:
        temp_v0_3 = M2C_FIELD(arg0, void **, 0);
        var_v1_3 = 1;
        if (!((f32) func_001C02F0(func_009B3070(M2C_FIELD(temp_v0_3, u16 *, 0x26), M2C_FIELD(temp_v0_3, u16 *, 0x2C), temp_a2) & 0xFFFF) < 18204.445f)) {
            var_v1_3 = 0;
        }
        if (var_v1_3 == 0) {
            func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x41F, 0, 8);
        } else {
            func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x420, 0, 8);
        }
        break;
    case 0x8:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x41E, 0, 8);
        break;
    case 0x5:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x418, 0, 8);
        break;
    case 0x4:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x417, 0, 8);
        break;
    }
    if (((*(u8 *)D_00591F24) != 5) && ((*(u8 *)D_00591F24) != 3) && ((*(u8 *)D_00591F24) != 6) && ((*(u8 *)D_00591F24) != 2)) {
        temp_a0_2 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_a0_2, u16 *, 0x18) = (u16) (M2C_FIELD(temp_a0_2, u16 *, 0x18) + 1);
    } else {
        temp_a0_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C);
        if ((temp_a0_3 != 0x36) && (temp_a0_3 != 0x35) && (temp_a0_3 != 9)) {
            var_a0 = 0x11;
        } else {
            var_a0 = 0x12;
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = var_a0;
    }
}
