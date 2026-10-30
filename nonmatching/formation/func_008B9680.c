/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008EE190[];

void *func_008B9680(s32 arg0) {
    return ((void *)D_008EE190) + ((arg0 & 0xFF) * 0x2C) + 0x1C;
}
