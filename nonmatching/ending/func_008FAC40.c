/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001ABA60(s32);
M2C_UNK func_0026EEA0(M2C_UNK *, void *, void *, void *); /* extern */
extern char D_003A9B74[];
extern void *D_0058E5B4;
extern char D_0058E7F0[];
extern char D_00591A90[];
extern char Pes6MatchSquads[];
extern char D_005A2020[];

void func_008FAC40(void) {
    M2C_UNK *var_s0;
    M2C_UNK *var_s2;
    s32 var_s1;
    void *temp_a1;
    void *temp_a2;
    void *temp_a3;

    var_s2 = ((void *)D_0058E7F0);
    var_s1 = 0;
    var_s0 = ((void *)D_00591A90);
    M2C_FIELD(D_0058E5B4, s8 *, 0x2C) = 0;
    do {
        M2C_FIELD(M2C_FIELD(var_s2, void **, 4), s8 *, 0x4C) = 0;
        M2C_FIELD(M2C_FIELD(M2C_FIELD(var_s2, void **, 4), void **, 0), s8 *, 3) = 1;
        if ((*(u8 *)D_003A9B74) == 0) {
            M2C_FIELD(var_s2, u8 *, 0x11) = (u8) M2C_FIELD(var_s0, u8 *, 7);
            M2C_FIELD(var_s2, u8 *, 0x12) = 0U;
        } else {
            M2C_FIELD(var_s2, u8 *, 0x11) = (u8) M2C_FIELD(var_s0, u8 *, 0x92);
            M2C_FIELD(var_s2, u8 *, 0x12) = 1U;
        }
        M2C_FIELD(var_s2, u16 *, 0xE) = (u16) M2C_FIELD(((M2C_FIELD(var_s2, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(var_s2, u8 *, 0x12) * 0x6900))), u16 *, 0x46);
        temp_a3 = ((void *)D_005A2020) + (M2C_FIELD(var_s2, u8 *, 0x12) * 0x168);
        temp_a2 = temp_a3 + (M2C_FIELD(temp_a3, u8 *, 1) * 0x52);
        temp_a1 = temp_a2 + (var_s1 % 11);
        M2C_FIELD(var_s2, u8 *, 0x10) = (u8) M2C_FIELD(temp_a1, u8 *, 0x1C);
        M2C_FIELD(var_s2, u8 *, 0x13) = (u8) ((var_s1 / 11) + ((u32) var_s1 >> 0x1F));
        M2C_FIELD(var_s2, s16 *, 0x2A) = (s16) (M2C_FIELD(var_s2, u8 *, 0x13) << 0xF);
        func_0026EEA0(var_s2, temp_a1, temp_a2, temp_a3);
        func_001ABA60((s32) M2C_FIELD(M2C_FIELD(var_s2, void **, 4), void **, 0));
        var_s1 += 1;
        var_s0 += 1;
        M2C_FIELD(M2C_FIELD(var_s2, void **, 4), s8 *, 0x2C) = 1;
        var_s2 += 0x240;
    } while (var_s1 < 0x16);
}
