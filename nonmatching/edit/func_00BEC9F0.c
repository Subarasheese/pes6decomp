/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CE64C2[];
extern char D_00CE64C3[];

void func_00BEC9F0(s8 arg0) {
    (*(s8 *)D_00CE64C2) = arg0;
    (*(s8 *)D_00CE64C3) = 1;
}
