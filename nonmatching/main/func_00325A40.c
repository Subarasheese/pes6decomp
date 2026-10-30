/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00292D50();                                /* extern */
extern char D_00591A90[];

s32 func_00325A40(s32 arg0) {
    M2C_UNK *var_a7;
    s32 temp_a5;
    s32 var_a6;
    s32 var_s0;
    s32 var_t0;
    s32 var_t1;
    s32 var_t2;
    void *temp_a4;

    var_s0 = arg0;
    temp_a5 = func_00292D50() & 0xFF;
    var_t2 = 0;
    var_a7 = ((void *)D_00591A90);
    do {
        var_t1 = 0;
        var_a6 = var_s0;
loop_2:
        temp_a4 = var_a6 + 0xC8;
        if (var_t1 < temp_a5) {
            M2C_FIELD(temp_a4, s32 *, 0x14) = 3;
            var_t0 = 0;
            do {
                if (M2C_FIELD((var_a7 + var_t0), u8 *, 0x47) == M2C_FIELD((var_a7 + var_t1), u8 *, 7)) {
                    M2C_FIELD(temp_a4, s32 *, 0x14) = 2;
                }
                var_t0 += 1;
            } while (var_t0 < 0xB);
        } else {
            M2C_FIELD(temp_a4, s32 *, 0x14) = 4;
        }
        var_t1 += 1;
        var_a6 += 0x20;
        if (var_t1 < 0x20) {
            goto loop_2;
        }
        var_t2 += 1;
        var_s0 += 0x400;
        var_a7 += 0x8B;
    } while (var_t2 < 2);
    return 1;
}
