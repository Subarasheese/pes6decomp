/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern char D_00A7A208[];

void func_00974080(void) {
    if (*(void **)D_00A7A208 != NULL) {
        func_001D4E00(*(void **)D_00A7A208);
        *(void **)D_00A7A208 = NULL;
    }
}
