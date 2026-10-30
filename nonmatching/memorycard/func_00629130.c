/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0065C2E0[];
extern char D_0065C2FC[];
extern char D_0065C2FF[];

void func_00629130(s8 arg0) {
    (*(s8 *)D_0065C2FF) = arg0;
    (*(s8 *)D_0065C2E0) = 1;
    (*(s8 *)D_0065C2FC) = 1;
}
