/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001E6310(s32, s32);
extern void func_001EB320(s32);
M2C_UNK func_001E6360(M2C_UNK, M2C_UNK);            /* extern */

void func_001E60F0(void **arg0, void *arg1) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;

    func_001E6360(5, 2);
    if (M2C_FIELD(arg1, u8 *, 0x3C) & 1) {
        temp_a0 = *arg0;
        M2C_FIELD(temp_a0, s64 *, 0) = (s64) M2C_FIELD(arg1, s64 *, 0);
        M2C_FIELD(temp_a0, s64 *, 8) = 0x42;
        *arg0 += 0x10;
    }
    if (((s32) M2C_FIELD(arg1, u8 *, 0x3C) >> 1) & 1) {
        temp_a0_2 = *arg0;
        M2C_FIELD(temp_a0_2, s64 *, 0) = (s64) M2C_FIELD(arg1, s64 *, 8);
        M2C_FIELD(temp_a0_2, s64 *, 8) = 8;
        *arg0 += 0x10;
    }
    if (((s32) M2C_FIELD(arg1, u8 *, 0x3C) >> 2) & 1) {
        temp_a0_3 = *arg0;
        M2C_FIELD(temp_a0_3, s64 *, 0) = (s64) M2C_FIELD(arg1, s64 *, 0x10);
        M2C_FIELD(temp_a0_3, s64 *, 8) = 0x47;
        *arg0 += 0x10;
    }
    if (((s32) M2C_FIELD(arg1, u8 *, 0x3C) >> 4) & 1) {
        func_001EB320((s32) ((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x20) << 0x3A) >> 0x3F));
        temp_a0_4 = *arg0;
        M2C_FIELD(temp_a0_4, s64 *, 0) = (s64) M2C_FIELD(arg1, u8 *, 0x20);
        M2C_FIELD(temp_a0_4, s64 *, 8) = 0x14;
        *arg0 += 0x10;
    }
    if (((s32) M2C_FIELD(arg1, u8 *, 0x3C) >> 3) & 1) {
        temp_a0_5 = *arg0;
        M2C_FIELD(temp_a0_5, s64 *, 0) = (s64) M2C_FIELD(arg1, s64 *, 0x18);
        M2C_FIELD(temp_a0_5, s64 *, 8) = 0x4E;
        *arg0 += 0x10;
    }
    if (((s32) M2C_FIELD(arg1, u8 *, 0x3C) >> 5) & 1) {
        temp_a0_6 = *arg0;
        M2C_FIELD(temp_a0_6, s64 *, 0) = (s64) M2C_FIELD(arg1, s64 *, 0x28);
        M2C_FIELD(temp_a0_6, s64 *, 8) = 0x40;
        *arg0 += 0x10;
    }
    func_001E6310((s32) arg0, 5);
}
