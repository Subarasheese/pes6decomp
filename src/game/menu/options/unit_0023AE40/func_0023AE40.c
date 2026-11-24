/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 D_00591C09[];
extern s32 func_002306D0(void);
extern s32 func_0023AEC0(void);
extern void func_00C390C0(u8 kind, s32 allowed);

void func_0023AE40(void) {
    s32 kind;
    switch ((u8)func_002306D0()) {
    default:
        kind = 0;
        break;
    case 2:
        kind = 1;
        break;
    case 1:
        if (D_00591C09[0] == 1)
            kind = 3;
        else
            kind = 2;
        break;
    }
    func_00C390C0(kind, func_0023AEC0());
}
