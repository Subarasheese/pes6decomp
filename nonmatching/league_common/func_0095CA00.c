/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern char D_00A77EF0[];

M2C_UNK *func_0095CA00(void) {
    if (func_00231240() == 1) {
        return NULL;
    }
    return ((void *)D_00A77EF0);
}
