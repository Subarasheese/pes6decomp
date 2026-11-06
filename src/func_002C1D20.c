/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003DA450[];
extern u8 D_003E9D53;
extern u8 D_003E9D51;
extern u8 D_003E9D52;
extern s32 func_00C13840(void);
extern s32 func_00C32B50(s32);
extern s32 func_00C137F0(void);
extern void func_00C131A0(s32, s32, s32);

void func_002C1D20(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 t;
    s32 y;
    s32 x;
    D_003E9D53 = 0xFF;
    D_003E9D51 = a2;
    t = D_003DA450[a3];
    D_003E9D52 = a0;
    if ((a0 & 0xFF) == 0) {
        x = func_00C13840();
    } else {
        x = func_00C32B50(a0);
    }
    if ((a1 & 0xFF) == 0xFF) {
        y = func_00C137F0();
    } else {
        y = func_00C32B50(a1);
    }
    func_00C131A0(x, y, t);
}
