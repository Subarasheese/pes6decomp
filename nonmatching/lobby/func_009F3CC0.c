/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00213800(void *);
extern void *D_00A7E248;

void func_009F3CC0(s32 arg0) {
    if (D_00A7E248 != NULL) {
        func_00213800(M2C_FIELD(D_00A7E248, void **, 4));
    }
}
