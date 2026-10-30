/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0065C2E0[];
extern char D_0065C2E6[];
extern char D_0065C2F0[];
extern char D_0065C304[];
extern char D_0065C305[];

void func_00628F50(s8 arg0, s8 arg1, s8 arg2) {
    (*(s8 *)D_0065C304) = arg1;
    (*(s8 *)D_0065C305) = arg2;
    (*(s8 *)D_0065C2F0) = arg0;
    (*(s8 *)D_0065C2E6) = 1;
    (*(s8 *)D_0065C2E0) = 1;
}
