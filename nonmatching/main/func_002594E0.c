/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00259CE0(void *);
extern u32 func_0025E0E0(s32);
extern s32 func_0025E100(s32, s32);
extern char D_0058CF40[];
extern char D_0058CF42[];
extern char D_0058CF44[];
extern char D_0058CF46[];

void func_002594E0(void) {
    u32 temp_v0;

    temp_v0 = func_0025E0E0(7);
    if ((temp_v0 == 0) || (temp_v0 == 1)) {
        func_00259CE0(((void *)D_0058CF40));
        (*(s16 *)D_0058CF44) = (*(s16 *)D_0058CF40);
        (*(s16 *)D_0058CF46) = (*(s16 *)D_0058CF42);
        func_0025E100(7, 2);
    }
}
