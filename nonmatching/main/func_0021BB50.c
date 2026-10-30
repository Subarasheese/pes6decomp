/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00538200;
extern char D_00538204[];
extern M2C_UNK func_002187C0;

s32 func_0021BB50(void *arg0) {
    s16 spC;
    s16 spE;
    s16 temp_a1;
    s32 *var_a1;
    s32 *var_a2_2;
    s32 temp_a0;
    s32 temp_v1;
    s32 var_a2;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_a4;
    s32 var_a4_2;
    s32 var_v0;
    s32 var_v1;
    void *var_a5;
    void *var_a6;

    var_v1 = 0;
    var_a6 = NULL;
    spC = M2C_FIELD(arg0, s16 *, 0xC);
    spE = M2C_FIELD(arg0, s16 *, 0xE);
    if ((*(s32 *)D_00538204) > 0) {
        var_a6 = D_00538200;
    }
    var_a5 = NULL;
    var_a4 = 0;
    if (D_00538200 != NULL) {
        var_a4 = (*(s32 *)D_00538204);
    }
    if (spC != -1) {
        temp_a1 = spE;
        if (temp_a1 != -1) {
            var_a3 = 0;
            if (var_a4 > 0) {
loop_6:
                if ((M2C_FIELD(var_a6, s16 *, 2) == temp_a1) && (M2C_FIELD(var_a6, s16 *, 0) == spC)) {
                    var_a5 = var_a6;
                } else {
                    var_a3 += 1;
                    var_a6 += 0x10;
                    if (var_a3 < var_a4) {
                        goto loop_6;
                    }
                }
            }
        }
    }
    var_a2 = 0;
    if (M2C_FIELD(var_a5, s16 *, 4) == 3) {
        var_a2 = 1;
    }
    if (var_a2 != 0) {
        var_v1 = -0x7E;
    }
    var_v0 = -0x7E;
    if (var_v1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x20) = var_v1;
        var_a4_2 = 0;
        var_a2_2 = M2C_FIELD(arg0, s32 **, 0xA8);
        temp_v1 = M2C_FIELD(arg0, s32 *, 0xAC);
        temp_a0 = *var_a2_2;
        var_a3_2 = 0;
        if (temp_a0 != temp_v1) {
            var_a1 = var_a2_2;
            do {
                var_a1 += 4;
                var_a4_2 += 1;
            } while (*var_a1 != temp_v1);
        }
        if (temp_a0 != &func_002187C0) {
            do {
                var_a2_2 += 4;
                var_a3_2 += 1;
            } while (*var_a2_2 != &func_002187C0);
        }
        var_v0 = var_a3_2 - var_a4_2;
    }
    return var_v0;
}
