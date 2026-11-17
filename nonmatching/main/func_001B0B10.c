/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern void func_0017F880(u32);
extern u8 D_003E98E4;
extern char D_00522350[];
extern char D_005223B0[];

void func_001B0B10(void) {
    char *var_a0;
    char *var_s2;
    s32 var_a1;
    s32 var_s0;
    s32 var_s3;
    char *temp_v1;

    var_a1 = 0;
    var_a0 = D_00522350;
    do {
        M2C_FIELD(var_a0, s32 *, 0) = 0;
        var_a1 += 7;
        M2C_FIELD(var_a0, s32 *, 4) = 0;
        M2C_FIELD(var_a0, s32 *, 8) = 0;
        M2C_FIELD(var_a0, s32 *, 0xC) = 0;
        M2C_FIELD(var_a0, s32 *, 0x10) = 0;
        M2C_FIELD(var_a0, s32 *, 0x14) = 0;
        M2C_FIELD(var_a0, s32 *, 0x18) = 0;
        var_a0 += 0x1C;
    } while (var_a1 < 0x10);
    temp_v1 = D_00522350 + (var_a1 * 4);
    var_s0 = 0;
    M2C_FIELD(temp_v1, s32 *, 0) = 0;
    var_s2 = D_005223B0;
    M2C_FIELD(temp_v1, s32 *, 4) = 0;
    do {
        if (M2C_FIELD(var_s2, u8 *, 0x64) == 1) {
            var_s3 = 0;
            while (var_s3 < (s32) M2C_FIELD(var_s2, u8 *, 0x67)) {
                func_0017F880(M2C_FIELD(var_s2, u16 *, 0x6A + var_s3 * 2));
                var_s3 += 1;
            }
            M2C_FIELD(var_s2, s8 *, 0x10) = 4;
            M2C_FIELD(var_s2, u8 *, 0x64) = 0U;
        }
        M2C_FIELD(var_s2, s8 *, 0x65) = 0;
        var_s0 += 1;
        D_003E98E4 = M2C_FIELD(var_s2, u8 *, 0x66);
        var_s2 += 0x80;
    } while (var_s0 < 4);
}
