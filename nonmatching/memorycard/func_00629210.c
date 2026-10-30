/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0065C2E0[];
extern char D_0065C2E8[];
extern char D_0065C2FC[];
extern char D_0065C307[];

void func_00629210(s8 arg0) {
    (*(s8 *)D_0065C307) = arg0;
    (*(s8 *)D_0065C2E8) = 1;
    (*(s8 *)D_0065C2E0) = 1;
    (*(s8 *)D_0065C2FC) = 1;
}
