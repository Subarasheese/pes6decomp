/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009BC8E0(void);
u8 func_00225520(u8);                               /* extern */
M2C_UNK func_00956A90(s32, M2C_UNK, u16, M2C_UNK);  /* extern */
M2C_UNK func_0095C4A0(u16);                         /* extern */
M2C_UNK func_009737E0(s32, M2C_UNK, u8);            /* extern */

void func_009B9280(s32 arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_s4_2;
    u32 temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;

    temp_v0 = func_009BC8E0();
    if (temp_v0 != 0) {
        temp_s4 = arg0 & 0xFF;
        temp_s3 = temp_s4 * 4;
        temp_s1 = temp_s4 * 8;
        temp_v1 = temp_s3 + temp_v0;
        func_00956A90(M2C_FIELD((temp_s1 + temp_v0), s32 *, 0x1C8), 4, M2C_FIELD(temp_v1, u16 *, 0x7C), 0);
        temp_v1_2 = temp_s3 + temp_v0;
        func_00956A90(M2C_FIELD((temp_s1 + temp_v0), s32 *, 0x1CC), 4, M2C_FIELD(temp_v1_2, u16 *, 0x7E), 0);
        temp_s0 = temp_s4 * 2;
        func_009737E0(M2C_FIELD((temp_s1 + temp_v0), s32 *, 0x2E0), 8, func_00225520(M2C_FIELD((temp_s0 + temp_v0), u8 *, 0x68)));
        func_009737E0(M2C_FIELD((temp_s1 + temp_v0), s32 *, 0x2E4), 7, func_00225520(M2C_FIELD((temp_s0 + temp_v0), u8 *, 0x69)));
        func_009737E0(M2C_FIELD((temp_s1 + temp_v0), s32 *, 0x330), 0xD, M2C_FIELD((temp_s0 + temp_v0), u8 *, 0x54));
        func_009737E0(M2C_FIELD((temp_s1 + temp_v0), s32 *, 0x334), 0xF, M2C_FIELD((temp_s0 + temp_v0), u8 *, 0x55));
        func_009737E0(M2C_FIELD((temp_s1 + temp_v0), s32 *, 0x3A8), 9, M2C_FIELD((temp_s0 + temp_v0), u8 *, 0x40));
        func_009737E0(M2C_FIELD((temp_s1 + temp_v0), s32 *, 0x3AC), 0xB, M2C_FIELD((temp_s0 + temp_v0), u8 *, 0x41));
        temp_s0_2 = temp_s4 * 6;
        func_009737E0(M2C_FIELD((temp_s1 + temp_v0), s32 *, 0x3F8), 0xA, M2C_FIELD((temp_s0_2 + temp_v0), u8 *, 4));
        func_009737E0(M2C_FIELD((temp_s1 + temp_v0), s32 *, 0x3FC), 0xC, M2C_FIELD((temp_s0_2 + temp_v0), u8 *, 7));
        temp_v1_3 = temp_s0_2 + temp_v0;
        temp_s4_2 = temp_s4 * 0xC;
        func_009737E0(M2C_FIELD((temp_s4_2 + temp_v0), s32 *, 0x448), 0x10, M2C_FIELD(temp_v1_3, u8 *, 5));
        func_009737E0(M2C_FIELD((temp_s4_2 + temp_v0), s32 *, 0x4C0), 0x13, M2C_FIELD(temp_v1_3, u8 *, 5));
        func_009737E0(M2C_FIELD((temp_s4_2 + temp_v0), s32 *, 0x538), 0x16, M2C_FIELD((temp_s0_2 + temp_v0), u8 *, 6));
        temp_v1_4 = temp_s0_2 + temp_v0;
        func_009737E0(M2C_FIELD((temp_s4_2 + temp_v0), s32 *, 0x450), 0x12, M2C_FIELD(temp_v1_4, u8 *, 8));
        func_009737E0(M2C_FIELD((temp_s4_2 + temp_v0), s32 *, 0x4C8), 0x15, M2C_FIELD(temp_v1_4, u8 *, 8));
        func_009737E0(M2C_FIELD((temp_s4_2 + temp_v0), s32 *, 0x540), 0x18, M2C_FIELD((temp_s0_2 + temp_v0), u8 *, 9));
        if (M2C_FIELD((temp_s3 + temp_v0), s32 *, 0xB8) != 0) {
            func_0095C4A0(M2C_FIELD(temp_v1, u16 *, 0x7C));
            func_0095C4A0(M2C_FIELD(temp_v1_2, u16 *, 0x7E));
        }
    }
}
