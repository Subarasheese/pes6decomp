/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F4E10(void *);
M2C_UNK func_0096DA00(void **);                     /* extern */
extern void **D_003EA970;

void func_009803C0(void) {
    if (D_003EA970 != NULL) {
        func_002F4E10(*D_003EA970);
        func_0096DA00(D_003EA970);
        D_003EA970 = NULL;
    }
}
