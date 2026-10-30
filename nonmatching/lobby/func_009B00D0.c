/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s16 func_002DB2C0(void *, s16, s32, s32);
extern s32 func_002DB830(void *);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
extern void *D_00A7DBF8;

s32 func_009B00D0(s32 arg0, s32 arg1) {
    s16 temp_v0;
    s16 temp_v0_2;
    s32 var_a0;
    s32 var_s5;
    s32 var_v1_2;
    void *temp_s0;
    void *var_a0_2;
    void *var_v1;

    var_s5 = 0;
    temp_s0 = D_00A7DBF8;
    temp_v0 = func_002DB830(M2C_FIELD(temp_s0, void **, 0x64C));
    temp_v0_2 = func_002DB2C0(M2C_FIELD(temp_s0, void **, 0x64C), temp_v0, arg0, arg1);
    if (temp_v0 != temp_v0_2) {
        func_0026E840(0x8400F802);
    }
    if (temp_v0_2 != temp_v0) {
        if (arg0 != 0) {
            var_a0 = 0;
            if (M2C_FIELD(temp_s0, s32 *, 0x65C) >= 0) {
                var_v1 = temp_s0;
                do {
                    var_a0 += 1;
                    M2C_FIELD(var_v1, s32 *, 0x670) = (s32) (M2C_FIELD(var_v1, s32 *, 0x670) + 1);
                    var_v1 += 4;
                } while (M2C_FIELD(temp_s0, s32 *, 0x65C) >= var_a0);
            }
        } else if (arg1 != 0) {
            var_v1_2 = 0;
            if (M2C_FIELD(temp_s0, s32 *, 0x65C) >= 0) {
                var_a0_2 = temp_s0;
                do {
                    var_v1_2 += 1;
                    M2C_FIELD(var_a0_2, s32 *, 0x670) = (s32) (M2C_FIELD(var_a0_2, s32 *, 0x670) - 1);
                    var_a0_2 += 4;
                } while (M2C_FIELD(temp_s0, s32 *, 0x65C) >= var_v1_2);
            }
        }
        var_s5 = 1;
    }
    return var_s5;
}
