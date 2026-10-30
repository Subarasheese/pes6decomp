/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001864B0(s32);
extern s32 func_002A6B20(void);
M2C_UNK func_00204D90(u8);                          /* extern */
extern char D_0092F0E8[];
extern char D_0092F25A[];
extern char D_0092F25B[];

void func_0090B290(void) {
    switch ((*(u8 *)D_0092F25A)) {                           /* irregular */
    case 2:
        (*(s8 *)D_0092F25B) = func_002A6B20();
        return;
    case 1:
        (*(s8 *)D_0092F25B) = func_002A6B20();
        return;
    case 3:
        func_00204D90((*(u8 *)D_0092F25A));
        return;
    case 4:
        func_00204D90((*(u8 *)D_0092F25A));
        func_001864B0((*(s32 *)D_0092F0E8));
        return;
    }
}
