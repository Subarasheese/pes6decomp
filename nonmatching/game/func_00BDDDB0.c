/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_00BDC580(void);
extern s32 func_00BDC570(void);
extern void func_001A58E0(void *, signed char);
extern s32 func_00BDC590(void);
extern s32 func_00BF6270(void);
M2C_UNK func_00209A00(void **, s32, s32);           /* extern */
void **func_00B2A420(s32);                          /* extern */
M2C_UNK func_00B347F0(void **, void **, s32, s32, void *, s32, f32, f32); /* extern */
s32 func_00BB1310(s32);                             /* extern */

void func_00BDDDB0(void) {
    s32 temp_v0;
    void **temp_s0;
    void **temp_s1;
    void **temp_s2;
    void *temp_a4;

    temp_s2 = func_00B2A420(func_00BF6270());
    temp_s0 = func_00B2A420(func_00BDC580());
    temp_s1 = func_00B2A420(func_00BDC570());
    temp_v0 = func_00BDC590();
    if (temp_v0 == 3) {
        M2C_FIELD(M2C_FIELD(*temp_s0, void ***, 4), s8 *, 0x2C) = 1;
        func_001A58E0(*M2C_FIELD(*temp_s0, void ***, 4), 1);
        func_00209A00(M2C_FIELD(*temp_s0, void ***, 4), func_00BB1310(0x3C7) & 0xFFFF, 0);
        temp_a4 = *temp_s0;
        M2C_FIELD(temp_a4, s8 *, 0x66) = 0xFF;
        M2C_FIELD(M2C_FIELD(*temp_s0, void ***, 4), u8 *, 0x2D) = (u8) M2C_FIELD(M2C_FIELD(*temp_s2, void **, 4), u8 *, 0x2D);
        func_00B347F0(temp_s0, temp_s2, -125, 0, temp_a4, 0xFF, 3.95900011f, 2.38199997f);
        M2C_FIELD(*temp_s0, s8 *, 0x16) = 0x4E;
        M2C_FIELD(*temp_s0, s16 *, 0x18) = 3;
        M2C_FIELD(M2C_FIELD(*temp_s1, void ***, 4), s8 *, 0x2C) = 1;
        func_001A58E0(*M2C_FIELD(*temp_s1, void ***, 4), 1);
        func_00209A00(M2C_FIELD(*temp_s1, void ***, 4), func_00BB1310(0x3C8) & 0xFFFF, 0);
        temp_a4 = *temp_s1;
        M2C_FIELD(temp_a4, s8 *, 0x66) = 0xFF;
        M2C_FIELD(M2C_FIELD(*temp_s1, void ***, 4), u8 *, 0x2D) = (u8) M2C_FIELD(M2C_FIELD(*temp_s2, void **, 4), u8 *, 0x2D);
        func_00B347F0(temp_s1, temp_s2, 90, 0, temp_a4, 0xFF, -1.51199996f, 0.84799999f);
        M2C_FIELD(*temp_s1, s8 *, 0x16) = 0x4E;
        M2C_FIELD(*temp_s1, s16 *, 0x18) = 3;
    } else if (temp_v0 == 2) {
        M2C_FIELD(M2C_FIELD(*temp_s0, void ***, 4), s8 *, 0x2C) = 1;
        func_001A58E0(*M2C_FIELD(*temp_s0, void ***, 4), 1);
        func_00209A00(M2C_FIELD(*temp_s0, void ***, 4), func_00BB1310(0x3C4) & 0xFFFF, 0);
        temp_a4 = *temp_s0;
        M2C_FIELD(temp_a4, s8 *, 0x66) = 0xFF;
        M2C_FIELD(M2C_FIELD(*temp_s0, void ***, 4), u8 *, 0x2D) = (u8) M2C_FIELD(M2C_FIELD(*temp_s2, void **, 4), u8 *, 0x2D);
        func_00B347F0(temp_s0, temp_s2, 0, 0, temp_a4, 0xFF, 1.778f, -0.00899999961f);
        M2C_FIELD(*temp_s0, s8 *, 0x16) = 0x4E;
        M2C_FIELD(*temp_s0, s16 *, 0x18) = 3;
        M2C_FIELD(M2C_FIELD(*temp_s1, void ***, 4), s8 *, 0x2C) = 1;
        func_001A58E0(*M2C_FIELD(*temp_s1, void ***, 4), 1);
        func_00209A00(M2C_FIELD(*temp_s1, void ***, 4), func_00BB1310(0x3C5) & 0xFFFF, 0);
        temp_a4 = *temp_s1;
        M2C_FIELD(temp_a4, s8 *, 0x66) = 0xFF;
        M2C_FIELD(M2C_FIELD(*temp_s1, void ***, 4), u8 *, 0x2D) = (u8) M2C_FIELD(M2C_FIELD(*temp_s2, void **, 4), u8 *, 0x2D);
        func_00B347F0(temp_s1, temp_s2, 10, 0, temp_a4, 0xFF, -3.43899989f, -11.9060001f);
        M2C_FIELD(*temp_s1, s8 *, 0x16) = 0x4E;
        M2C_FIELD(*temp_s1, s16 *, 0x18) = 3;
    } else if (temp_v0 == 1) {
        M2C_FIELD(M2C_FIELD(*temp_s0, void ***, 4), s8 *, 0x2C) = 1;
        func_001A58E0(*M2C_FIELD(*temp_s0, void ***, 4), 1);
        func_00209A00(M2C_FIELD(*temp_s0, void ***, 4), func_00BB1310(0x3C1) & 0xFFFF, 0);
        temp_a4 = *temp_s0;
        M2C_FIELD(temp_a4, s8 *, 0x66) = 0xFF;
        M2C_FIELD(M2C_FIELD(*temp_s0, void ***, 4), u8 *, 0x2D) = (u8) M2C_FIELD(M2C_FIELD(*temp_s2, void **, 4), u8 *, 0x2D);
        func_00B347F0(temp_s0, temp_s2, 45, 0, temp_a4, 0xFF, -2.01799989f, -0.143000007f);
        M2C_FIELD(*temp_s0, s8 *, 0x16) = 0x4E;
        M2C_FIELD(*temp_s0, s16 *, 0x18) = 3;
        M2C_FIELD(M2C_FIELD(*temp_s1, void ***, 4), s8 *, 0x2C) = 1;
        func_001A58E0(*M2C_FIELD(*temp_s1, void ***, 4), 1);
        func_00209A00(M2C_FIELD(*temp_s1, void ***, 4), func_00BB1310(0x3C2) & 0xFFFF, 0);
        temp_a4 = *temp_s1;
        M2C_FIELD(temp_a4, s8 *, 0x66) = 0xFF;
        M2C_FIELD(M2C_FIELD(*temp_s1, void ***, 4), u8 *, 0x2D) = (u8) M2C_FIELD(M2C_FIELD(*temp_s2, void **, 4), u8 *, 0x2D);
        func_00B347F0(temp_s1, temp_s2, -35, 0, temp_a4, 0xFF, 9.55700016f, -12.125f);
        M2C_FIELD(*temp_s1, s8 *, 0x16) = 0x4E;
        M2C_FIELD(*temp_s1, s16 *, 0x18) = 3;
    }
}
