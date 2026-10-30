/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001F1EA0(void *);
extern void *D_003EA968;
extern s32 D_003EA96C;

void func_0097FB70(void) {
    if (D_003EA968 != NULL) {
        func_001F1EA0(D_003EA968);
        D_003EA968 = NULL;
        D_003EA96C = 0;
    }
}
