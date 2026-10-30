/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBD5D5[];
extern char D_00CBD5D6[];

void func_00BC8C30(s8 arg0) {
    (*(s8 *)D_00CBD5D6) = arg0;
    (*(s8 *)D_00CBD5D5) = 1;
}
