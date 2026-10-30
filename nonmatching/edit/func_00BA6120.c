/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B9E30(int, int);
extern f32 D_003E7DA0;
extern char D_00CB5E34[];

void func_00BA6120(M2C_UNK arg0, s32 arg1) {
    f32 *sp10;
    s32 sp14;
    f32 sp1C;

    sp10 = &sp1C;
    sp1C = D_003E7DA0;
    sp14 = (*(s32 *)D_00CB5E34);
    func_001B9E30((s32) &sp10, arg1);
}
