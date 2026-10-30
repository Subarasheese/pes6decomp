/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F9110(void);
extern s32 D_003EA810;
extern char D_00CCBBC0[];

void func_00C6E100(void) {
    if (D_003EA810 != 0) {
        func_002F9110();
        D_003EA810 = 0;
        (*(s32 *)D_00CCBBC0) = 0;
    }
}
