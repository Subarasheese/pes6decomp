/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0065C2E0[];
extern char D_0065C2E1[];
extern char D_0065C2E5[];
extern char D_0065C2EB[];
extern char D_0065C2FC[];
extern char D_0065C306[];

void func_006290F0(s8 arg0) {
    (*(s8 *)D_0065C306) = arg0;
    (*(s8 *)D_0065C2FC) = 1;
    (*(s8 *)D_0065C2EB) = 1;
    (*(s8 *)D_0065C2E5) = 1;
    (*(s8 *)D_0065C2E1) = 1;
    (*(s8 *)D_0065C2E0) = 1;
}
