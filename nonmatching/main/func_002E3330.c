/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EDA50(void *, void *);
void func_002E3330(void **arg0, void *arg1) {
    if (arg0 != NULL) {
        if (arg1 == NULL) {
            return;
        }
        func_001EDA50(*arg0, arg1);
    }
}
