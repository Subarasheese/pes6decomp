/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBAA00[];
extern char D_00CBAFD0[];

void *func_009B42E0(void) {
    return ((void *)D_00CBAFD0) + ((*(u16 *)D_00CBAA00) * 0xC);
}
