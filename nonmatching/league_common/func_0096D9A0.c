/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
extern void *D_003EA944;
extern s32 D_003EA948;

void func_0096D9A0(void) {
    void *temp_s0;
    void *var_s1;

    var_s1 = D_003EA944;
    if (var_s1 != NULL) {
        do {
            func_00153FA0(M2C_FIELD(var_s1, void **, 0));
            temp_s0 = M2C_FIELD(var_s1, void **, 4);
            func_00153FA0(var_s1);
            var_s1 = temp_s0;
        } while (temp_s0 != NULL);
    }
    D_003EA944 = NULL;
    D_003EA948 = 0;
}
