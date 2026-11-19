/* compiler: mwcc-3.0.1b198 */
#include "pes6/m2c.h"

extern void func_001DF750(s32);
extern s32 D_00CCD048[];

void func_00C891A0(s32 arg0) {
    if (arg0 < 3) {
        func_001DF750(D_00CCD048[arg0]);
    }
}
