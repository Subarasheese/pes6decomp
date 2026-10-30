/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00214290(void *);
extern void *D_003E9A00;

void *func_002133E0(s32 *arg0) {
    if (arg0 != NULL) {
        if (arg0 != D_003E9A00) {
            if (*arg0 == D_003E9A00) {
                func_00214290(arg0);
                goto block_9;
            }
            return func_00214290(arg0);
        }
        func_00214290(arg0);
        D_003E9A00 = NULL;
        goto block_9;
    }
    func_00214290(D_003E9A00);
    D_003E9A00 = NULL;
block_9:
    return NULL;
}
