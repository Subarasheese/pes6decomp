/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBEE0[];
extern char D_00CBBEE4[];

void func_00B24DE0(void) {
    (*(s16 *)D_00CBBEE4) = -1;
    (*(u8 *)D_00CBBEE0) = ((*(u8 *)D_00CBBEE0) & ~0x20) | 0x20;
}
