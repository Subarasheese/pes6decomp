/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00163B40();                            /* extern */

void func_00163428(void *arg0, s16 arg1, s16 arg2) {
    s32 temp_a2;
    void *temp_a0;

    if (M2C_FIELD(arg0, s32 *, 0x920) != 0) {
        M2C_FIELD(arg0, s32 *, 0x920) = 0;
        M2C_FIELD(arg0, s32 *, 0x928) = 0;
        func_00163B40();
    }
    temp_a2 = M2C_FIELD(arg0, s32 *, 0x928);
    if (temp_a2 < M2C_FIELD(arg0, s32 *, 0x940)) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x91C) + (temp_a2 * 0x10);
        M2C_FIELD(arg0, s32 *, 0x928) = (s32) (temp_a2 + 1);
        M2C_FIELD(temp_a0, s16 *, 0) = arg1;
        M2C_FIELD(temp_a0, s16 *, 2) = arg2;
        if (arg1 < ((s32) M2C_FIELD(arg0, s32 *, 0x5AC) >> 1)) {
            M2C_FIELD(temp_a0, u16 *, 4) = 0U;
        } else {
            M2C_FIELD(temp_a0, u16 *, 4) = (u16) M2C_FIELD(arg0, s32 *, 0x5AC);
        }
        if (arg2 >= ((s32) M2C_FIELD(arg0, s32 *, 0x5B0) >> 1)) {
            M2C_FIELD(temp_a0, u16 *, 6) = (u16) M2C_FIELD(arg0, s32 *, 0x5B0);
        } else {
            M2C_FIELD(temp_a0, u16 *, 6) = 0U;
        }
        M2C_FIELD(temp_a0, s8 *, 0xA) = 0;
        M2C_FIELD(temp_a0, s8 *, 8) = 0;
        M2C_FIELD(temp_a0, s8 *, 9) = 0;
        M2C_FIELD(arg0, s32 *, 0x924) = 2;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
    }
}
