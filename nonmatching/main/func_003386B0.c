/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005F1CC1[];
extern char D_005F1CCC[];

void func_003386B0(s32 arg0) {
    (*(s32 *)D_005F1CCC) = arg0;
    (*(s8 *)D_005F1CC1) = 1;
}
