/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00213450(s32);
M2C_UNK func_00212E00(s32, s32);                    /* extern */
M2C_UNK func_00213180(s32, f32 *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern s32 *D_003E7E1C;
extern s32 D_003EB320;
extern char D_00CF9EE0[];
extern char D_00CF9EE4[];
extern char D_00CF9EE8[];
extern char D_00CF9EEC[];

void func_00CEF850(void) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    s32 temp_v0;

    sp10 = (*(f32 *)D_00CF9EE0);
    sp14 = (*(f32 *)D_00CF9EE4);
    sp18 = (*(f32 *)D_00CF9EE8);
    sp1C = (*(f32 *)D_00CF9EEC);
    temp_v0 = func_00213450(0);
    D_003EB320 = temp_v0;
    func_00213180(temp_v0, &sp10, 0, 4, 0);
    func_00212E00(D_003EB320, *D_003E7E1C);
}
