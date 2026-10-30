/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0050E310[];
extern char D_0050E318[];

void func_00160E08(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(((void *)D_0050E310), s32 *, 4) = arg1;
    M2C_FIELD(((void *)D_0050E310), s32 *, 0) = arg0;
    M2C_FIELD(((void *)D_0050E318), s32 *, 4) = arg3;
    M2C_FIELD(((void *)D_0050E318), s32 *, 0) = arg2;
}
