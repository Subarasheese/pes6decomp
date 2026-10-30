/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002D5960(void *, s16);
extern void func_002D5980(void *, s16);
extern char D_00CCBCD0[];

void func_00C70750(s16 arg0) {
    func_002D5980(((void *)D_00CCBCD0), arg0);
    func_002D5960(((void *)D_00CCBCD0), 0);
}
