/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D67B0(void *);
void func_00B8F930(void **arg0) {
    void *temp_a0;

    if (arg0 != NULL) {
        temp_a0 = *arg0;
        if (temp_a0 == NULL) {
            return;
        }
        func_001D67B0(temp_a0);
        *arg0 = NULL;
    }
}
