/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern u8 func_002243B0(s32, s32);
extern void * func_00228A80(void);
void *func_00224520(s32, s32);                      /* extern */
M2C_UNK func_0094CFE0(s32, s32, u8);                /* extern */
extern void *D_003EAEE8;

void func_00B68D70(void) {
    s32 temp_s2;
    s32 temp_s4;
    s32 var_s5;
    u8 temp_a2;
    void *temp_s1;
    void *temp_s3;
    void *temp_v0;

    temp_s3 = D_003EAEE8;
    if ((temp_s3 != NULL) && (func_00228A80() != NULL)) {
        temp_s2 = func_00225820() & 0xFF;
        var_s5 = 0;
        if ((s32) M2C_FIELD(temp_s3, u8 *, 0x330C) > 0) {
            do {
                temp_s4 = func_002243B0(temp_s2 & 0xFF, var_s5 & 0xFF) & 0xFF;
                temp_v0 = func_00224520(temp_s2 & 0xFF, temp_s4);
                temp_a2 = M2C_FIELD(temp_v0, u8 *, 3);
                temp_s1 = temp_s3 + var_s5;
                M2C_FIELD(temp_v0, u8 *, 3) = (u8) ((temp_a2 & ~0xE0) | ((0 & 7) << 5));
                M2C_FIELD(temp_s1, u8 *, 0x379D) = (u8) M2C_FIELD(temp_v0, u8 *, 2);
                func_0094CFE0(temp_s2 & 0xFF, temp_s4, temp_a2);
                var_s5 += 1;
                M2C_FIELD(temp_s1, u8 *, 0x377D) = (u8) M2C_FIELD(func_00224520(temp_s2 & 0xFF, temp_s4), u8 *, 2);
                M2C_FIELD(temp_s1, u8 *, 0x37BD) = (u8) M2C_FIELD(temp_s1, u8 *, 0x379D);
            } while (var_s5 < (s32) M2C_FIELD(temp_s3, u8 *, 0x330C));
        }
    }
}
