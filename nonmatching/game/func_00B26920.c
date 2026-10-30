/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBE74[];
extern char D_00CBBE78[];

void func_00B26920(s32 arg0) {
    (*(s32 *)D_00CBBE74) = arg0;
    (*(u8 *)D_00CBBE78) = ((*(u8 *)D_00CBBE78) & ~1) | 1;
}
