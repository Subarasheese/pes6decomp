/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591E4D[];
extern char D_00591E4E[];

void func_00BFF700(void) {
    (*(s8 *)D_00591E4D) = 1;
    (*(s8 *)D_00591E4E) = 0xFF;
}
