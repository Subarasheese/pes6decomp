/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBE90[];
extern char D_00CBBE98[];

void func_00B25B30(s32 arg0) {
    (*(s32 *)D_00CBBE98) = arg0;
    (*(u8 *)D_00CBBE90) = ((*(u8 *)D_00CBBE90) & ~8) | 8;
}
