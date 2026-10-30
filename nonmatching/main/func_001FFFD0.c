/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001FDF00(f32 *);                       /* extern */
extern char D_00592710[];
extern char D_00592714[];
extern char D_00592718[];
extern char D_00592720[];
extern char D_00592724[];
extern char D_00592728[];

void func_001FFFD0(void) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;

    sp10 = (*(f32 *)D_00592720);
    sp14 = (*(f32 *)D_00592724);
    sp18 = (*(f32 *)D_00592728);
    sp20 = (*(f32 *)D_00592710);
    sp24 = (*(f32 *)D_00592714);
    sp28 = (*(f32 *)D_00592718);
    func_001FDF00(&sp10);
    (*(f32 *)D_00592720) = sp10;
    (*(f32 *)D_00592724) = sp14;
    (*(f32 *)D_00592728) = sp18;
    (*(f32 *)D_00592710) = sp20;
    (*(f32 *)D_00592714) = sp24;
    (*(f32 *)D_00592718) = sp28;
}
