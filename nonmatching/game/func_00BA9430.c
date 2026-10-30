/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBD050[];

void *func_00BA9430(s32 arg0) {
    return ((void *)D_00CBD050) + (arg0 * 0x68) + 0x14;
}
