/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0026EE90(int, int);
M2C_UNK func_0026EEA0(void *, s32, s32, void *, s32); /* extern */
M2C_UNK func_00287590(void *, M2C_UNK);             /* extern */
extern char Pes6MatchPlayers[];
extern char Pes6MatchSquads[];

void func_008CC230(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK var_a1;
    M2C_UNK var_a1_2;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 var_v1;
    u8 temp_a4_2;
    u8 temp_s0;
    void *temp_a0;
    void *temp_a1;
    void *temp_a3;
    void *temp_a4;
    void *temp_s1;

    if (arg0 != 0xFF) {
        var_v1 = arg0 % 23;
    } else {
        var_v1 = 1;
    }
    temp_a1 = arg1 + 0x34;
    temp_s1 = ((void *)Pes6MatchPlayers) + (var_v1 * 0x240);
    temp_a0 = M2C_FIELD(temp_s1, void **, 4);
    temp_s0 = M2C_FIELD(temp_a0, u8 *, 0x2C);
    M2C_FIELD(temp_a0, u8 *, 0x2C) = 1U;
    switch (arg2) {                                 /* irregular */
    case 1:
        if (((u64) ((s64) M2C_FIELD(temp_a1, u8 *, 1) << 0x38) >> 0x3C) != 0) {
            var_a1 = 0xA;
        } else {
            var_a1 = 9;
        }
        func_00287590(temp_s1, var_a1);
        temp_a4 = (M2C_FIELD(temp_s1, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(temp_s1, u8 *, 0x12) * 0x6900));
        M2C_FIELD(temp_a4, u8 *, 0x8C) = (u8) ((M2C_FIELD(temp_a4, u8 *, 0x8C) & ~0xFC) | ((M2C_FIELD(temp_a4, u8 *, 0x1C) & 0x3F) * 4));
        M2C_FIELD(temp_a4, u8 *, 0x91) = (u8) ((M2C_FIELD(temp_a4, u8 *, 0x91) & ~0x7F) | (M2C_FIELD(temp_a4, u8 *, 0x1D) & 0x7F));
        func_0026EE90((s32) temp_s1, 0xC9);
        break;
    default:
        if (((u64) ((s64) M2C_FIELD(temp_a1, u8 *, 1) << 0x38) >> 0x3C) != 0) {
            var_a1_2 = 1;
        } else {
            var_a1_2 = 0;
        }
        func_00287590(temp_s1, var_a1_2);
        temp_a4_2 = M2C_FIELD(temp_s1, u8 *, 0x12);
        temp_a3 = (M2C_FIELD(temp_s1, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (temp_a4_2 * 0x6900));
        temp_a2 = M2C_FIELD(temp_a3, u8 *, 0x1C) & 0x3F;
        M2C_FIELD(temp_a3, u8 *, 0x8C) = (u8) ((M2C_FIELD(temp_a3, u8 *, 0x8C) & ~0xFC) | (temp_a2 * 4));
        temp_a1_2 = M2C_FIELD(temp_a3, u8 *, 0x1D) & 0x7F;
        M2C_FIELD(temp_a3, u8 *, 0x91) = (u8) ((M2C_FIELD(temp_a3, u8 *, 0x91) & ~0x7F) | temp_a1_2);
        func_0026EEA0(temp_s1, temp_a1_2, temp_a2, temp_a3, temp_a4_2 * 0x69);
        break;
    case 2:
        func_00287590(temp_s1, 8);
        func_0026EE90((s32) temp_s1, 0xC8);
        break;
    }
    M2C_FIELD(M2C_FIELD(temp_s1, void **, 4), u8 *, 0x2C) = temp_s0;
}
