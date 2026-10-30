/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CEB910[];

void func_00BFE480(void *arg0) {
    if (arg0 != NULL) {
        (*(s32 *)D_00CEB910) = M2C_FIELD(arg0, s32 *, 0x44);
    }
}
