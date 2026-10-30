/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0093CD10(s32, s32, s16 *);               /* extern */
s32 func_009F42B0(s32, s16);                        /* extern */
extern char D_00591E70[];

void func_009B3500(s32 arg0, s32 arg1, s32 arg2) {
    s16 sp2E;

    sp2E = 0;
    (*(f32 *)D_00591E70) = (f32) func_009F42B0(arg0, M2C_FIELD(func_0093CD10(arg1, ((u32) (arg2 & 0xFF) >> 1) & 0xFF, &sp2E), s16 *, 2));
}
