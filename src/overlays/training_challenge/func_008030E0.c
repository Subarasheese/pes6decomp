/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void Pes6Task_Remove(s32);
extern void func_00802880(void);

extern s32 D_003EA3CC;

void func_008030E0(void) {
    if (D_003EA3CC != 0) {
        Pes6Task_Remove((s32) func_00802880);
    }
    D_003EA3CC = 0;
}
