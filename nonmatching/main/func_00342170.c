/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0036FDC0(s32, s32);
extern char D_003B7738[];
extern char D_003B773C[];

s32 func_00342170(s32 arg0) {
    f32 sp18;
    f32 sp1C;

    sp18 = (*(f32 *)D_003B7738);
    sp1C = (*(f32 *)D_003B773C);
    func_0036FDC0((s32) &sp18, arg0);
    return 1;
}
