/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002CBF20(u16, u16, M2C_UNK, M2C_UNK, M2C_UNK, s32 *, s32 *, s32 *, s64); /* extern */
extern char D_00591BB0[];
extern char D_00591BB2[];
extern char D_00591BC6[];
extern char D_00591BC7[];
extern char D_00591BC8[];
extern char D_00591BC9[];

void func_008C99E0(void) {
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;

    func_002CBF20((*(u16 *)D_00591BB0), (*(u16 *)D_00591BB2), 0, 1, 0, &sp2C, &sp28, &sp24, (s64) &sp20);
    (*(s8 *)D_00591BC8) = (s8) sp24;
    (*(s8 *)D_00591BC6) = (s8) sp2C;
    (*(s8 *)D_00591BC7) = (s8) sp28;
    (*(s8 *)D_00591BC9) = (s8) sp20;
}
