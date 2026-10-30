/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00844D40(M2C_UNK, M2C_UNK, s16 *, M2C_UNK); /* extern */
s8 func_009E1C90(M2C_UNK);                          /* extern */
extern char D_008B14D0[];

s32 func_00856B10(void) {
    s16 sp10;
    s32 sp14;
    s8 sp18;

    sp10 = 0x15;
    sp14 = (*(s32 *)D_008B14D0);
    sp18 = func_009E1C90(2);
    func_00844D40(9, 0, &sp10, 0xC);
    return 0;
}
