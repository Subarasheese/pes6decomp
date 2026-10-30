/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
extern void func_001F1EA0(void *);
void func_00AEDBD0(void **arg0) {
    if (arg0 != NULL) {
        func_001F1EA0(*arg0);
        func_00153FA0(arg0);
    }
}
