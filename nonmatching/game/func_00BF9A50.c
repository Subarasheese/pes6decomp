/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
extern char D_00CBD7A0[];
extern s32 (*D_00CBD7A4)();
extern void *D_00CBD7A8;

void func_00BF9A50(void) {
    s32 (*var_a1)();
    s32 (*var_s1)();
    s8 var_a0;
    void *temp_s0;

    if (D_00CBD7A4 != NULL) {
        var_a0 = 1;
        if (D_00CBD7A4() == 1) {
            D_00CBD7A4 = NULL;
            var_a1 = D_00CBD7A4;
            var_s1 = NULL;
            if (var_a1 == NULL) {
                if (D_00CBD7A8 != NULL) {
                    temp_s0 = M2C_FIELD(D_00CBD7A8, void **, 4);
                    var_s1 = M2C_FIELD(D_00CBD7A8, s32 (**)(), 0);
                    func_00153FA0(D_00CBD7A8);
                    D_00CBD7A8 = temp_s0;
                }
                var_a1 = var_s1;
            }
            var_a0 = 2;
            D_00CBD7A4 = var_a1;
        }
        (*(s8 *)D_00CBD7A0) = var_a0;
    } else {
        (*(s8 *)D_00CBD7A0) = 0;
    }
}
