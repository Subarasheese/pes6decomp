/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BDC580(void);
extern u8 func_00BDC570(void);
extern void func_001A58E0(void *, signed char);
extern u8 func_00BDC590(void);
extern u8 func_00BF6270(void);
M2C_UNK func_00209A00(void **, s32, M2C_UNK);       /* extern */
void **func_00B2A420(u8);                           /* extern */
M2C_UNK func_00B347F0(void **, void **, M2C_UNK, M2C_UNK, void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_00BB1310(M2C_UNK);                         /* extern */

void func_00BDDDB0(void) {
    u8 temp_v0;
    void **temp_s0;
    void **temp_s1;
    void **temp_s2;
    void *temp_a4;
    void *temp_a4_2;
    void *temp_a4_3;
    void *temp_a4_4;
    void *temp_a4_5;
    void *temp_a4_6;

    temp_s2 = func_00B2A420(func_00BF6270());
    temp_s0 = func_00B2A420(func_00BDC580());
    temp_s1 = func_00B2A420(func_00BDC570());
    temp_v0 = func_00BDC590();
    switch (temp_v0) {                              /* irregular */
    case 3:
        M2C_FIELD(M2C_FIELD(*temp_s0, void ***, 4), s8 *, 0x2C) = 1;
        func_001A58E0(*M2C_FIELD(*temp_s0, void ***, 4), 1);
        func_00209A00(M2C_FIELD(*temp_s0, void ***, 4), func_00BB1310(0x3C7) & 0xFFFF, 0);
        temp_a4 = *temp_s0;
        M2C_FIELD(temp_a4, s8 *, 0x66) = 0xFF;
        M2C_FIELD(M2C_FIELD(*temp_s0, void ***, 4), u8 *, 0x2D) = (u8) M2C_FIELD(M2C_FIELD(*temp_s2, void **, 4), u8 *, 0x2D);
        func_00B347F0(temp_s0, temp_s2, -0x7D, 0, temp_a4, 0xFF, 0x407D6042, 0x401872B0);
        M2C_FIELD(*temp_s0, s8 *, 0x16) = 0x4E;
        M2C_FIELD(*temp_s0, s16 *, 0x18) = 3;
        M2C_FIELD(M2C_FIELD(*temp_s1, void ***, 4), s8 *, 0x2C) = 1;
        func_001A58E0(*M2C_FIELD(*temp_s1, void ***, 4), 1);
        func_00209A00(M2C_FIELD(*temp_s1, void ***, 4), func_00BB1310(0x3C8) & 0xFFFF, 0);
        temp_a4_2 = *temp_s1;
        M2C_FIELD(temp_a4_2, s8 *, 0x66) = 0xFF;
        M2C_FIELD(M2C_FIELD(*temp_s1, void ***, 4), u8 *, 0x2D) = (u8) M2C_FIELD(M2C_FIELD(*temp_s2, void **, 4), u8 *, 0x2D);
        func_00B347F0(temp_s1, temp_s2, 0x5A, 0, temp_a4_2, 0xFF, 0xBFC18937, 0x3F591687);
        M2C_FIELD(*temp_s1, s8 *, 0x16) = 0x4E;
block_13:
        M2C_FIELD(*temp_s1, s16 *, 0x18) = 3;
        return;
    case 2:
        M2C_FIELD(M2C_FIELD(*temp_s0, void ***, 4), s8 *, 0x2C) = 1;
        func_001A58E0(*M2C_FIELD(*temp_s0, void ***, 4), 1);
        func_00209A00(M2C_FIELD(*temp_s0, void ***, 4), func_00BB1310(0x3C4) & 0xFFFF, 0);
        temp_a4_3 = *temp_s0;
        M2C_FIELD(temp_a4_3, s8 *, 0x66) = 0xFF;
        M2C_FIELD(M2C_FIELD(*temp_s0, void ***, 4), u8 *, 0x2D) = (u8) M2C_FIELD(M2C_FIELD(*temp_s2, void **, 4), u8 *, 0x2D);
        func_00B347F0(temp_s0, temp_s2, 0, 0, temp_a4_3, 0xFF, 0x3FE39581, 0xBC1374BC);
        M2C_FIELD(*temp_s0, s8 *, 0x16) = 0x4E;
        M2C_FIELD(*temp_s0, s16 *, 0x18) = 3;
        M2C_FIELD(M2C_FIELD(*temp_s1, void ***, 4), s8 *, 0x2C) = 1;
        func_001A58E0(*M2C_FIELD(*temp_s1, void ***, 4), 1);
        func_00209A00(M2C_FIELD(*temp_s1, void ***, 4), func_00BB1310(0x3C5) & 0xFFFF, 0);
        temp_a4_4 = *temp_s1;
        M2C_FIELD(temp_a4_4, s8 *, 0x66) = 0xFF;
        M2C_FIELD(M2C_FIELD(*temp_s1, void ***, 4), u8 *, 0x2D) = (u8) M2C_FIELD(M2C_FIELD(*temp_s2, void **, 4), u8 *, 0x2D);
        func_00B347F0(temp_s1, temp_s2, 0xA, 0, temp_a4_4, 0xFF, 0xC05C1893, 0xC13E7EFA);
        M2C_FIELD(*temp_s1, s8 *, 0x16) = 0x4E;
        goto block_13;
    case 1:
        M2C_FIELD(M2C_FIELD(*temp_s0, void ***, 4), s8 *, 0x2C) = 1;
        func_001A58E0(*M2C_FIELD(*temp_s0, void ***, 4), 1);
        func_00209A00(M2C_FIELD(*temp_s0, void ***, 4), func_00BB1310(0x3C1) & 0xFFFF, 0);
        temp_a4_5 = *temp_s0;
        M2C_FIELD(temp_a4_5, s8 *, 0x66) = 0xFF;
        M2C_FIELD(M2C_FIELD(*temp_s0, void ***, 4), u8 *, 0x2D) = (u8) M2C_FIELD(M2C_FIELD(*temp_s2, void **, 4), u8 *, 0x2D);
        func_00B347F0(temp_s0, temp_s2, 0x2D, 0, temp_a4_5, 0xFF, 0xC00126E9, 0xBE126E98);
        M2C_FIELD(*temp_s0, s8 *, 0x16) = 0x4E;
        M2C_FIELD(*temp_s0, s16 *, 0x18) = 3;
        M2C_FIELD(M2C_FIELD(*temp_s1, void ***, 4), s8 *, 0x2C) = 1;
        func_001A58E0(*M2C_FIELD(*temp_s1, void ***, 4), 1);
        func_00209A00(M2C_FIELD(*temp_s1, void ***, 4), func_00BB1310(0x3C2) & 0xFFFF, 0);
        temp_a4_6 = *temp_s1;
        M2C_FIELD(temp_a4_6, s8 *, 0x66) = 0xFF;
        M2C_FIELD(M2C_FIELD(*temp_s1, void ***, 4), u8 *, 0x2D) = (u8) M2C_FIELD(M2C_FIELD(*temp_s2, void **, 4), u8 *, 0x2D);
        func_00B347F0(temp_s1, temp_s2, -0x23, 0, temp_a4_6, 0xFF, 0x4118E979, 0xC1420000);
        M2C_FIELD(*temp_s1, s8 *, 0x16) = 0x4E;
        goto block_13;
    }
}
