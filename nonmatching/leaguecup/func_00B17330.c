/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0095CA00();                              /* extern */
extern void *D_003EAD78;

void func_00B17330(void) {
    s32 temp_a0;
    s32 var_a3;
    void *temp_a1;
    void *temp_a2;
    void *temp_s0;
    void *temp_v0;

    temp_s0 = D_003EAD78;
    if (temp_s0 != NULL) {
        temp_v0 = func_0095CA00();
        var_a3 = 0;
        M2C_FIELD(temp_s0, u8 *, 0x2D) = (u8) M2C_FIELD(temp_v0, u8 *, 0x44);
        M2C_FIELD(temp_s0, u8 *, 0x2E) = (u8) M2C_FIELD(temp_v0, u8 *, 0x45);
        M2C_FIELD(temp_s0, u8 *, 0x2F) = (u8) M2C_FIELD(temp_v0, u8 *, 0x46);
        M2C_FIELD(temp_s0, u8 *, 0x30) = (u8) M2C_FIELD(temp_v0, u8 *, 0x47);
        M2C_FIELD(temp_s0, u8 *, 0x31) = (u8) M2C_FIELD(temp_v0, u8 *, 0x48);
        M2C_FIELD(temp_s0, u8 *, 0x32) = (u8) M2C_FIELD(temp_v0, u8 *, 0x49);
        do {
            temp_a0 = (var_a3 & 0xFF) * 8;
            var_a3 = (var_a3 + 1) & 0xFF;
            temp_a2 = temp_v0 + temp_a0;
            temp_a1 = temp_s0 + temp_a0;
            M2C_FIELD(temp_a1, u8 *, 0x33) = (u8) M2C_FIELD(temp_a2, u8 *, 0x1B);
            M2C_FIELD(temp_a1, u8 *, 0x34) = (u8) M2C_FIELD(temp_a2, u8 *, 0x1A);
            M2C_FIELD(temp_a1, u8 *, 0x35) = (u8) M2C_FIELD(temp_a2, u8 *, 0x19);
            M2C_FIELD(temp_a1, u8 *, 0x36) = (u8) M2C_FIELD(temp_a2, u8 *, 0x18);
            M2C_FIELD(temp_a1, u8 *, 0x37) = (u8) M2C_FIELD(temp_a2, u8 *, 0x17);
            M2C_FIELD(temp_a1, u8 *, 0x38) = (u8) M2C_FIELD(temp_a2, u8 *, 0x16);
            M2C_FIELD(temp_a1, u8 *, 0x39) = (u8) M2C_FIELD(temp_a2, u8 *, 0x15);
            M2C_FIELD(temp_a1, u8 *, 0x3A) = (u8) M2C_FIELD(temp_a2, u8 *, 0x14);
        } while (var_a3 < 6);
    }
}
