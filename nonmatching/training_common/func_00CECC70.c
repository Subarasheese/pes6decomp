/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CF9D20[];

void *func_00CECC70(s32 arg0) {
    if (arg0 < 0) {
        return NULL;
    }
    if (arg0 >= 8) {
        return NULL;
    }
    return ((void *)D_00CF9D20) + (arg0 * 4);
}
