/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_009A71F0(void);
extern s32 func_00152130(s32, s8);
extern void func_0017E150(int);
M2C_UNK func_00272650();                            /* extern */
M2C_UNK func_009B6420(u16);                         /* extern */
M2C_UNK func_00B25C50(M2C_UNK);                     /* extern */
M2C_UNK func_00B25D40();                            /* extern */
M2C_UNK func_00B26FA0();                            /* extern */
M2C_UNK func_00B27010(M2C_UNK);                     /* extern */
s32 func_00BCCA00();                                /* extern */
extern char D_0059274A[];
extern char D_00CBAA02[];

s32 func_00BD1620(void) {
    func_009B6420((*(u16 *)D_00CBAA02));
    func_009A71F0();
    if (func_00BCCA00() != 0) {
        func_00272650();
        (*(s16 *)D_0059274A) = 0x4000;
        func_00B26FA0();
        func_00B25C50(0);
        func_00B25D40();
        func_00B27010(0);
    }
    func_00152130(1, -1);
    func_0017E150(1);
    return 0;
}
