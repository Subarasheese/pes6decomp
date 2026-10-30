/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBD5D0[];
extern char D_00CBD5D2[];
extern char D_00CBD5D3[];
extern char D_00CBD5D5[];
extern char D_00CBD5D7[];
extern char D_00CBD5DA[];
extern char D_00CBD5DC[];
extern char D_00CBD5DE[];

void func_00BC6930(void) {
    if ((*(u8 *)D_00CBD5DA) != 0x64) {
        (*(u8 *)D_00CBD5DA) = 0;
    }
    (*(s8 *)D_00CBD5D0) = 0;
    (*(s8 *)D_00CBD5D3) = 0;
    (*(s8 *)D_00CBD5D2) = 0;
    (*(s8 *)D_00CBD5D5) = 0;
    (*(s8 *)D_00CBD5D7) = 0;
    (*(s16 *)D_00CBD5DE) = 0;
    (*(s16 *)D_00CBD5DC) = 0;
}
