/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00AE1000[];

void *func_009A6000(s32 arg0, s32 arg1) {
    return (arg1 * 8) + (((void *)D_00AE1000) + (arg0 * 0x28));
}
