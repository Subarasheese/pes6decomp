/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_00CCB975[];
extern char D_00CCB976[];
extern char D_00CCB977[];

u8 func_00C3C060(s32 arg0) {
    u8 r = 0;
    switch (arg0) {
    case 0:
        r = *(u8 *)D_00CCB975;
        break;
    case 1:
        r = *(u8 *)D_00CCB976;
        break;
    case 2:
        r = *(u8 *)D_00CCB977;
        break;
    }
    return r;
}
