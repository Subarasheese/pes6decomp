/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBCA00[];

void *func_00B2A420(u32 arg0) {
    return ((void *)D_00CBCA00) + ((arg0 % 23U) * 8);
}
