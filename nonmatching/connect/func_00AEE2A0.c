/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EDA30(void *, s32);
M2C_UNK func_001B66C0(M2C_UNK);                     /* extern */
void *func_00AEC2B0();                              /* extern */
extern void *D_00B02B90;

void func_00AEE2A0(void) {
    void *var_s0;

    var_s0 = D_00B02B90;
    if (var_s0 == NULL) {
        var_s0 = func_00AEC2B0();
    }
    func_001EDA30(var_s0, 1);
    D_00B02B90 = var_s0;
    if (var_s0 != NULL) {
        func_001B66C0(0x2C00D0);
    }
}
