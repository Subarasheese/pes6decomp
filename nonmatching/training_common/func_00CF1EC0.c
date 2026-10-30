/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00153FA0(void *);                      /* extern */
M2C_UNK func_001F1EA0(s32, s32);                    /* extern */
M2C_UNK func_00CF2140(void *, s32);                 /* extern */
M2C_UNK func_00CF2270(void *, s32);                 /* extern */
extern void *D_003EB334;
extern s32 D_003EB338;

void func_00CF1EC0(void) {
    s32 temp_a1;
    s32 var_v1;
    void *temp_a0;
    void *temp_s0;
    void *temp_v1;
    void *var_s1;

    var_s1 = D_003EB334;
    if (var_s1 != NULL) {
        do {
            temp_a1 = M2C_FIELD(var_s1, s32 *, 0);
            temp_s0 = M2C_FIELD(var_s1, void **, 0x100);
            switch (temp_a1) {                      /* irregular */
            case 0:
                M2C_FIELD(var_s1, s32 *, 0) = (s32) (temp_a1 + 1);
                break;
            case 1:
                func_00CF2270(var_s1, temp_a1);
                M2C_FIELD(var_s1, s32 *, 0) = (s32) (M2C_FIELD(var_s1, s32 *, 0) + 1);
                break;
            case 2:
                func_00CF2140(var_s1, temp_a1);
                break;
            case 3:
                if (var_s1 == NULL) {
                    var_v1 = 0;
                } else {
                    temp_v1 = M2C_FIELD(var_s1, void **, 0x104);
                    if (temp_v1 != NULL) {
                        M2C_FIELD(temp_v1, void **, 0x100) = temp_s0;
                    }
                    temp_a0 = M2C_FIELD(var_s1, void **, 0x100);
                    if (temp_a0 != NULL) {
                        M2C_FIELD(temp_a0, void **, 0x104) = (void *) M2C_FIELD(var_s1, void **, 0x104);
                    }
                    if (D_003EB334 == var_s1) {
                        D_003EB334 = NULL;
                        D_003EB338 = 0;
                    }
                    var_v1 = 1;
                }
                if (var_v1 != 0) {
                    func_001F1EA0(M2C_FIELD(var_s1, s32 *, 0x60), temp_a1);
                    func_00153FA0(var_s1);
                }
                break;
            default:
                M2C_FIELD(var_s1, s32 *, 0) = 3;
                break;
            }
            var_s1 = temp_s0;
        } while (temp_s0 != NULL);
    }
}
