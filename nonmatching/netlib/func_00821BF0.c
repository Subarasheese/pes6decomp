/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00841140();                                /* extern */
M2C_UNK func_00D0BE30(s32, s32, s64, void *, void *, s32); /* extern */
extern char D_008A4398[];
extern char D_008A5F70[];

s32 func_00821BF0(void *arg0) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a5;
    s32 temp_v0;
    s32 var_a4;
    s32 var_a6;
    s64 var_a7;
    void *var_a3;

    temp_v0 = func_00841140();
    if ((*(s32 *)D_008A4398) == 0) {
        return 1;
    }
    if ((((void *)D_008A5F70) != NULL) && (arg0 != NULL)) {
        if (temp_v0 != 0) {
            if (M2C_FIELD(arg0, s32 *, 0) != 0x107) {
                return 1;
            }
            if (M2C_FIELD(arg0, s32 *, 4) == 0xC) {
                temp_a1 = M2C_FIELD(arg0, s32 *, 8);
                var_a7 = 0;
                temp_a0 = M2C_FIELD(arg0, s32 *, 0xC);
                var_a4 = 0;
                temp_a5 = M2C_FIELD(arg0, s32 *, 0x10);
                do {
                    var_a3 = temp_v0 + (var_a4 * 8);
                    if ((M2C_FIELD(var_a3, s32 *, 0x780) == temp_a5) && (((s64) (var_a7 << 0x38) >> 0x38) == 0) && (temp_a5 != 0)) {
                        M2C_FIELD(var_a3, s8 *, 0x784) = (s8) temp_a0;
                        var_a7 = 1;
                        M2C_FIELD(var_a3, s8 *, 0x785) = (s8) temp_a1;
                    }
                    var_a4 += 1;
                } while (var_a4 < 8);
                if (((s64) (var_a7 << 0x38) >> 0x38) == 0) {
                    var_a6 = 0;
                    do {
                        var_a4 = temp_v0 + (var_a6 * 8);
                        var_a3 = var_a4 + 0x780;
                        if ((M2C_FIELD(var_a4, s32 *, 0x780) == 0) && (((s64) (var_a7 << 0x38) >> 0x38) == 0) && (temp_a5 != 0)) {
                            M2C_FIELD(var_a4, s32 *, 0x780) = temp_a5;
                            var_a7 = 1;
                            M2C_FIELD(var_a4, s8 *, 0x784) = (s8) temp_a0;
                            M2C_FIELD(var_a4, s8 *, 0x785) = (s8) temp_a1;
                        }
                        var_a6 += 1;
                    } while (var_a6 < 8);
                }
                func_00D0BE30(temp_a0, temp_a1, 1, var_a3, (void *) var_a4, temp_a5);
                return 4;
            }
            return 1;
        }
        goto block_8;
    }
block_8:
    return 1;
}
