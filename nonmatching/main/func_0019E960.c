/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00153FA0(s32);                         /* extern */
M2C_UNK func_001C4730(s32, s32, u16);               /* extern */
extern char D_005202F8[];
extern char D_005202FC[];
extern char D_00520302[];

void func_0019E960(void) {
    if ((*(s32 *)D_005202FC) != 0) {
        func_001C4730((*(s32 *)D_005202F8), (*(s32 *)D_005202FC), (*(u16 *)D_00520302));
        func_00153FA0((*(s32 *)D_005202FC));
    }
    (*(s32 *)D_005202F8) = 0;
    (*(s32 *)D_005202FC) = 0;
}
