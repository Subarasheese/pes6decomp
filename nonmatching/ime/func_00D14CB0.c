/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF750(void *, f32, f32);
M2C_UNK func_001DF510(void *, f32, f32);            /* extern */
extern void *D_003EB360;
extern char D_00D39588[];
extern char D_00D395A0[];
extern char D_00D395C0[];
extern char D_00D395C4[];
extern char D_00D395C8[];
extern char D_00D395CC[];
extern char D_00D395EC[];

s32 func_00D14CB0(f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3) {
    (*(f32 *)D_00D395C0) = fparg0;
    (*(f32 *)D_00D395C4) = fparg1;
    (*(f32 *)D_00D395C8) = fparg2;
    (*(f32 *)D_00D395CC) = fparg3;
    func_001DF750(D_003EB360, fparg0, fparg1);
    func_001DF510(D_003EB360, fparg2, fparg3);
    (*(s32 *)D_00D39588) = 0;
    (*(s32 *)D_00D395A0) = (s32) (fparg3 / (16.0f + (*(f32 *)D_00D395EC)));
    return 0;
}
