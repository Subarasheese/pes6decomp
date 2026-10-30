/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DEF30(void *, s8);
void *func_001D6EF0();                              /* extern */

void *func_00CE4190(void) {
    void *temp_v0;
    void *var_a0;

    temp_v0 = func_001D6EF0();
    if (temp_v0 != NULL) {
        if (temp_v0 == NULL) {
            var_a0 = NULL;
        } else {
            var_a0 = M2C_FIELD(temp_v0, void **, 0xC);
        }
        func_001DEF30(var_a0, 0);
    }
    return temp_v0;
}
