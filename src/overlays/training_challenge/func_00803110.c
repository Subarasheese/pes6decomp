/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_00120D90(s32, s32, s32, s32);
extern void func_00802880(void);

extern s32 D_003EA3CC;

void func_00803110(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (D_003EA3CC == 0) {
        func_00120D90((s32) func_00802880, 0x10, arg2, arg3);
    }
    D_003EA3CC = 1;
}
