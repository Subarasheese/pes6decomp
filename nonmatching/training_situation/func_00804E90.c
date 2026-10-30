/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
extern void func_001D7C20(void *, s32);
extern void func_001D7CE0(void *, void *);
extern void func_001D7D60(void *, s8);
extern char D_00813CD0[];
extern char D_00813CD4[];
extern char D_00813CD8[];
extern char D_00813CDC[];
extern char D_00CFEFF0[];
extern void *D_00CFEFF4;

void func_00804E90(void) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;

    sp10 = (*(f32 *)D_00813CD0);
    sp14 = (*(f32 *)D_00813CD4);
    sp18 = (*(f32 *)D_00813CD8);
    sp1C = (*(f32 *)D_00813CDC);
    if ((*(s32 *)D_00CFEFF0) != 0) {
        func_001D7D80(D_00CFEFF4, 0);
        func_001D7C20(D_00CFEFF4, 0);
        func_001D7D60(D_00CFEFF4, 1);
        func_001D7CE0(D_00CFEFF4, &sp10);
    }
}
