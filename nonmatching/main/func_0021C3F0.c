/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00538200;
extern char D_00538204[];

s32 func_0021C3F0(void *arg0) {
    s16 spC;
    s16 spE;
    s16 temp_v1;
    s32 var_a1;
    s32 var_a3;
    s32 var_v1;
    void *temp_a2;
    void *var_a4;
    void *var_a5;

    temp_a2 = M2C_FIELD(arg0, void **, 0xB0);
    if (temp_a2 != NULL) {
        if ((M2C_FIELD(arg0, s16 *, 0xB4) != -1) && (M2C_FIELD(arg0, s16 *, 0xB6) != -1)) {
            var_a4 = NULL;
            spC = M2C_FIELD(arg0, s16 *, 0xB4);
            spE = M2C_FIELD(arg0, s16 *, 0xB6);
            if ((*(s32 *)D_00538204) > 0) {
                var_a4 = D_00538200;
            }
            var_a5 = NULL;
            var_a1 = 0;
            if (D_00538200 != NULL) {
                var_a1 = (*(s32 *)D_00538204);
            }
            if (spC != -1) {
                temp_v1 = spE;
                if (temp_v1 != -1) {
                    var_a3 = 0;
                    if (var_a1 > 0) {
loop_9:
                        if ((M2C_FIELD(var_a4, s16 *, 2) == temp_v1) && (M2C_FIELD(var_a4, s16 *, 0) == spC)) {
                            var_a5 = var_a4;
                        } else {
                            var_a3 += 1;
                            var_a4 += 0x10;
                            if (var_a3 >= var_a1) {

                            } else {
                                goto loop_9;
                            }
                        }
                    }
                }
            }
            var_v1 = 1;
        } else {
            var_a5 = M2C_FIELD(arg0, void **, 0xC4);
            var_v1 = M2C_FIELD(arg0, s32 *, 0xBC);
        }
        M2C_FIELD(temp_a2, s32 *, 0) = 1;
        M2C_FIELD(temp_a2, s32 *, 4) = var_v1;
        M2C_FIELD(temp_a2, void **, 8) = var_a5;
    }
    return -0x80;
}
