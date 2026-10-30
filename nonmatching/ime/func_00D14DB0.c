/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7CE0(void *, void *);
extern f32 func_001D7860(void *);
extern void *D_00D39564;
extern void *D_00D39568;
extern char D_00D39580[];
extern char D_00D39584[];
extern char D_00D395A5[];

s32 func_00D14DB0(f32 fparg0, f32 fparg1) {
    f32 sp20;
    f32 sp24;
    f32 sp28;

    if ((*(u8 *)D_00D395A5) & 1) {
        return 0;
    }
    sp20 = fparg0;
    sp24 = fparg1;
    sp28 = func_001D7860(D_00D39564);
    func_001D7CE0(D_00D39564, &sp20);
    func_001D7CE0(D_00D39568, &sp20);
    (*(f32 *)D_00D39580) = fparg0;
    (*(f32 *)D_00D39584) = fparg1;
    return 0;
}
