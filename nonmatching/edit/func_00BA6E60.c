/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CE4330[];

void *func_00BA6E60(s32 arg0) {
    if ((arg0 >= 0) && (arg0 < 8)) {
        return ((void *)D_00CE4330) + (arg0 * 0x50);
    }
    return NULL;
}
