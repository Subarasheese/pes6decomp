/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern u8 func_002243B0(s32, s32);
extern void * func_00228A80(void);
void *func_00224520(s32, s32);                      /* extern */
M2C_UNK func_0094CFE0(s32, s32, s32);               /* extern */
extern void *D_003EAEE8;

void func_00B68E70(void) {
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_s2;
    s32 temp_s3;
    s32 var_a2;
    s32 var_s4;
    s32 var_v1;
    u8 *var_a0_2;
    void *temp_s1;
    void *temp_s5;
    void *var_a0;
    void *var_v0;

    temp_s5 = D_003EAEE8;
    if ((temp_s5 != NULL) && (func_00228A80() != NULL)) {
        temp_s2 = func_00225820() & 0xFF;
        var_s4 = 0;
        if ((s32) M2C_FIELD(temp_s5, u8 *, 0x330C) > 0) {
            do {
                temp_s3 = func_002243B0(temp_s2 & 0xFF, var_s4 & 0xFF) & 0xFF;
                var_v0 = func_00224520(temp_s2 & 0xFF, temp_s3);
                temp_s1 = temp_s5 + var_s4;
                temp_a0 = var_s4 & 0xFF;
                M2C_FIELD(temp_s1, u8 *, 0x379D) = (u8) M2C_FIELD(var_v0, u8 *, 2);
                if (temp_a0 >= 0x20) {
                    var_v1 = 0;
                } else if (D_003EAEE8 == NULL) {
                    var_v1 = 0;
                } else {
                    var_a2 = 0;
                    var_a0 = D_003EAEE8 + (temp_a0 * 0x198) + 0xC;
loop_10:
                    if (M2C_FIELD(var_a0, s16 *, 4) != 0) {
                        var_v1 = 0;
                    } else {
                        var_a2 += 1;
                        var_a0 += 0x10;
                        if (var_a2 >= 0x17) {
                            var_v1 = 1;
                        } else {
                            goto loop_10;
                        }
                    }
                }
                if (var_v1 == 0) {
                    M2C_FIELD(temp_s1, u8 *, 0x377D) = (u8) (M2C_FIELD(temp_s1, u8 *, 0x379D) + 0x19);
                    var_a0_2 = temp_s1 + 0x377D;
                    if ((s32) M2C_FIELD(temp_s1, u8 *, 0x377D) >= 0x64) {
                        M2C_FIELD(temp_s1, u8 *, 0x377D) = 0x63U;
                    }
                } else {
                    temp_a2 = (0 & 7) << 5;
                    M2C_FIELD(var_v0, u8 *, 3) = (u8) ((M2C_FIELD(var_v0, u8 *, 3) & ~0xE0) | temp_a2);
                    func_0094CFE0(temp_s2 & 0xFF, temp_s3, temp_a2);
                    var_v0 = func_00224520(temp_s2 & 0xFF, temp_s3);
                    var_a0_2 = temp_s1 + 0x377D;
                    M2C_FIELD(temp_s1, u8 *, 0x377D) = (u8) M2C_FIELD(var_v0, u8 *, 2);
                }
                var_s4 += 1;
                M2C_FIELD(var_v0, u8 *, 2) = (u8) *var_a0_2;
                M2C_FIELD(temp_s1, u8 *, 0x37BD) = (u8) M2C_FIELD(temp_s1, u8 *, 0x379D);
            } while (var_s4 < (s32) M2C_FIELD(temp_s5, u8 *, 0x330C));
        }
    }
}
