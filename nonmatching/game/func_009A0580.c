/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00208310(s32);
extern void func_001AFD20(void);
extern void func_0017E120(int);
M2C_UNK func_002562B0(M2C_UNK);                     /* extern */
M2C_UNK func_0093FB00(void *, M2C_UNK *, s32);      /* extern */
s32 func_0093FD30();                                /* extern */
M2C_UNK func_00B82600();                            /* extern */
extern char Pes6MatchPlayers[];
extern char D_00CB63B0[];

s32 func_009A0580(void) {
    M2C_UNK *var_s0;
    s32 temp_a0;
    s32 var_a2;
    s32 var_s1;
    void *temp_a0_2;
    void *temp_v1;

    if (func_0093FD30() == 0) {
        func_0017E120(1);
        var_s1 = 0;
        var_s0 = ((void *)Pes6MatchPlayers);
        do {
            temp_v1 = M2C_FIELD(var_s0, void **, 4);
            if (M2C_FIELD(temp_v1, u8 *, 0x2C) != 0) {
                M2C_FIELD(M2C_FIELD(var_s0, void **, 4), u32 *, 4) = func_00208310((s32) M2C_FIELD(temp_v1, u16 *, 0x30));
            }
            var_s1 += 1;
            var_s0 += 0x240;
        } while (var_s1 < 0x17);
        func_001AFD20();
        func_00B82600();
        func_002562B0(0xD);
        var_a2 = 0;
        do {
            temp_a0 = var_a2 & 0xFF;
            var_a2 = (var_a2 + 1) & 0xFF;
            temp_a0_2 = ((void *)D_00CB63B0) + (temp_a0 * 0xF);
            M2C_FIELD(temp_a0_2, s8 *, 0) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 1) = 0xFF;
            M2C_FIELD(temp_a0_2, s8 *, 2) = 0xFF;
            M2C_FIELD(temp_a0_2, s8 *, 3) = 0xFF;
            M2C_FIELD(temp_a0_2, s8 *, 4) = 0xFF;
            M2C_FIELD(temp_a0_2, s8 *, 5) = 0xFF;
            M2C_FIELD(temp_a0_2, s8 *, 6) = 0xFF;
            M2C_FIELD(temp_a0_2, s8 *, 7) = 0xFF;
            M2C_FIELD(temp_a0_2, s8 *, 8) = 0xFF;
            M2C_FIELD(temp_a0_2, s8 *, 9) = 0xFF;
            M2C_FIELD(temp_a0_2, s8 *, 0xA) = 0xFF;
            M2C_FIELD(temp_a0_2, s8 *, 0xB) = 0xFF;
            M2C_FIELD(temp_a0_2, s8 *, 0xC) = 0xFF;
            M2C_FIELD(temp_a0_2, s8 *, 0xD) = 0xFF;
            M2C_FIELD(temp_a0_2, s8 *, 0xE) = 0xFF;
        } while (var_a2 < 2);
        func_0093FB00(temp_a0_2, ((void *)D_00CB63B0), var_a2);
        return 1;
    }
    return 0;
}
