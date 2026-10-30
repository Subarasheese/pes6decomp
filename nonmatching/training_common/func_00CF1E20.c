/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00213450(s32);
M2C_UNK func_00212E00(s32, s32);                    /* extern */
M2C_UNK func_00213180(s32, f32 *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern void *D_003E7E1C;
extern s32 D_003EB330;
extern char D_00CF9FF0[];
extern char D_00CF9FF4[];
extern char D_00CF9FF8[];
extern char D_00CF9FFC[];
extern char D_00CFA000[];
extern char D_00CFFED0[];

void func_00CF1E20(void) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    s32 temp_v0;

    sp10 = (*(f32 *)D_00CF9FF0);
    sp14 = (*(f32 *)D_00CF9FF4);
    sp18 = (*(f32 *)D_00CF9FF8);
    sp1C = (*(f32 *)D_00CF9FFC);
    sp20 = (*(f32 *)D_00CFA000);
    temp_v0 = func_00213450(0);
    D_003EB330 = temp_v0;
    func_00213180(temp_v0, &sp10, 0, 5, 0);
    M2C_FIELD(D_003E7E1C, s32 *, 0x14C) = (s32) (*(s32 *)D_00CFFED0);
    func_00212E00(D_003EB330, M2C_FIELD(D_003E7E1C, s32 *, 0x14C));
}
