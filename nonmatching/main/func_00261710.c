/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0058D39C[];
extern char D_0058D39E[];
extern char D_0058D3A0[];
extern char D_0058D3A2[];

void func_00261710(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s16 *, 0) = (s16) (*(s16 *)D_0058D39C);
        M2C_FIELD(arg0, s16 *, 2) = (s16) (*(s16 *)D_0058D39E);
        M2C_FIELD(arg0, s16 *, 4) = (s16) (*(s16 *)D_0058D3A0);
        M2C_FIELD(arg0, s16 *, 6) = (s16) (*(s16 *)D_0058D3A2);
    }
}
