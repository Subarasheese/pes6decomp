/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0058D2E4[];
extern char D_0058D2E6[];

void func_0025FFF0(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) (*(s16 *)D_0058D2E4);
    M2C_FIELD(arg0, s16 *, 2) = (s16) (*(s16 *)D_0058D2E6);
}
