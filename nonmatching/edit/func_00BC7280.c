/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002E4570(void *);
void func_00BC7280(void **arg0) {
    if (arg0 != NULL) {
        func_002E4570(*arg0);
        *arg0 = NULL;
    }
}
