/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00259CE0(void *);
extern u32 func_0025E0E0(s32);
extern s32 func_0025E100(s32, s32);
extern char D_0058D380[];
extern char D_0058D382[];
extern char D_0058D384[];
extern char D_0058D386[];

void func_00261980(void) {
    u32 temp_v0;

    temp_v0 = func_0025E0E0(9);
    if ((temp_v0 == 0) || (temp_v0 == 1)) {
        func_00259CE0(((void *)D_0058D380));
        (*(s16 *)D_0058D384) = (*(s16 *)D_0058D380);
        (*(s16 *)D_0058D386) = (*(s16 *)D_0058D382);
        func_0025E100(9, 2);
    }
}
