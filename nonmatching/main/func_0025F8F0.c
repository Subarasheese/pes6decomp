/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0058D304[];

void func_0025F8F0(void *arg0, void *arg1) {
    if ((arg0 != NULL) && (arg1 != NULL)) {
        M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(((void *)D_0058D304), s16 *, 0);
        M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(((void *)D_0058D304), s16 *, 2);
        M2C_FIELD(arg1, s16 *, 0) = (s16) M2C_FIELD(((void *)D_0058D304), s16 *, 4);
        M2C_FIELD(arg1, s16 *, 2) = (s16) M2C_FIELD(((void *)D_0058D304), s16 *, 6);
    }
}
