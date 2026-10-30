/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001BC3D0(s32, s32, s32, s32);
extern void func_001BC300(void);
extern char D_008F9FA0[];
extern char D_008FA1C0[];
extern char D_008FA240[];

void func_008F7C70(void) {
    M2C_UNK *var_a0;
    M2C_UNK *var_s1;
    M2C_UNK *var_s2;
    s32 *temp_v1;
    s32 *var_s0;
    s32 var_a1;
    s32 var_a2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;

    func_001BC300();
    var_s4 = 0;
    var_s2 = ((void *)D_008FA240);
    do {
        var_s5 = 0;
        if (0 < 4) {
            do {
                var_s3 = 0;
                var_s1 = ((void *)D_008F9FA0);
                var_s0 = var_s2 + (var_s5 * 0x3C);
loop_3:
                var_s3 += 1;
                *var_s0 = func_001BC3D0(var_s4, M2C_FIELD(var_s1, s32 *, 0), var_s5, M2C_FIELD(var_s1, s32 *, 4));
                var_s1 += 8;
                var_s0 += 4;
                if (var_s3 < 0xF) {
                    goto loop_3;
                }
                var_s5 += 1;
            } while (var_s5 < 4);
        }
        var_s4 += 1;
        var_s2 += 0xF0;
    } while (var_s4 < 8);
    var_a1 = 0;
    var_a0 = ((void *)D_008FA1C0);
    do {
        var_a2 = 0;
        if (0 < 4) {
            do {
                temp_v1 = var_a0 + (var_a2 * 4);
                var_a2 += 1;
                *temp_v1 = 0;
            } while (var_a2 < 4);
        }
        var_a1 += 1;
        var_a0 += 0x10;
    } while (var_a1 < 8);
}
