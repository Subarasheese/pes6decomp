/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

s32 func_00292D50();
extern u8 D_00591A90[];

s32 func_00325A40(u8 *arg0) {
    u8 *var_a7;
    s32 temp_a5;
    u8 *var_a6;
    u8 *var_s0;
    s32 var_t0;
    s32 var_t1;
    s32 var_t2;
    u8 *temp_a4;

    var_s0 = arg0;
    temp_a5 = func_00292D50() & 0xFF;
    var_a7 = D_00591A90;
    for (var_t2 = 0; var_t2 < 2; var_t2++) {
        var_a6 = var_s0;
        for (var_t1 = 0; var_t1 < 0x20; var_t1++) {
            temp_a4 = var_a6 + 0xC8;
            if (var_t1 < temp_a5) {
                M2C_FIELD(temp_a4, s32 *, 0x14) = 3;
                for (var_t0 = 0; var_t0 < 0xB; var_t0++) {
                    if (var_a7[var_t0 + 0x47] == var_a7[var_t1 + 7]) {
                        M2C_FIELD(temp_a4, s32 *, 0x14) = 2;
                    }
                }
            } else {
                M2C_FIELD(temp_a4, s32 *, 0x14) = 4;
            }
            var_a6 += 0x20;
        }
        var_s0 += 0x400;
        var_a7 += 0x8B;
    }
    return 1;
}
