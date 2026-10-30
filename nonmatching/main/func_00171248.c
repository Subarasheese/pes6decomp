/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00121430(void *);
s32 htci_is_inc_colon();                                /* extern */
s32 htci_is_bgn_host(s8 *);                            /* extern */
M2C_UNK func_001C7F58(s8 *, M2C_UNK *);             /* extern */
s32 func_001C80F0(s8 *);                            /* extern */
extern char D_00387818[];
extern char D_00387920[];

void func_00171248(s8 *arg0, s8 *arg1) {
    s32 temp_v0_3;
    s32 var_a1;
    s8 *var_a0;
    s8 temp_v0;
    s8 temp_v0_2;

    *arg1 = 0;
    if (htci_is_inc_colon() == 0) {
        func_001C7F58(arg1, ((void *)D_00387920));
    }
    if ((htci_is_bgn_host(arg1) == 1) && (func_00121430(arg1), temp_v0 = M2C_FIELD(&(((void *)D_00387818))[func_001C80F0(((void *)D_00387818))], s8 *, -1), (temp_v0 != 0x5C))) {
        if ((temp_v0 != 0x2F) && (temp_v0 != 0)) {
            temp_v0_2 = *arg0;
            if (temp_v0_2 != 0x5C) {
                if (temp_v0_2 != 0x2F) {
                    func_00121430(arg1);
                }
            }
        }
    }
    func_00121430(arg1);
    temp_v0_3 = func_001C80F0(arg1);
    var_a1 = 0;
    if (temp_v0_3 > 0) {
        var_a0 = arg1;
        do {
            var_a1 += 1;
            if (*var_a0 == 0x5C) {
                *var_a0 = 0x2F;
            }
            var_a0 = &arg1[var_a1];
        } while (var_a1 < temp_v0_3);
    }
}
