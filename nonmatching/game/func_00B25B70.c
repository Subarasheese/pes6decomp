/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBE90[];
extern char D_00CBBE94[];

void func_00B25B70(s32 arg0) {
    (*(s32 *)D_00CBBE94) = arg0;
    (*(u8 *)D_00CBBE90) = ((*(u8 *)D_00CBBE90) & ~4) | 4;
}
