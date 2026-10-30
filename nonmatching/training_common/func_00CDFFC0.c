/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00213450(s32);
extern u32 func_001CDA50(s32);
extern void func_00213820(void *, s32);
M2C_UNK func_00212E00(s32, s32);                    /* extern */
void *func_00212FC0(M2C_UNK, f32 *, M2C_UNK, M2C_UNK, M2C_UNK, s64 *); /* extern */
M2C_UNK func_00213180(s32, f32 *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern void *D_003E7E1C;
extern s32 D_003EB2A0;
extern s32 D_003EB2A4;
extern char D_00CF99A0[];
extern char D_00CF99A4[];
extern char D_00CF99A8[];
extern char D_00CF99AC[];
extern char D_00CF99B0[];
extern char D_00CF99B4[];
extern char D_00CF99B8[];
extern char D_00CF99C0[];
extern char D_00CF99C4[];
extern char D_00CF99C8[];
extern char D_00CF99CC[];
extern char D_00CF99D0[];
extern char D_00CF99D4[];
extern char D_00CF99D8[];
extern char D_00CF99E0[];
extern char D_00CF9A88[];
extern char D_00CF9A90[];
extern char D_00CF9A94[];

void func_00CDFFC0(void) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    s64 sp58;
    f32 sp60;
    f32 sp64;
    s64 sp68;
    f32 *var_a1;
    s32 temp_v0;

    sp60 = (*(f32 *)D_00CF9A90);
    sp64 = (*(f32 *)D_00CF9A94);
    sp30 = (*(f32 *)D_00CF99A0);
    sp34 = (*(f32 *)D_00CF99A4);
    sp38 = (*(f32 *)D_00CF99A8);
    sp3C = (*(f32 *)D_00CF99AC);
    sp40 = (*(f32 *)D_00CF99B0);
    sp44 = (*(f32 *)D_00CF99B4);
    sp48 = (*(f32 *)D_00CF99B8);
    sp10 = (*(f32 *)D_00CF99C0);
    sp14 = (*(f32 *)D_00CF99C4);
    sp18 = (*(f32 *)D_00CF99C8);
    sp1C = (*(f32 *)D_00CF99CC);
    sp20 = (*(f32 *)D_00CF99D0);
    sp24 = (*(f32 *)D_00CF99D4);
    sp58 = (*(s64 *)D_00CF99E0);
    sp28 = (*(f32 *)D_00CF99D8);
    sp68 = (*(s64 *)D_00CF9A88);
    if (func_001CDA50(1) != 3) {
        var_a1 = &sp10;
    } else {
        var_a1 = &sp30;
    }
    func_00213820(func_00212FC0(0, var_a1, 0, 7, 0, &sp58), 0);
    func_00212E00(0, D_003EB2A4);
    temp_v0 = func_00213450(D_003EB2A0);
    D_003EB2A0 = temp_v0;
    func_00213820((void *) temp_v0, 0);
    func_00213180(D_003EB2A0, &sp60, 0, 2, 0);
    func_00212E00(D_003EB2A0, M2C_FIELD(D_003E7E1C, s32 *, 0x14C));
}
