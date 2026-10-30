/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
void func_008C8E30(void **arg0) {
    func_001D7F10(*arg0);
    *arg0 = NULL;
}
