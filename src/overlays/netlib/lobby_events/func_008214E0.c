/* compiler: mwcc-3.0.1b151-O3 */
#include "types.h"
extern s32 func_002DC8A0(s32);
extern s32 func_00821080(void);
extern s32 D_008A4350[];
extern s32 D_008A4358[];
extern s32 D_008A4360[];
void func_008214E0(void) {
    s32 mode;
    mode = func_00821080();
    switch (mode) {
    case 0:
        func_002DC8A0(D_008A4350[0]);
        return;

    case 1:
        func_002DC8A0(D_008A4358[0]);
        return;

    case 2:
        func_002DC8A0(D_008A4360[0]);
        return;

    default:
        func_002DC8A0(D_008A4350[0]);
        return;
    }
}
