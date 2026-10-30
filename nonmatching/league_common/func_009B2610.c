/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009732F0(s32, s32);
extern u32 func_009A8D80(void);
extern void * func_001D5A10(s32);
M2C_UNK func_009B11D0(u8, u8);                      /* extern */
M2C_UNK func_009B1450(s32, s16, s64);               /* extern */
M2C_UNK func_009B1810(u8, u8);                      /* extern */
M2C_UNK func_009B1CC0(u8);                          /* extern */
M2C_UNK func_009B1EC0();                            /* extern */

void func_009B2610(void) {
    s16 temp_a1;
    u32 temp_v0;
    u8 temp_a0;
    u8 temp_s2;
    u8 temp_s3;
    void *temp_s0;
    void *temp_v0_2;

    temp_v0 = func_009A8D80();
    if (temp_v0 != 0) {
        temp_s0 = temp_v0 + (M2C_FIELD(temp_v0, u8 *, 0xC9C) * 0xDC) + 0x773;
        if (temp_s0 != NULL) {
            temp_v0_2 = func_001D5A10(0x102AB);
            M2C_FIELD(temp_v0, void **, 0) = temp_v0_2;
            if (temp_v0_2 != NULL) {
                M2C_FIELD(temp_v0, s32 *, 4) = func_009732F0(0x20, 5);
                M2C_FIELD(temp_v0, s32 *, 8) = func_009732F0(0x17, 1);
                M2C_FIELD(temp_v0, s32 *, 0xC) = func_009732F0(0x21, 1);
                func_009B1EC0();
                temp_s2 = M2C_FIELD(temp_s0, u8 *, 0x4B);
                temp_s3 = M2C_FIELD((temp_s2 + temp_s0), u8 *, 0x4C);
                func_009B1CC0(temp_s2);
                func_009B1810(temp_s2, temp_s3);
                temp_a1 = M2C_FIELD(temp_v0, s16 *, 0x770);
                func_009B1450(-(s32) M2C_FIELD((M2C_FIELD(temp_s0, u8 *, 0x4B) + temp_s0), u8 *, 0x94), temp_a1, (s64) ((s64) -temp_a1 << 0x30) >> 0x30);
                temp_a0 = M2C_FIELD(temp_s0, u8 *, 0x4B);
                func_009B11D0(temp_a0, M2C_FIELD((temp_a0 + temp_s0), u8 *, 0x4C));
            }
        }
    }
}
