/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern char D_00CB3488[];
extern char D_00CBFAA0[];

void func_00C12EB0(void) {
    u8 *var_a0;
    u8 *base;
    s32 var_a2;
    s32 var_a3;
    s32 var_t3;
    u16 var_a1;
    u8 *var_t2;
    u8 *temp_a4;
    u8 *temp_a5;
    u8 *var_a0_2;

    base = (u8 *)D_00CBFAA0;
    var_a1 = 0;
    var_a2 = 0;
    if ((s32) M2C_FIELD(base, u16 *, 0xB222) > 0) {
        var_a0 = base;
        do {
            M2C_FIELD(var_a0, u16 *, 0) = var_a1;
            var_t3 = 0;
            var_t2 = (u8 *)D_00CB3488;
            temp_a4 = base + M2C_FIELD(var_a0, u16 *, 0);
            var_a0[2] = temp_a4[0x4E20];
loop_3:
            if (*var_t2 == temp_a4[0x4E20]) {
                var_a3 = 1;
            } else {
                var_t3 += 1;
                var_t2 += 1;
                if (var_t3 >= 8) {
                    var_a3 = 0;
                } else {
                    goto loop_3;
                }
            }
            if (var_a3 == 0) {
                var_a0[3] = temp_a4[0x4E21];
            } else {
                var_a0[3] = 0xFFU;
            }
            var_a2 += 1;
            temp_a5 = base + var_a0[2];
            var_a0 += 4;
            var_a1 = (var_a1 + temp_a5[0xB224]) & 0xFFFF;
        } while (var_a2 < (s32) M2C_FIELD(base, u16 *, 0xB222));
    }
    if (var_a2 < 0x1388) {
        var_a0_2 = base + (var_a2 * 4);
        do {
            M2C_FIELD(var_a0_2, s16 *, 0) = 0;
            var_a2 += 1;
            var_a0_2[2] = 0;
            var_a0_2 += 4;
        } while (var_a2 < 0x1388);
    }
}
