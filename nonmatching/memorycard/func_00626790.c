/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u64 func_001B6460(s32);
extern char D_00656FA8[];
extern char D_00656FE8[];
extern char D_00657028[];
extern char D_0065EF88[];

void func_00626790(void) {
    (*(s32 *)D_00656FE8) = (*(s32 *)D_0065EF88);
    (*(s32 *)D_00657028) = (*(s32 *)D_0065EF88);
    (*(s32 *)D_00656FA8) = (*(s32 *)D_0065EF88);
    func_001B6460(0);
}
