/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00297390(void);
extern char D_005E24B0[];

void func_00BBBBA0(void) {
    switch ((*(u8 *)D_005E24B0)) {                           /* irregular */
    case 5:
        func_00297390();
        return;
    case 4:
    case 3:
    case 2:
    case 1:
        return;
    }
}
