/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBEE0[];
extern char D_00CBBEE4[];

void func_00B24E10(s16 arg0) {
    (*(s16 *)D_00CBBEE4) = arg0;
    (*(u8 *)D_00CBBEE0) = ((*(u8 *)D_00CBBEE0) & ~0x20) | 0x20;
}
