/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_009FB680(s32, s32, s32, s32);
extern char D_00A7E2D0[];
extern char D_00A7EAD0[];

void func_009FB110(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    func_009FB680((s32) ((void *)D_00A7EAD0), 0xB000, (s32) ((void *)D_00A7E2D0), arg3);
}
