/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBEEC[];
extern char D_00CBBEF0[];

void func_00B27140(void) {
    (*(s32 *)D_00CBBEF0) = 0;
    (*(u8 *)D_00CBBEEC) = ((*(u8 *)D_00CBBEEC) & ~1) | 1;
}
