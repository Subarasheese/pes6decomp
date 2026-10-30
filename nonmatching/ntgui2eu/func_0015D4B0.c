/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_011E6B44[];
extern char D_011E6B48[];
extern char D_011E6B4C[];
extern char D_011E6B50[];
extern char D_011E6B54[];
extern char D_011E6B58[];

void func_0015D4B0(s32 arg0, s32 arg1) {
    (*(s32 *)D_011E6B58) = arg0;
    (*(s32 *)D_011E6B44) = arg1;
    (*(s32 *)D_011E6B48) = 0;
    (*(s32 *)D_011E6B4C) = 0;
    (*(s32 *)D_011E6B50) = 0;
    (*(s32 *)D_011E6B54) = 0;
}
