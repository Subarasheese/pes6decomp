/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF820(void *, s32);
extern char D_00A02FB8[];
extern void *D_00A7DE00;

s32 func_009D21D0(s8 *arg0, s8 *arg1) {
    s8 *var_a1;
    s8 *var_s0;
    void *temp_v1;
    void *temp_v1_2;

    var_s0 = arg1;
    if (D_00A7DE00 == NULL) {
        return 0;
    }
    temp_v1 = M2C_FIELD(D_00A7DE00, void **, 0xF0);
    var_a1 = arg0;
    if (temp_v1 != NULL) {
        if ((arg0 == NULL) || (*arg0 == 0)) {
            var_a1 = ((void *)D_00A02FB8);
        }
        func_001DF820(M2C_FIELD(temp_v1, void **, 0xC), (s32) var_a1);
    }
    temp_v1_2 = M2C_FIELD(D_00A7DE00, void **, 0xF4);
    if (temp_v1_2 != NULL) {
        if ((var_s0 == NULL) || (*var_s0 == 0)) {
            var_s0 = ((void *)D_00A02FB8);
        }
        func_001DF820(M2C_FIELD(temp_v1_2, void **, 0xC), (s32) var_s0);
    }
    return 1;
}
