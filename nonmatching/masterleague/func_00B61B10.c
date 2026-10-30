/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
void *func_00B61B10(void) {
    void *temp_v0;

    temp_v0 = func_00228A80();
    if (temp_v0 != NULL) {
        return temp_v0 + 0xCE32;
    }
    return NULL;
}
