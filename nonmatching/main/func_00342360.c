/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_001CDA50(s32);
void func_001FC840(s32);
extern char D_003B7710[];
extern char D_003B7714[];
extern char D_003B7718[];
extern char D_003B771C[];
extern char D_003B7720[];
extern char D_003B7724[];
extern char D_003B7728[];
extern char D_003B772C[];
extern char D_003B7730[];
extern char D_003B7734[];

void func_00342360(void) {
    f32 t[10];
    t[0] = *(f32 *)D_003B7710;
    t[1] = *(f32 *)D_003B7714;
    t[2] = *(f32 *)D_003B7718;
    t[3] = *(f32 *)D_003B771C;
    t[4] = *(f32 *)D_003B7720;
    t[5] = *(f32 *)D_003B7724;
    t[6] = *(f32 *)D_003B7728;
    t[7] = *(f32 *)D_003B772C;
    t[8] = *(f32 *)D_003B7730;
    t[9] = *(f32 *)D_003B7734;
    func_001FC840(((s32 *)t)[func_001CDA50(0)]);
}
