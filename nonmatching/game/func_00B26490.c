/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBE8A[];

void func_00B26490(s32 arg0) {
    (*(u8 *)D_00CBBE8A) = ((*(u8 *)D_00CBBE8A) & ~4) | ((arg0 != 0) * 4);
    (*(u8 *)D_00CBBE8A) = ((*(u8 *)D_00CBBE8A) & ~1) | 1;
}
