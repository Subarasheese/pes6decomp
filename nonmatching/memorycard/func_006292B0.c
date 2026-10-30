/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0065C300[];
extern char D_0065C302[];

void func_006292B0(void *arg0) {
    (*(s16 *)D_0065C300) = M2C_FIELD(arg0, s16 *, 0);
    (*(s16 *)D_0065C302) = M2C_FIELD(arg0, s16 *, 2);
}
