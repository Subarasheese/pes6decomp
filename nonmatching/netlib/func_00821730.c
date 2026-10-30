/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A43F0[];

void *func_00821730(s32 arg0) {
    if (arg0 < 0) {
        return NULL;
    }
    if (arg0 >= 0xA) {
        return NULL;
    }
    if (((void *)D_008A43F0) != NULL) {
        return ((void *)D_008A43F0) + (arg0 << 6) + 1;
    }
    return NULL;
}
