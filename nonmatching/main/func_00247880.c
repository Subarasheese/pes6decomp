/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00247460(s32);
extern char D_003AA200[];
extern char D_0053CB40[];

void func_00247880(s32 arg0, void *arg1) {
    s32 *var_a6;
    s32 var_a1;
    s32 var_a2;
    s32 var_a4;
    s32 var_s2;
    s8 *var_a5;
    s8 var_s0;
    void *temp_v0;
    void *var_a0;
    void *var_a7;

    temp_v0 = arg1 + (arg0 * 0x34);
    var_s2 = 0;
    do {
        var_a1 = 0;
        if (var_s2 == 0) {
            var_s0 = -1;
        } else {
            var_s0 = 1;
        }
        var_a2 = 0;
        var_a0 = arg1;
loop_5:
        if (M2C_FIELD(var_a0, s8 *, 1) == (var_s0 * 3)) {
            var_a1 += 1;
        }
        if (var_a1 >= 2) {
            if (func_00247460(var_s2) == 0) {
                M2C_FIELD(temp_v0, s8 *, 1) = var_s0;
            } else {
                M2C_FIELD(temp_v0, s8 *, 1) = (s8) (var_s0 * 4);
            }
        } else {
            var_a2 += 1;
            var_a0 += 0x34;
            if (var_a2 < 8) {
                goto loop_5;
            }
        }
        if (func_00247460(var_s2) == 0) {
            var_a4 = 0;
            var_a7 = arg1;
            var_a6 = ((void *)D_0053CB40);
            var_a5 = ((void *)D_003AA200);
            do {
                if (M2C_FIELD(var_a7, s8 *, 1) == (var_s0 * 0xB)) {
                    M2C_FIELD(var_a7, s8 *, 1) = 0xA;
                    if (*var_a6 != 1) {
                        *var_a6 = 0;
                        *var_a5 = 0;
                    }
                }
                if (M2C_FIELD(var_a7, s8 *, 1) == (var_s0 * 4)) {
                    M2C_FIELD(var_a7, s8 *, 1) = 0;
                    *var_a6 = 0;
                    *var_a5 = 0;
                }
                var_a4 += 1;
                var_a7 += 0x34;
                var_a6 += 4;
                var_a5 += 0x34;
            } while (var_a4 < 8);
        }
        var_s2 += 1;
    } while (var_s2 < 2);
}
