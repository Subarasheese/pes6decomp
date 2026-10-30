/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBEE0[];

void func_00B24E40(void) {
    (*(u8 *)D_00CBBEE0) = ((*(u8 *)D_00CBBEE0) & ~0x80) | 0x80;
    (*(u8 *)D_00CBBEE0) = ((*(u8 *)D_00CBBEE0) & ~8) | 8;
    (*(u8 *)D_00CBBEE0) = ((*(u8 *)D_00CBBEE0) & ~1) | 1;
}
