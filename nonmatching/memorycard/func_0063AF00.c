/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001EDBA0(void *, void *);
void func_0063AF00(void *arg0, void **arg1) {
    void *temp_a1;

    if (arg0 != NULL) {
        temp_a1 = *arg1;
        if (temp_a1 != NULL) {
            func_001EDBA0(arg0, temp_a1);
            *arg1 = NULL;
        }
    }
}
