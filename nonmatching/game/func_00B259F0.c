/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBE9C[];
extern char D_00CBBEA0[];

void func_00B259F0(s32 arg0) {
    (*(s32 *)D_00CBBEA0) = arg0;
    (*(u8 *)D_00CBBE9C) = ((*(u8 *)D_00CBBE9C) & ~4) | 4;
}
