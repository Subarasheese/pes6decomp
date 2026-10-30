/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00390F50[];
extern char D_00390F58[];

void func_00176390(void) {
    (*(s32 *)D_00390F58) += 1;
    if ((*(s32 *)D_00390F58) == 1) {
        (*(s32 *)D_00390F50) = 0;
    }
}
