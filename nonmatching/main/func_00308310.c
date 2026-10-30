/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern char D_005EB274[];
extern char D_005EB278[];
extern char D_005EB27C[];
extern char D_005EB280[];

void func_00308310(s32 arg0) {
    if (arg0 == 0) {
        (*(s32 *)D_005EB274) = 0;
        (*(s32 *)D_005EB27C) = -1;
        (*(s32 *)D_005EB278) = 0;
        (*(s32 *)D_005EB280) = -1;
        return;
    }
    (*(s32 *)D_005EB274) = 0;
    (*(s32 *)D_005EB27C) = -1;
}
