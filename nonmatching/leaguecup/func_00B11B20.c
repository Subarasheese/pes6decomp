/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B14800(void);
u8 func_002253B0(u8);                               /* extern */
M2C_UNK func_00956A90(s32, M2C_UNK, u16, M2C_UNK);  /* extern */
M2C_UNK func_009737E0(s32, M2C_UNK, u8);            /* extern */

void func_00B11B20(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s2_3;
    s32 temp_s4;
    s32 temp_s4_2;
    s32 temp_s4_3;
    s32 temp_s5;
    s32 temp_s5_2;
    u32 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    temp_v0 = func_00B14800();
    if (temp_v0 != 0) {
        temp_s2 = arg1 & 0xFF;
        temp_s4 = arg2 & 0xFF;
        temp_s0 = temp_s4 * 4;
        temp_s1 = (arg0 & 0xFF) * 0xBC;
        func_00956A90(M2C_FIELD((temp_s0 + ((temp_s2 * 8) + temp_v0)), s32 *, 0x7CC), 4, M2C_FIELD((((1 - temp_s4) * 2) + ((temp_s2 * 4) + (temp_s1 + temp_v0))), u16 *, 0x64), 0);
        if (temp_s4 != 0) {
            temp_s5 = temp_s2 * 2;
            temp_s4_2 = temp_s2 * 8;
            func_009737E0(M2C_FIELD((temp_s0 + (temp_s4_2 + temp_v0)), s32 *, 0x80C), 7, func_002253B0(M2C_FIELD((temp_s5 + (temp_s1 + temp_v0)), u8 *, 0x54)));
            func_009737E0(M2C_FIELD((temp_s0 + (temp_s4_2 + temp_v0)), s32 *, 0x84C), 0xF, M2C_FIELD((temp_s5 + (temp_s1 + temp_v0)), u8 *, 0x44));
            func_009737E0(M2C_FIELD((temp_s0 + (temp_s4_2 + temp_v0)), s32 *, 0x8AC), 0xB, M2C_FIELD((temp_s5 + (temp_s1 + temp_v0)), u8 *, 0x34));
            temp_s0_2 = temp_s2 * 6;
            func_009737E0(M2C_FIELD((temp_s0 + (temp_s4_2 + temp_v0)), s32 *, 0x8EC), 0xC, M2C_FIELD((temp_s0_2 + (temp_s1 + temp_v0)), u8 *, 4));
            temp_v1 = temp_s0_2 + (temp_s1 + temp_v0);
            temp_s2_2 = temp_s2 * 0xC;
            func_009737E0(M2C_FIELD((temp_s2_2 + temp_v0), s32 *, 0x934), 0x12, M2C_FIELD(temp_v1, u8 *, 5));
            func_009737E0(M2C_FIELD((temp_s2_2 + temp_v0), s32 *, 0x994), 0x15, M2C_FIELD(temp_v1, u8 *, 5));
            func_009737E0(M2C_FIELD((temp_s2_2 + temp_v0), s32 *, 0x9F4), 0x18, M2C_FIELD((temp_s0_2 + (temp_s1 + temp_v0)), u8 *, 6));
        } else {
            temp_s5_2 = temp_s2 * 2;
            temp_s4_3 = temp_s2 * 8;
            func_009737E0(M2C_FIELD((temp_s0 + (temp_s4_3 + temp_v0)), s32 *, 0x80C), 8, func_002253B0(M2C_FIELD((temp_s5_2 + (temp_s1 + temp_v0)), u8 *, 0x55)));
            func_009737E0(M2C_FIELD((temp_s0 + (temp_s4_3 + temp_v0)), s32 *, 0x84C), 0xD, M2C_FIELD((temp_s5_2 + (temp_s1 + temp_v0)), u8 *, 0x45));
            func_009737E0(M2C_FIELD((temp_s0 + (temp_s4_3 + temp_v0)), s32 *, 0x8AC), 9, M2C_FIELD((temp_s5_2 + (temp_s1 + temp_v0)), u8 *, 0x35));
            temp_s0_3 = temp_s2 * 6;
            func_009737E0(M2C_FIELD((temp_s0 + (temp_s4_3 + temp_v0)), s32 *, 0x8EC), 0xA, M2C_FIELD((temp_s0_3 + (temp_s1 + temp_v0)), u8 *, 7));
            temp_v1_2 = temp_s0_3 + (temp_s1 + temp_v0);
            temp_s2_3 = temp_s2 * 0xC;
            func_009737E0(M2C_FIELD((temp_s2_3 + temp_v0), s32 *, 0x92C), 0x10, M2C_FIELD(temp_v1_2, u8 *, 8));
            func_009737E0(M2C_FIELD((temp_s2_3 + temp_v0), s32 *, 0x98C), 0x13, M2C_FIELD(temp_v1_2, u8 *, 8));
            func_009737E0(M2C_FIELD((temp_s2_3 + temp_v0), s32 *, 0x9EC), 0x16, M2C_FIELD((temp_s0_3 + (temp_s1 + temp_v0)), u8 *, 9));
        }
    }
}
