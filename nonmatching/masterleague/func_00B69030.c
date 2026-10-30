/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern u8 func_002243B0(s32, s32);
extern void * func_00228A80(void);
void *func_00224520(s32, s32);                      /* extern */
M2C_UNK func_0094CFE0(s32, s32, s32, u8);           /* extern */
extern void *D_003EAEE8;

void func_00B69030(void) {
    s32 temp_a2;
    s32 temp_s0;
    s32 temp_s4;
    s32 var_s5;
    u8 *var_s3;
    u8 temp_a3;
    void *temp_s1;
    void *temp_v0;
    void *temp_v0_2;
    void *var_s2;

    temp_s1 = D_003EAEE8;
    if ((temp_s1 != NULL) && (func_00228A80() != NULL)) {
        temp_s0 = func_00225820() & 0xFF;
        var_s5 = 0;
        if ((s32) M2C_FIELD(temp_s1, u8 *, 0x330C) > 0) {
            do {
                temp_s4 = func_002243B0(temp_s0 & 0xFF, var_s5 & 0xFF) & 0xFF;
                temp_v0 = func_00224520(temp_s0 & 0xFF, temp_s4);
                if (((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 0) << 0x38) >> 0x3C) != 0) {
                    var_s2 = temp_s1 + var_s5;
                    var_s3 = var_s2 + 0x379D;
                    M2C_FIELD(var_s2, u8 *, 0x379D) = (u8) M2C_FIELD(temp_v0, u8 *, 2);
                    M2C_FIELD(var_s2, u8 *, 0x377D) = (u8) (M2C_FIELD(var_s2, u8 *, 0x379D) + 0x19);
                    if ((M2C_FIELD(var_s2, u8 *, 0x379D) + 0x19) >= 0x64) {
                        M2C_FIELD(var_s2, u8 *, 0x377D) = 0x63U;
                    }
                    M2C_FIELD(temp_v0, u8 *, 2) = (u8) M2C_FIELD(var_s2, u8 *, 0x377D);
                } else {
                    var_s2 = temp_s1 + var_s5;
                    temp_a2 = (0 & 7) << 5;
                    M2C_FIELD(var_s2, u8 *, 0x379D) = (u8) M2C_FIELD(temp_v0, u8 *, 2);
                    temp_a3 = M2C_FIELD(temp_v0, u8 *, 3);
                    var_s3 = var_s2 + 0x379D;
                    M2C_FIELD(temp_v0, u8 *, 3) = (u8) ((temp_a3 & ~0xE0) | temp_a2);
                    func_0094CFE0(temp_s0 & 0xFF, temp_s4, temp_a2, temp_a3);
                    temp_v0_2 = func_00224520(temp_s0 & 0xFF, temp_s4);
                    M2C_FIELD(var_s2, u8 *, 0x377D) = (u8) M2C_FIELD(temp_v0_2, u8 *, 2);
                    M2C_FIELD(temp_v0_2, u8 *, 2) = (u8) M2C_FIELD(var_s2, u8 *, 0x377D);
                }
                var_s5 += 1;
                M2C_FIELD(var_s2, u8 *, 0x37BD) = (u8) *var_s3;
            } while (var_s5 < (s32) M2C_FIELD(temp_s1, u8 *, 0x330C));
        }
    }
}
