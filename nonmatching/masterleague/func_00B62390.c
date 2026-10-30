/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u8 func_00B61730(s32);                              /* extern */
extern void *D_003EAECC;

void func_00B62390(void) {
    s32 var_a1;
    s32 var_s1;
    void *temp_a0;
    void *temp_s0;
    void *temp_v1;

    temp_s0 = D_003EAECC;
    if (temp_s0 != NULL) {
        M2C_FIELD(temp_s0, s8 *, 0x4BC) = 0;
        var_s1 = 0;
        M2C_FIELD(temp_s0, s8 *, 0x4BD) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x4BE) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x4C0) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x4C4) = 0;
        do {
            temp_v1 = temp_s0 + var_s1;
            M2C_FIELD(temp_v1, u8 *, 0x4C5) = func_00B61730(var_s1 & 0xFF);
            if ((s32) M2C_FIELD(temp_v1, u8 *, 0x4C5) >= 0x15) {
                M2C_FIELD(temp_v1, u8 *, 0x4C5) = 0x14U;
            }
            var_s1 += 1;
            M2C_FIELD(temp_s0, u8 *, 0x4C4) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x4C4) + 1);
        } while (var_s1 < 0x48);
        var_a1 = 0;
        do {
            temp_a0 = temp_s0 + var_a1;
            M2C_FIELD(temp_a0, s8 *, 0x50D) = 0;
            var_a1 += 8;
            M2C_FIELD(temp_a0, s8 *, 0x50E) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x50F) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x510) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x511) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x512) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x513) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x514) = 0;
        } while (var_a1 < 0x10);
        M2C_FIELD(temp_s0, s16 *, 0x556) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x558) = 0;
        M2C_FIELD(temp_s0, s16 *, 0x55C) = 0;
        M2C_FIELD(temp_s0, s16 *, 0x55E) = 0;
    }
}
