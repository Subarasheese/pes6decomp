/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00B445F0(s32, s32);
extern void *D_003EAE6C;

void func_00B42FE0(void) {
    s32 temp_a0;
    s32 var_a2;
    u16 var_v1;
    u8 temp_a1;
    u8 var_a0;
    void *temp_s0;

    temp_s0 = D_003EAE6C;
    if (temp_s0 != NULL) {
        temp_a0 = M2C_FIELD(temp_s0, s32 *, 0x6B4);
        switch (temp_a0) {                          /* irregular */
        case 7:
            temp_a1 = M2C_FIELD(temp_s0, u8 *, 0x60D);
            if ((s32) temp_a1 >= 0x10) {
                var_a2 = 3;
                var_v1 = M2C_FIELD(((temp_a1 * 2) + temp_s0), u16 *, 0x680);
            } else {
                var_v1 = M2C_FIELD(((temp_a1 * 2) + ((M2C_FIELD(temp_s0, u8 *, 0x612) << 5) + temp_s0)), u16 *, 0x620);
                var_a2 = 2;
            }
            var_a0 = temp_a1 & 0xFF;
block_16:
            M2C_FIELD(temp_s0, s32 *, 0x614) = var_a2;
            M2C_FIELD(temp_s0, u16 *, 0x618) = var_v1;
            M2C_FIELD(temp_s0, u8 *, 0x61A) = (u8) M2C_FIELD(temp_s0, u8 *, 0x610);
            M2C_FIELD(temp_s0, u8 *, 0x61B) = (u8) M2C_FIELD(temp_s0, u8 *, 0x612);
            M2C_FIELD(temp_s0, u8 *, 0x61C) = var_a0;
            break;
        case 6:
            var_a0 = M2C_FIELD(temp_s0, u8 *, 0x60C);
            var_v1 = func_00B445F0((s32) M2C_FIELD(temp_s0, u8 *, 0x610), (s32) M2C_FIELD(temp_s0, u8 *, 0x60C)) & 0xFFFF;
            var_a2 = 1;
            goto block_16;
        }
    }
}
