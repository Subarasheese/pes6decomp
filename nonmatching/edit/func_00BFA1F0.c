/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00BC9430(f32 *);                       /* extern */
M2C_UNK func_00BC9710(M2C_UNK *);                   /* extern */
extern char D_00CEB790[];
extern char D_00CEB864[];
extern char D_00CEB868[];
extern char D_00CEB86C[];
extern char D_00CEB870[];

void func_00BFA1F0(s32 arg0) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;

    if (arg0 != 0) {
        func_00BC9710(((void *)D_00CEB790));
        sp10 = (*(f32 *)D_00CEB864);
        sp14 = (*(f32 *)D_00CEB868);
        sp18 = (*(f32 *)D_00CEB86C);
        sp1C = (*(f32 *)D_00CEB870);
        func_00BC9430(&sp10);
    }
}
