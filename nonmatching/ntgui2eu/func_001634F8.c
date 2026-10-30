/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00163B40();                            /* extern */

void func_001634F8(void *arg0, s16 arg1, s16 arg2) {
    s32 temp_a2;
    s8 temp_v0;
    s8 temp_v0_2;
    s8 temp_v0_3;
    void *temp_a2_2;

    if (M2C_FIELD(arg0, s32 *, 0x920) != 0) {
        M2C_FIELD(arg0, s32 *, 0x920) = 0;
        M2C_FIELD(arg0, s32 *, 0x928) = 0;
        func_00163B40();
    }
    temp_a2 = M2C_FIELD(arg0, s32 *, 0x928);
    if (temp_a2 < M2C_FIELD(arg0, s32 *, 0x940)) {
        temp_a2_2 = M2C_FIELD(arg0, s32 *, 0x91C) + (temp_a2 * 0x10);
        M2C_FIELD(arg0, s32 *, 0x928) = (s32) (temp_a2 + 1);
        M2C_FIELD(temp_a2_2, s16 *, 0) = arg1;
        M2C_FIELD(temp_a2_2, s16 *, 2) = arg2;
        if (arg1 < ((s32) M2C_FIELD(arg0, s32 *, 0x5AC) >> 1)) {
            M2C_FIELD(temp_a2_2, u16 *, 4) = 0U;
        } else {
            M2C_FIELD(temp_a2_2, u16 *, 4) = (u16) M2C_FIELD(arg0, s32 *, 0x5AC);
        }
        if (arg2 >= ((s32) M2C_FIELD(arg0, s32 *, 0x5B0) >> 1)) {
            M2C_FIELD(temp_a2_2, u16 *, 6) = (u16) M2C_FIELD(arg0, s32 *, 0x5B0);
        } else {
            M2C_FIELD(temp_a2_2, u16 *, 6) = 0U;
        }
        M2C_FIELD(temp_a2_2, u8 *, 8) = (u8) M2C_FIELD(arg0, u8 *, 0x930);
        M2C_FIELD(temp_a2_2, u8 *, 9) = (u8) M2C_FIELD(arg0, u8 *, 0x931);
        M2C_FIELD(temp_a2_2, u8 *, 0xA) = (u8) M2C_FIELD(arg0, u8 *, 0x932);
        temp_v0 = M2C_FIELD(arg0, u8 *, 0x930) * 8;
        M2C_FIELD(temp_a2_2, s8 *, 0xC) = (s8) ((temp_v0 >= 0x100) ? -1 : temp_v0);
        temp_v0_2 = M2C_FIELD(arg0, u8 *, 0x931) * 8;
        M2C_FIELD(temp_a2_2, s8 *, 0xD) = (s8) ((temp_v0_2 >= 0x100) ? -1 : temp_v0_2);
        temp_v0_3 = M2C_FIELD(arg0, u8 *, 0x932) * 8;
        M2C_FIELD(temp_a2_2, s8 *, 0xE) = (s8) ((temp_v0_3 >= 0x100) ? -1 : temp_v0_3);
        M2C_FIELD(arg0, s32 *, 0x924) = 2;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
    }
}
