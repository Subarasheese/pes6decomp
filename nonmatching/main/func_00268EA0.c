/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0017E150(int);
extern char D_003AE978[];

void func_00268EA0(s8 arg0) {
    (*(s8 *)D_003AE978) = arg0;
    if (arg0 == 0) {
        func_0017E150((s32) arg0);
    }
}
