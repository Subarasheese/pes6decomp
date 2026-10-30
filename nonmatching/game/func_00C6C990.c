/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002D33D0(void);
extern void func_00182AE0(s32);
extern char D_00CCBB40[];
extern char D_00CCBB42[];
extern char D_00CCBB44[];

void func_00C6C990(void) {
    func_002D33D0();
    (*(s8 *)D_00CCBB40) = 0;
    (*(s8 *)D_00CCBB42) = 0;
    (*(s32 *)D_00CCBB44) = 0;
    func_00182AE0(1);
}
