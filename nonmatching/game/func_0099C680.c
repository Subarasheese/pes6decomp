/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00592800[];

void func_0099C680(void) {
    s32 temp_a0;
    s32 temp_a4;
    s32 var_t1;
    s8 var_a1;
    s8 var_t2;
    u8 temp_a4_2;
    void *temp_a5;
    void *temp_t0;

    var_a1 = 0;
    do {
        temp_a0 = var_a1 & 0xFF;
        temp_t0 = ((void *)D_00592800) + (temp_a0 * 0x28);
        if (M2C_FIELD(temp_t0, u8 *, 1) != 0xFF) {
            if (M2C_FIELD(temp_t0, u8 *, 3) != 0) {
                var_t2 = (temp_a0 + 1) & 0xFF;
                if (var_t2 >= 8) {
                    var_t2 = 0;
                }
loop_6:
                temp_a4 = var_t2 & 0xFF;
                if (temp_a4 == temp_a0) {
                    M2C_FIELD(temp_t0, s8 *, 2) = var_a1;
                } else {
                    temp_a5 = ((void *)D_00592800) + (temp_a4 * 0x28);
                    temp_a4_2 = M2C_FIELD(temp_a5, u8 *, 1);
                    var_t1 = 0;
                    if ((temp_a4_2 != 0xFF) && (M2C_FIELD(temp_t0, u8 *, 1) == temp_a4_2) && (M2C_FIELD(temp_a5, u8 *, 3) != 0)) {

                    } else {
                        var_t1 = 1;
                    }
                    if (var_t1 == 1) {
                        var_t2 = (var_t2 + 1) & 0xFF;
                        if (var_t2 >= 8) {
                            var_t2 = 0;
                        }
                        goto loop_6;
                    }
                    M2C_FIELD(temp_t0, s8 *, 2) = var_t2;
                }
            } else {
                M2C_FIELD(temp_t0, s8 *, 2) = -1;
            }
        }
        var_a1 = (var_a1 + 1) & 0xFF;
    } while (var_a1 < 8);
}
