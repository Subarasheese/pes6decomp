/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0096F610();                                /* extern */
extern char D_00B34380[];

void *func_00AF71D0(s32 arg0) {
    if (func_0096F610() != 0) {
        return ((void *)D_00B34380) + (((arg0 & 0xFFFF) - 0x1770) * 0x7C) + 0x34;
    }
    return NULL;
}
