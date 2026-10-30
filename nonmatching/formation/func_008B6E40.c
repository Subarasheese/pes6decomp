/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008EBB80[];

void *func_008B6E40(s32 arg0) {
    return ((void *)D_008EBB80) + ((arg0 & 0xFF) * 0x10);
}
