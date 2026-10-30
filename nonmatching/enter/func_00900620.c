/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00272800(void);
extern void func_0027CAD0(void);
M2C_UNK func_009003C0();                            /* extern */
M2C_UNK func_0090A3B0();                            /* extern */
M2C_UNK func_0090B4D0();                            /* extern */
M2C_UNK func_0090D4E0(M2C_UNK);                     /* extern */
extern char D_0059274E[];
extern char D_0092F256[];

s32 func_00900620(void) {
    func_0090B4D0();
    func_0090A3B0();
    func_00272800();
    (*(s16 *)D_0092F256) = 3;
    (*(s8 *)D_0059274E) = 4;
    func_0027CAD0();
    func_009003C0();
    func_0090D4E0(0x2000);
    func_0090D4E0(0x10000);
    func_0090D4E0(0x8000);
    func_0090D4E0(0x1000);
    return 1;
}
