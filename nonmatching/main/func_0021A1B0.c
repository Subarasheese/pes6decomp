/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00538200;
extern char D_00538204[];

s32 func_0021A1B0(void *arg0) {
    s16 spC;
    s16 spE;
    s16 temp_v1;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    s32 var_v1;
    void *var_a4;
    void *var_a5;

    var_a5 = NULL;
    spC = M2C_FIELD(arg0, s16 *, 0xC);
    spE = M2C_FIELD(arg0, s16 *, 0xE);
    if ((*(s32 *)D_00538204) > 0) {
        var_a5 = D_00538200;
    }
    var_a4 = NULL;
    var_a3 = 0;
    if (D_00538200 != NULL) {
        var_a3 = (*(s32 *)D_00538204);
    }
    if (spC != -1) {
        temp_v1 = spE;
        if (temp_v1 != -1) {
            var_a2 = 0;
            if (var_a3 > 0) {
loop_6:
                if ((M2C_FIELD(var_a5, s16 *, 2) == temp_v1) && (M2C_FIELD(var_a5, s16 *, 0) == spC)) {
                    var_a4 = var_a5;
                } else {
                    var_a2 += 1;
                    var_a5 += 0x10;
                    if (var_a2 >= var_a3) {

                    } else {
                        goto loop_6;
                    }
                }
            }
        }
    }
    var_a1 = 0;
    if (M2C_FIELD(var_a4, s16 *, 4) == 3) {
        var_a1 = 1;
    }
    if (var_a1 == 0) {
        var_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 0x18);
    } else {
        var_v1 = 1;
    }
    M2C_FIELD(arg0, s32 *, 0xBC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = var_v1;
    return -0x7E;
}
