/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00208250(s32);
extern void func_001A5F50(s32, s32);
extern void func_001A5E00(s32);
extern char D_00C9F230[];
extern char *D_00C9F23C[];
extern char func_00C22BE0[];

s32 func_00C22C20(void) {
    func_001A5F50(5, func_00208250((*(s32 *)D_00C9F230)));
    func_001A5E00(5);
    D_00C9F23C[0] = func_00C22BE0;
    return 1;
}
