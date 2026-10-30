/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001F4380(s32);
extern char D_008EC780[];

M2C_UNK *func_008B2C00(s32 arg0) {
    void *temp_v0;

    temp_v0 = func_001F4380(arg0);
    if (temp_v0 != NULL) {
        return temp_v0 + 8;
    }
    return ((void *)D_008EC780);
}
