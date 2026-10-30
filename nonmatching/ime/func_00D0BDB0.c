/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00D376E8[];
extern void *D_00D376F0;

s32 func_00D0BDB0(void) {
    if ((*(s32 *)D_00D376E8) == 0) {
        return 0;
    }
    if (D_00D376F0 != NULL) {
        return M2C_FIELD(D_00D376F0, s32 *, 0xDA8);
    }
    return 0;
}
