/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_002260A0(void);
s32 func_00230100();                                /* extern */

void func_0094A9F0(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_s0;
    s8 *var_a1;
    s8 var_v1;
    u8 temp_a0_3;
    u8 temp_a0_5;
    void *temp_a0_2;
    void *temp_a0_4;
    void *temp_a1;
    void *temp_v0;

    temp_s0 = func_00230100();
    temp_v0 = func_002260A0();
    if ((temp_v0 != NULL) && (temp_a1 = ((arg1 & 0xFFFF) * 0x1A) + temp_v0, (M2C_FIELD(temp_a1, u16 *, 0x19B20) != 0))) {
        temp_a0 = arg2 & 0xFF;
        switch (temp_a0) {                          /* irregular */
        case 1:
            temp_a0_2 = temp_a1 + (temp_s0 * 4);
            var_a1 = temp_a0_2 + 0x19B2A;
            temp_a0_3 = M2C_FIELD(temp_a0_2, u8 *, 0x19B2A);
            var_v1 = (temp_a0_3 & ~0xE) | ((((((u64) ((s64) temp_a0_3 << 0x3C) >> 0x3D) & 0xFF) + 1) & 7) * 2);
block_11:
            *var_a1 = var_v1;
            break;
        case 0:
            temp_a0_4 = temp_a1 + (temp_s0 * 4);
            var_a1 = temp_a0_4 + 0x19B2A;
            temp_a0_5 = M2C_FIELD(temp_a0_4, u8 *, 0x19B2A);
            var_v1 = (temp_a0_5 & ~0xF0) | ((((((u64) ((s64) temp_a0_5 << 0x38) >> 0x3C) & 0xFF) + 1) & 0xF) * 0x10);
            goto block_11;
        }
    }
}
