/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B9E30(int, int);
extern char D_00CB5E08[];
extern char D_00CB5E0C[];
extern char D_00CB5E10[];
extern char D_00CB5E1C[];

void func_00BA6160(M2C_UNK arg0, s32 arg1) {
    f32 *sp18;
    s32 sp1C;
    f32 sp20;
    f32 sp24;
    f32 sp28;

    sp18 = &sp20;
    sp20 = (*(f32 *)D_00CB5E08);
    sp24 = (*(f32 *)D_00CB5E0C);
    sp28 = (*(f32 *)D_00CB5E10);
    sp1C = (*(s32 *)D_00CB5E1C);
    func_001B9E30((s32) &sp18, arg1);
}
