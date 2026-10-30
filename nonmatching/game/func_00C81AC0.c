/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F9110(void);
extern char D_00CCC1D0[];
extern char D_00CCC1F0[];

void func_00C81AC0(s32 arg0) {
    if ((arg0 == 0) && ((*(u8 *)D_00CCC1F0) & 1)) {
        func_002F9110();
        (*(s32 *)D_00CCC1D0) = 0;
        (*(u8 *)D_00CCC1F0) = ((*(u8 *)D_00CCC1F0) & ~1) | (0 & 1);
    }
}
