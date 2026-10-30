/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern char D_0058CF70[];
extern char D_0058CF72[];

void func_00259CE0(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s16 *, 0) = (s16) (*(s16 *)D_0058CF70);
        M2C_FIELD(arg0, s16 *, 2) = (s16) (*(s16 *)D_0058CF72);
    }
}
