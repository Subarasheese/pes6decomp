/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
void func_00CDA690(void *arg0) {
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 4);
    if (temp_a0 != NULL) {
        func_00153FA0(temp_a0);
        M2C_FIELD(arg0, void **, 4) = NULL;
    }
}
