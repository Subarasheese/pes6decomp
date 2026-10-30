/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00145380(M2C_UNK);                     /* extern */
M2C_UNK func_0014E810(s32, s32, M2C_UNK, u16, s32, s32); /* extern */
extern char D_005202F8[];
extern char D_005202FC[];
extern char D_00520300[];

void func_0019E900(s32 arg0, s32 arg1) {
    if ((*(s32 *)D_005202F8) != 0) {
        func_0014E810((*(s32 *)D_005202FC), (*(s32 *)D_005202F8), 0, (*(u16 *)D_00520300), ((s32) (arg0 * 0xFF) / arg1) & 0xFF, (*(s32 *)D_005202F8));
        func_00145380(0x2752);
    }
}
