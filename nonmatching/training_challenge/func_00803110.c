/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00120D90(int, int, int, int);
extern s32 D_003EA3CC;
extern M2C_UNK func_00802880;

void func_00803110(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    if (D_003EA3CC == 0) {
        func_00120D90((s32) &func_00802880, 0x10, arg2, arg3);
    }
    D_003EA3CC = 1;
}
