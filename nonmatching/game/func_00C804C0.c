/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F9110(void);
extern s32 D_003EA874;
extern char D_00CCC130[];

void func_00C804C0(void) {
    if (D_003EA874 != 0) {
        func_002F9110();
        D_003EA874 = 0;
        (*(s32 *)D_00CCC130) = 0;
    }
}
