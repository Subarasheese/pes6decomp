/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0058D2E4[];
extern char D_0058D2E6[];
extern char D_0058D304[];

void func_0025FA90(void) {
    M2C_FIELD(((void *)D_0058D304), s16 *, 0) = 0;
    M2C_FIELD(((void *)D_0058D304), s16 *, 2) = 0;
    M2C_FIELD(((void *)D_0058D304), s16 *, 4) = (s16) ((*(s16 *)D_0058D2E4) - 1);
    M2C_FIELD(((void *)D_0058D304), s16 *, 6) = (s16) ((*(s16 *)D_0058D2E6) - 1);
}
