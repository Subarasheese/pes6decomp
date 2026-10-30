/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002ECB10(s32, u16, M2C_UNK);           /* extern */
s32 func_0093D660(u16);                             /* extern */
s32 func_0093D6E0();                                /* extern */
s32 func_0093D710();                                /* extern */

void func_009ABFA0(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_s0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s6;
    void *var_s1_2;

    var_s3 = M2C_FIELD(arg0, s32 *, 0x9C);
    if (M2C_FIELD(arg0, s32 *, 0x94) == 2) {
        var_s3 -= func_0093D660(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x98) * 2) + arg0), u16 *, 0x8E)) & 0xFF;
    }
    var_s6 = 0;
    var_s2 = 0;
    do {
        var_s4 = 0;
        var_s1 = 0;
loop_4:
        temp_s0 = var_s3 + (func_0093D660(M2C_FIELD((var_s2 + M2C_FIELD(arg0, s32 *, 4) + var_s1), u16 *, 0x1944)) & 0xFF);
        if (func_0093D710() < temp_s0) {
            temp_a0 = M2C_FIELD(arg0, s32 *, 4);
            func_002ECB10(temp_a0, M2C_FIELD((var_s2 + temp_a0 + var_s1), u16 *, 0x1944), 2);
        } else {
            temp_a0_2 = M2C_FIELD(arg0, s32 *, 4);
            func_002ECB10(temp_a0_2, M2C_FIELD((var_s2 + temp_a0_2 + var_s1), u16 *, 0x1944), 0);
        }
        var_s4 += 1;
        var_s1 += 4;
        if (var_s4 < 0x14) {
            goto loop_4;
        }
        var_s6 += 1;
        var_s2 += 0x4A4;
    } while (var_s6 < 0x14);
    if (func_0093D6E0() == 0) {
        var_s0 = 0;
        var_s1_2 = arg0;
        do {
            func_002ECB10(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(var_s1_2, u16 *, 0x8E), 1);
            var_s0 += 1;
            var_s1_2 += 2;
        } while (var_s0 < 3);
    }
}
