/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void Pes6Task_AddDraw(s32, s32, s32, s32);
extern void func_00802880(void);

extern s32 D_003EA3CC;

void func_00803110(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (D_003EA3CC == 0) {
        Pes6Task_AddDraw((s32) func_00802880, 0x10, arg2, arg3);
    }
    D_003EA3CC = 1;
}
