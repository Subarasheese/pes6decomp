/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
extern s32 func_002F90D0(s32);
extern s32 func_002F90F0(s32);
extern void func_002F9950(s32, s32, u8);
extern char D_00CB5190[];
extern s32 D_00CCD958[];
extern s32 D_00CCD95C[];
void func_00C94530(void) {
    s32 selection;
    selection = func_002F90F0(D_00CCD95C[0]);
    func_002F9950(selection, func_002F90D0(D_00CCD95C[0]), D_00CB5190[D_00CCD958[0]]);
}
