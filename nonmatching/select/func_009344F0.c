/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002405A0(void *);
extern void *D_003EAA4C;

void func_009344F0(void) {
    void *sp2C;
    void *var_s0;

    var_s0 = D_003EAA4C;
    D_003EAA4C = NULL;
loop_1:
    if (var_s0 != NULL) {
        sp2C = var_s0;
        var_s0 = M2C_FIELD(var_s0, void **, 0x1C);
        func_002405A0(&sp2C);
        goto loop_1;
    }
}
