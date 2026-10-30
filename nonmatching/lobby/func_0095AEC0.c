/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C2A0();                                /* extern */
extern char D_008AA114[];

s32 func_0095AEC0(void) {
    if (func_0082C2A0() == 0) {
        return 8;
    }
    switch ((*(s32 *)D_008AA114)) {                           /* irregular */
    case -840:
        return 7;
    case -820:
        return 6;
    case -814:
        return 5;
    case -812:
        return 4;
    case -811:
        return 3;
    case -810:
        return 2;
    case -800:
        return 1;
    case 0:
        return 0;
    }
}
