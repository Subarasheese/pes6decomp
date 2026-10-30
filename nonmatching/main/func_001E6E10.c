/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00145480(void *);
extern void *D_0052B130;

void *func_001E6E10(s32 arg0) {
    void *var_s0;

    var_s0 = D_0052B130;
    if (var_s0 != NULL) {
loop_1:
        if (arg0 != func_00145480(M2C_FIELD(var_s0, void **, 8))) {
            var_s0 = M2C_FIELD(var_s0, void **, 4);
            if (var_s0 != NULL) {
                goto loop_1;
            }
        }
        return var_s0;
    }
    return NULL;
}
