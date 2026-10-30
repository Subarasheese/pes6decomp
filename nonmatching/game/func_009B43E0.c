/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005A3032[];
extern char D_005A3034[];

void func_009B43E0(void) {
    if ((*(u8 *)D_005A3032) != 0) {
        (*(s8 *)D_005A3034) = 1;
    }
}
