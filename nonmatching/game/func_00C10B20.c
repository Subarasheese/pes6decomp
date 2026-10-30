/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00C18700(void);
extern char D_00CBD8E0[];

void func_00C10B20(s32 arg0, s32 arg1) {
    s16 *temp_a2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    void *temp_a0_3;
    void *temp_a1_2;
    void *temp_s0;

    temp_s0 = ((void *)D_00CBD8E0) + ((arg0 & 0xFF) * 0x2F4);
    temp_a1 = arg1 & 0xFF;
    temp_a0 = func_00C18700() & 0xFF;
    if (temp_a1 < 0x12) {
        temp_a0_2 = (temp_a0 & 0xFF) * 2;
        temp_a2 = temp_s0 + temp_a0_2;
        temp_a1_2 = (temp_a1 * 0x28) + temp_s0;
        temp_a0_3 = temp_a0_2 + temp_a1_2;
        M2C_FIELD(temp_s0, s16 *, 8) = (s16) (M2C_FIELD(temp_s0, s16 *, 8) + 1);
        *temp_a2 += 1;
        M2C_FIELD(temp_a1_2, s16 *, 0x2C) = (s16) (M2C_FIELD(temp_a1_2, s16 *, 0x2C) + 1);
        M2C_FIELD(temp_a0_3, s16 *, 0x24) = (s16) (M2C_FIELD(temp_a0_3, s16 *, 0x24) + 1);
    }
}
