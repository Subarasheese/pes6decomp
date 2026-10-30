/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_009E1320(s32, void *, void *, s32);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_009E10B0(s32);                             /* extern */
M2C_UNK func_009E1520(M2C_UNK);                     /* extern */
s32 func_009F0CF0();                                /* extern */
s32 func_009F0D30();                                /* extern */
void *func_009F0DB0();                              /* extern */
void *func_009F0E30();                              /* extern */
s32 func_009F0EF0();                                /* extern */
s32 func_009F1000();                                /* extern */
extern void *D_00A68D60;

s32 func_00978A70(void) {
    s32 temp_s2;
    s32 temp_v0;
    void *temp_s0;
    void *temp_s1;

    if (M2C_FIELD(D_00A68D60, u8 *, 5) != 0) {
        M2C_FIELD(D_00A68D60, u8 *, 5) = 0U;
        M2C_FIELD(D_00A68D60, s8 *, 1) = 0xA;
        return 0;
    }
    temp_v0 = func_009F1000();
    switch (temp_v0) {                              /* irregular */
    case 3:
        func_0026E840(0x8C008005);
        M2C_FIELD(D_00A68D60, s8 *, 1) = 4;
block_18:
    default:
        return 0;
    case 1:
        M2C_FIELD(D_00A68D60, s8 *, 2) = 1;
        M2C_FIELD(D_00A68D60, s8 *, 1) = 0xC;
        goto block_18;
    case 2:
        M2C_FIELD(D_00A68D60, s32 *, 8) = func_009F0EF0();
        if (M2C_FIELD(D_00A68D60, u8 *, 4) == 0) {
            func_009E1520(0);
            temp_s2 = func_009E10B0(func_009F0CF0());
            temp_s1 = func_009F0E30();
            temp_s0 = func_009F0DB0();
            func_009E1320(temp_s2, temp_s1, temp_s0, func_009F0D30());
            M2C_FIELD(D_00A68D60, s8 *, 1) = 3;
        } else {
            M2C_FIELD(D_00A68D60, s8 *, 3) = 6;
            M2C_FIELD(D_00A68D60, s8 *, 1) = 0xB;
        }
        goto block_18;
    case 4:
        M2C_FIELD(D_00A68D60, s8 *, 2) = 3;
        M2C_FIELD(D_00A68D60, s8 *, 1) = 0xC;
        return 3;
    }
}
