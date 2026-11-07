/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005E19B0[];
extern char D_005E19B2[];
extern char D_005E19B4[];
extern char D_005E19B5[];
extern char D_005E19B6[];

void func_002A9470(u8 arg0) {
    if ((*(u8 *)D_005E19B0) != (arg0 & 0xFF)) {
        (*(u16 *)D_005E19B6) &= 0xFEFF;
    }
    (*(u8 *)D_005E19B0) = arg0;
    (*(s8 *)D_005E19B4) = 1;
    (*(u8 *)D_005E19B2) = arg0;
    (*(s8 *)D_005E19B5) = 1;
}
